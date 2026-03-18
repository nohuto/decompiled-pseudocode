/*
 * XREFs of IopFreeRelationList @ 0x140732EAC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407303C4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x140730CCC (PnpBuildRemovalRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140731638 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x140731BE8 (PnpInvalidateRelationsInList.c)
 *     IopAllocateRelationList @ 0x140732DE8 (IopAllocateRelationList.c)
 *     PipRemoveDevicesInRelationList @ 0x14075F02C (PipRemoveDevicesInRelationList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14089F180 (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x14089F3B0 (PnpProcessCompletedEject.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x140732EFC (PiClearDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
