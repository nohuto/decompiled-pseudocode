/*
 * XREFs of ExpCovResetInformation @ 0x140A03DA4
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusive @ 0x14029F100 (ExfAcquirePushLockExclusive.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLock @ 0x140359E10 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     MmEnumerateSystemImages @ 0x140814DC0 (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x140A030B0 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x140A0326C (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovReadRequestBuffer @ 0x140A03C14 (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovResetInformation(unsigned __int64 a1, unsigned int a2)
{
  __int64 v5; // rax
  int v6; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rbx
  __int64 *v9; // r14
  int v10; // [rsp+20h] [rbp-98h] BYREF
  UNICODE_STRING StringIn; // [rsp+28h] [rbp-90h] BYREF
  __int128 v12; // [rsp+38h] [rbp-80h] BYREF
  __int64 v13; // [rsp+48h] [rbp-70h]
  UNICODE_STRING v14[4]; // [rsp+50h] [rbp-68h] BYREF
  UNICODE_STRING v15; // [rsp+90h] [rbp-28h] BYREF

  memset(v14, 0, sizeof(v14));
  StringIn = 0LL;
  v10 = 0;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( a2 < 0x18 )
    return 3221225476LL;
  v5 = 0x7FFFFFFF0000LL;
  if ( a1 < 0x7FFFFFFF0000LL )
    v5 = a1;
  v12 = *(_OWORD *)v5;
  v13 = *(_QWORD *)(v5 + 16);
  v6 = ExpCovReadRequestBuffer((int *)&v12, &StringIn, &v15, &v10);
  if ( v6 >= 0 )
  {
    *(_DWORD *)&v14[3].Length = v10;
    v14[2] = v15;
    if ( !StringIn.Buffer || (v6 = RtlDuplicateUnicodeString(1u, &StringIn, &v14[1]), v6 >= 0) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v6 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovResetInfoCallBack, (__int64)v14);
      if ( v6 >= 0 )
      {
        ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
        for ( i = (__int64 *)ExpCovUnloadedModuleList; i != &ExpCovUnloadedModuleList; i = (__int64 *)*i )
        {
          v9 = i;
          if ( i[7] && ExpCovIsUnLoadedModulePresent((__int64)i, v10, &StringIn, &v15) )
          {
            i = (__int64 *)i[1];
            ExpCovDeleteUnloadedModuleEntry(v9);
          }
        }
        ExfReleasePushLock(&ExpCovPushLock);
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  if ( StringIn.Buffer )
    RtlFreeUnicodeString(&StringIn);
  if ( v14[1].Buffer )
    RtlFreeUnicodeString(&v14[1]);
  return (unsigned int)v6;
}
