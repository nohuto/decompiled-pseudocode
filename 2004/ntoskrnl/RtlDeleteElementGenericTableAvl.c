/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x140201B40
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x140370234 (VfAvlDeleteTreeNode.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1405D1970 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PopPowerRequestDeleteEntryById @ 0x14064D42C (PopPowerRequestDeleteEntryById.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14064DA1C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x14064DBA8 (PopCreatePowerRequestObject.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14064EAA8 (PopAvlDeleteStatsForPowerRequest.c)
 *     PiDmListRemoveObjectWorker @ 0x140714AE8 (PiDmListRemoveObjectWorker.c)
 *     PiSwProcessRemove @ 0x140720878 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x140720934 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x1407228B0 (PiSwCloseDevice.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14073376C (PnpCleanupDeviceRegistryValues.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14073546C (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x140735FE0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwIrpStartCreateWorker @ 0x1407377F8 (PiSwIrpStartCreateWorker.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14075FD50 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14076B8EC (PiUpdateDriverDBCache.c)
 *     EtwpFreeKeyNameList @ 0x14079D75C (EtwpFreeKeyNameList.c)
 *     PiDmObjectManagerPopulate @ 0x1407A46B4 (PiDmObjectManagerPopulate.c)
 *     IopCleanupFileObjectIosbRange @ 0x14088E278 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14088F76C (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x1408F52C4 (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x140201BF0 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x140359508 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v5; // eax

  if ( !Table->NumberGenericTableElements )
    return 0;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    v5 = Table->CompareRoutine(Table, Buffer, &RightChild[1]);
    if ( v5 == GenericLessThan )
    {
      RightChild = RightChild->LeftChild;
      goto LABEL_7;
    }
    if ( v5 != GenericGreaterThan )
      break;
    RightChild = RightChild->RightChild;
LABEL_7:
    if ( !RightChild )
      return 0;
  }
  if ( RightChild == Table->RestartKey )
    Table->RestartKey = (_RTL_BALANCED_LINKS *)RealPredecessor(RightChild);
  ++Table->DeleteCount;
  DeleteNodeFromTree(Table, RightChild);
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  Table->FreeRoutine(Table, RightChild);
  return 1;
}
