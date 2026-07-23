/*
 * XREFs of MiLargePageMovesComplete @ 0x1403F6D20
 * Callers:
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D1370 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiWakeLargePageWaiters @ 0x140557FBC (MiWakeLargePageWaiters.c)
 */

void __fastcall MiLargePageMovesComplete(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(a1 + 16) + 4544LL * a2;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 4328), &LockHandle);
  v3 = *(_QWORD *)(v2 + 4288);
  --*(_DWORD *)(v2 + 4284);
  *(_QWORD *)(v2 + 4288) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v3 )
    MiWakeLargePageWaiters(v3);
}
