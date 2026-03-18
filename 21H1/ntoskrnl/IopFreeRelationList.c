/*
 * XREFs of IopFreeRelationList @ 0x1407331A0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14073279C (PnpProcessQueryRemoveAndEject.c)
 *     IopAllocateRelationList @ 0x1407330DC (IopAllocateRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14073331C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x1407338CC (PnpInvalidateRelationsInList.c)
 *     PnpBuildRemovalRelationList @ 0x140734964 (PnpBuildRemovalRelationList.c)
 *     PipRemoveDevicesInRelationList @ 0x140737130 (PipRemoveDevicesInRelationList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14089DE60 (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x14089E090 (PnpProcessCompletedEject.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x1407331F0 (PiClearDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
