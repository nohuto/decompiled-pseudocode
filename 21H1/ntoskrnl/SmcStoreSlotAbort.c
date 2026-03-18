/*
 * XREFs of SmcStoreSlotAbort @ 0x140929A7C
 * Callers:
 *     SmcStoreCreate @ 0x1409292A8 (SmcStoreCreate.c)
 *     SmcStoreSlotReserve @ 0x140929BB8 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

void __fastcall SmcStoreSlotAbort(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _PRIVILEGE_SET *v6; // rbp

  v3 = (volatile signed __int64 *)(a1 + 160);
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
  }
  *(_DWORD *)(a2 + 4) &= ~4u;
  v6 = *(struct _PRIVILEGE_SET **)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  CmSiFreeMemory(v6);
}
