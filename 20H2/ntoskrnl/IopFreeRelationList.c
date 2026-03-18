/*
 * XREFs of IopFreeRelationList @ 0x14074233C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14073F768 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x140740070 (PnpBuildRemovalRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1407409DC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x140740F8C (PnpInvalidateRelationsInList.c)
 *     IopAllocateRelationList @ 0x140742278 (IopAllocateRelationList.c)
 *     PipRemoveDevicesInRelationList @ 0x14076D69C (PipRemoveDevicesInRelationList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408A4CB0 (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x1408A4EE0 (PnpProcessCompletedEject.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x14074238C (PiClearDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeRelationList(_QWORD *P)
{
  void *v1; // rdi

  if ( P )
  {
    v1 = (void *)*P;
    if ( *P )
    {
      PiClearDeviceObjectList(*P);
      ExFreePoolWithTag(v1, 0);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x54706E50u);
  }
}
