/*
 * XREFs of SmpSystemStoreCreate @ 0x1407B8E00
 * Callers:
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 *     SmProcessConfigRequest @ 0x1407B8CEC (SmProcessConfigRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     SmpDirtyStoreCreate @ 0x1406558E8 (SmpDirtyStoreCreate.c)
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
           (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_140C4E588 + 6928LL) >> 8) >> 1,
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
    ExfTryToWakePushLock(&qword_140D241B8);
  KeAbPostRelease((ULONG_PTR)&qword_140D241B8);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
