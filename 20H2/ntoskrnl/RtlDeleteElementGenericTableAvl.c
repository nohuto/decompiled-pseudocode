/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x14023F7B0
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x140372184 (VfAvlDeleteTreeNode.c)
 *     PiPnpRtlEndOperation @ 0x14064120C (PiPnpRtlEndOperation.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1406D80D8 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14071CB48 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x14071D0A0 (PopCreatePowerRequestObject.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14071D27C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopPowerRequestDeleteEntryById @ 0x14071DCC8 (PopPowerRequestDeleteEntryById.c)
 *     PiDmListRemoveObjectWorker @ 0x140722AB0 (PiDmListRemoveObjectWorker.c)
 *     PiSwProcessRemove @ 0x14072E868 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x14072E924 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x1407309C0 (PiSwCloseDevice.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140742BFC (PnpCleanupDeviceRegistryValues.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407448FC (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x140745470 (PiPnpRtlObjectEventWorker.c)
 *     PiSwIrpStartCreateWorker @ 0x140746C88 (PiSwIrpStartCreateWorker.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14076E3C0 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14077A6AC (PiUpdateDriverDBCache.c)
 *     PiDmObjectManagerPopulate @ 0x140798920 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x1407ACA8C (EtwpFreeKeyNameList.c)
 *     IopCleanupFileObjectIosbRange @ 0x140893DC8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140895254 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x1408FAED4 (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x14023F860 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x140329C5C (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
