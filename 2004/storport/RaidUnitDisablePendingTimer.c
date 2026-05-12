/*
 * XREFs of RaidUnitDisablePendingTimer @ 0x1C000FA74
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000F8B0 (RaidUnitPendingDpcRoutine.c)
 *     StorPortUnitDirectedPowerDownCompletion @ 0x1C00402B0 (StorPortUnitDirectedPowerDownCompletion.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0040D50 (StorPortUnitPoFxD3Completion.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDisablePendingTimer(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  if ( (*(_BYTE *)(a1 + 449) & 0x20) == 0 && (*(_DWORD *)(a1 + 456) & 4) == 0 )
  {
    KeCancelTimer((PKTIMER)(a1 + 928));
    *(_BYTE *)(a1 + 449) |= 0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
