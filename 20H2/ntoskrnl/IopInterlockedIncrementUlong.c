/*
 * XREFs of IopInterlockedIncrementUlong @ 0x14020B0C0
 * Callers:
 *     IopIncrementVpbRefCount @ 0x14020B07C (IopIncrementVpbRefCount.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall IopInterlockedIncrementUlong(KSPIN_LOCK_QUEUE_NUMBER Number, _DWORD *a2)
{
  KIRQL v4; // al

  v4 = KeAcquireQueuedSpinLock(Number);
  LODWORD(a2) = ++*a2;
  KeReleaseQueuedSpinLock(Number, v4);
  return (unsigned int)a2;
}
