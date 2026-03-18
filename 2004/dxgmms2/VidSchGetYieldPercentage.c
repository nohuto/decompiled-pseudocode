/*
 * XREFs of VidSchGetYieldPercentage @ 0x1C0034EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchGetYieldPercentage(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
  *a3 = *(_DWORD *)(a1 + 200);
  *a2 ^= (*a2 ^ (*(_DWORD *)(a1 + 2448) >> 2)) & 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
