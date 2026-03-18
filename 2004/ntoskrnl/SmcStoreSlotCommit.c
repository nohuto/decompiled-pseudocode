/*
 * XREFs of SmcStoreSlotCommit @ 0x14092ADC0
 * Callers:
 *     SmcStoreCreate @ 0x14092A558 (SmcStoreCreate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

void __fastcall SmcStoreSlotCommit(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // rbp

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (volatile signed __int64 *)(a1 + 160);
  ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
  *(_DWORD *)(a2 + 4) &= ~4u;
  *(_DWORD *)a2 = a3;
  _InterlockedExchange64((volatile __int64 *)(a2 + 16), 0LL);
  *(_DWORD *)(a2 + 4) ^= (a4 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 3;
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
}
