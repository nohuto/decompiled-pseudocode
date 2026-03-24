/*
 * XREFs of IopInterlockedIncrementUlong @ 0x14030F0EC
 * Callers:
 *     IopIncrementVpbRefCount @ 0x14030F0A8 (IopIncrementVpbRefCount.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140310BD0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140310C70 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall IopInterlockedIncrementUlong(KSPIN_LOCK_QUEUE_NUMBER Number, _DWORD *a2)
{
  KIRQL v4; // al

  v4 = KeAcquireQueuedSpinLock(Number);
  LODWORD(a2) = ++*a2;
  KeReleaseQueuedSpinLock(Number, v4);
  return (unsigned int)a2;
}
