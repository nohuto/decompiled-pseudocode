/*
 * XREFs of SmpSystemStoreCreate @ 0x1407BBF70
 * Callers:
 *     MiCreatePagingFile @ 0x1407A267C (MiCreatePagingFile.c)
 *     SmProcessConfigRequest @ 0x1407BBE5C (SmProcessConfigRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     SmpDirtyStoreCreate @ 0x1406CFF48 (SmpDirtyStoreCreate.c)
 */

__int64 SmpSystemStoreCreate()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  int v3; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D241B8, 0LL);
  if ( dword_140D241B0 == -1 )
  {
    v1 = SmpDirtyStoreCreate(
           (__int64)&SmGlobals,
           (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_140C4E448 + 6928LL) >> 8) >> 1,
           0,
           &v3);
    if ( v1 >= 0 )
      dword_140D241B0 = v3;
  }
  else
  {
    v1 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D241B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140D241B8);
  KeAbPostRelease((ULONG_PTR)&qword_140D241B8);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
