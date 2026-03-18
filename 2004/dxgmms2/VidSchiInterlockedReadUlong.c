/*
 * XREFs of VidSchiInterlockedReadUlong @ 0x1C00113CC
 * Callers:
 *     VidSchFlushHwQueue @ 0x1C0034DE0 (VidSchFlushHwQueue.c)
 *     VidSchFlushContext @ 0x1C0080380 (VidSchFlushContext.c)
 *     VidSchFlushDevice @ 0x1C0080500 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C00D2940 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiInterlockedReadUlong(KSPIN_LOCK *a1, _DWORD *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  LODWORD(a2) = *a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)a2;
}
