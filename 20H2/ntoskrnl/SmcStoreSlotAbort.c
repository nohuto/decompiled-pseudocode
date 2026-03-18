/*
 * XREFs of SmcStoreSlotAbort @ 0x140930B54
 * Callers:
 *     SmcStoreCreate @ 0x140930380 (SmcStoreCreate.c)
 *     SmcStoreSlotReserve @ 0x140930C90 (SmcStoreSlotReserve.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
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
