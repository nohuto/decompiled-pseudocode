/*
 * XREFs of IopFreeRelationList @ 0x140767600
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     IopAllocateRelationList @ 0x140767538 (IopAllocateRelationList.c)
 *     PnpBuildRemovalRelationList @ 0x140767F88 (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x14080E8D0 (PnpInvalidateRelationsInList.c)
 *     PipRemoveDevicesInRelationList @ 0x14080ED34 (PipRemoveDevicesInRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140810CB4 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpProcessCompletedEject @ 0x140947450 (PnpProcessCompletedEject.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x140767650 (PiClearDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
