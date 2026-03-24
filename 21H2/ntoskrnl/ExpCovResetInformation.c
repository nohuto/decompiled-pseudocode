/*
 * XREFs of ExpCovResetInformation @ 0x140958064
 * Callers:
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402F1440 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusive @ 0x1402F2C70 (ExfAcquirePushLockExclusive.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x14068B130 (RtlDuplicateUnicodeString.c)
 *     MmEnumerateSystemImages @ 0x140797DE0 (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x140957380 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x14095753C (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovReadRequestBuffer @ 0x140957EDC (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovResetInformation(unsigned __int64 a1, unsigned int a2)
{
  int v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rbx
  __int64 *v8; // r14
  int v9; // [rsp+20h] [rbp-98h] BYREF
  UNICODE_STRING StringIn; // [rsp+28h] [rbp-90h] BYREF
  __int128 v11; // [rsp+38h] [rbp-80h] BYREF
  __int64 v12; // [rsp+48h] [rbp-70h]
  UNICODE_STRING v13[4]; // [rsp+50h] [rbp-68h] BYREF
  UNICODE_STRING v14; // [rsp+90h] [rbp-28h] BYREF

  memset(v13, 0, sizeof(v13));
  StringIn = 0LL;
  v9 = 0;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( a2 < 0x18 )
    return 3221225476LL;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  v11 = *(_OWORD *)a1;
  v12 = *(_QWORD *)(a1 + 16);
  v5 = ExpCovReadRequestBuffer((int *)&v11, &StringIn, &v14, &v9);
  if ( v5 >= 0 )
  {
    *(_DWORD *)&v13[3].Length = v9;
    v13[2] = v14;
    if ( !StringIn.Buffer || (v5 = RtlDuplicateUnicodeString(1u, &StringIn, &v13[1]), v5 >= 0) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v5 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovResetInfoCallBack, (__int64)v13);
      if ( v5 >= 0 )
      {
        ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
        for ( i = (__int64 *)ExpCovUnloadedModuleList; i != &ExpCovUnloadedModuleList; i = (__int64 *)*i )
        {
          v8 = i;
          if ( i[7] && ExpCovIsUnLoadedModulePresent((__int64)i, v9, &StringIn, &v14) )
          {
            i = (__int64 *)i[1];
            ExpCovDeleteUnloadedModuleEntry(v8);
          }
        }
        ExfReleasePushLock(&ExpCovPushLock);
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
  if ( v13[1].Buffer )
    RtlFreeAnsiString(&v13[1]);
  return (unsigned int)v5;
}
