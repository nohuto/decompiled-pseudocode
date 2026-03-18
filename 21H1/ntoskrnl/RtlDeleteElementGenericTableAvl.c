/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1402E5430
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x14036F604 (VfAvlDeleteTreeNode.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1406A02D0 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlEndOperation @ 0x1406A5E98 (PiPnpRtlEndOperation.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1406FF4A0 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x1406FF910 (PopCreatePowerRequestObject.c)
 *     PopPowerRequestDeleteEntryById @ 0x140700744 (PopPowerRequestDeleteEntryById.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1407007B8 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PiDmListRemoveObjectWorker @ 0x14071CCE8 (PiDmListRemoveObjectWorker.c)
 *     PiSwProcessRemove @ 0x14071EAD8 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x14071EB94 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x1407209F0 (PiSwCloseDevice.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14072DF88 (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x14072EEE0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1407571F0 (PnpCleanupDeviceRegistryValues.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14075DA40 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14076950C (PiUpdateDriverDBCache.c)
 *     PiDmObjectManagerPopulate @ 0x14078A310 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x1407A1218 (EtwpFreeKeyNameList.c)
 *     IopCleanupFileObjectIosbRange @ 0x14088CF58 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14088E44C (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x1408F3FD4 (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x1402E54E0 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x14031B938 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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
