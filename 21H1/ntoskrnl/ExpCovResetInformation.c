/*
 * XREFs of ExpCovResetInformation @ 0x140953354
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquirePushLockExclusive @ 0x140359E10 (ExfAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x14035A550 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1406B0430 (RtlDuplicateUnicodeString.c)
 *     MmEnumerateSystemImages @ 0x140780B00 (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x140952674 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x140952830 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovReadRequestBuffer @ 0x1409531CC (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovResetInformation(unsigned __int64 a1, unsigned int a2)
{
  int v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *i; // rbx
  __int64 *v11; // r14
  int v12; // [rsp+20h] [rbp-98h] BYREF
  UNICODE_STRING StringIn; // [rsp+28h] [rbp-90h] BYREF
  __int128 v14; // [rsp+38h] [rbp-80h] BYREF
  __int64 v15; // [rsp+48h] [rbp-70h]
  UNICODE_STRING v16[4]; // [rsp+50h] [rbp-68h] BYREF
  UNICODE_STRING v17; // [rsp+90h] [rbp-28h] BYREF

  memset(v16, 0, sizeof(v16));
  StringIn = 0LL;
  v12 = 0;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( a2 < 0x18 )
    return 3221225476LL;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  v14 = *(_OWORD *)a1;
  v15 = *(_QWORD *)(a1 + 16);
  v5 = ExpCovReadRequestBuffer((int *)&v14, &StringIn, &v17, &v12);
  if ( v5 >= 0 )
  {
    *(_DWORD *)&v16[3].Length = v12;
    v16[2] = v17;
    if ( !StringIn.Buffer || (v5 = RtlDuplicateUnicodeString(1u, &StringIn, &v16[1]), v5 >= 0) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v5 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovResetInfoCallBack, (__int64)v16);
      if ( v5 >= 0 )
      {
        ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
        for ( i = (__int64 *)ExpCovUnloadedModuleList; i != &ExpCovUnloadedModuleList; i = (__int64 *)*i )
        {
          v11 = i;
          if ( i[7] && ExpCovIsUnLoadedModulePresent((__int64)i, v12, &StringIn, &v17) )
          {
            i = (__int64 *)i[1];
            ExpCovDeleteUnloadedModuleEntry(v11);
          }
        }
        ExfReleasePushLock(&ExpCovPushLock);
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
    }
  }
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
  if ( v16[1].Buffer )
    RtlFreeAnsiString(&v16[1]);
  return (unsigned int)v5;
}
