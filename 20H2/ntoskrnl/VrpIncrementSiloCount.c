/*
 * XREFs of VrpIncrementSiloCount @ 0x1405CFA40
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405CFBFC (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CmRegisterInternalCallback @ 0x1405CFAE4 (CmRegisterInternalCallback.c)
 */

__int64 VrpIncrementSiloCount()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  __int64 v2; // rcx
  char v3; // bl
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpActiveSilosLock, 0LL);
  if ( VrpNumActiveSilos || (v5[0] = 917516LL, v5[1] = L"189900", v1 = CmRegisterInternalCallback(v2, v5), v1 >= 0) )
    ++VrpNumActiveSilos;
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&VrpActiveSilosLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&VrpActiveSilosLock);
  KeAbPostRelease((ULONG_PTR)&VrpActiveSilosLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
