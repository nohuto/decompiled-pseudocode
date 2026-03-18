/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1402E5690
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x14036EAB0 (VfAvlInsertReservedTreeNode.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1406E70F8 (PiDqQueryAddObjectToResultSet.c)
 *     PopCreatePowerRequestObject @ 0x1406FF910 (PopCreatePowerRequestObject.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1407007B8 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14073B570 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x140753BEC (PiSwBusRelationAdd.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14075DA40 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14076950C (PiUpdateDriverDBCache.c)
 *     EtwpEnumerateKeyProviders @ 0x14077D364 (EtwpEnumerateKeyProviders.c)
 *     PiDmObjectManagerPopulate @ 0x14078A310 (PiDmObjectManagerPopulate.c)
 *     PiDcInitUpdateProperties @ 0x14078B0F8 (PiDcInitUpdateProperties.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407A035C (EtwpEnumerateAutologgerPath.c)
 *     IopSetFileObjectIosbRange @ 0x14088E44C (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1408F3ED4 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x1402E5700 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent @ 0x1402E594C (FindNodeOrParent.c)
 */

PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent[3]; // [rsp+30h] [rbp-18h] BYREF

  NodeOrParent[0] = 0LL;
  SearchResult = (unsigned int)FindNodeOrParent(Table, Buffer, NodeOrParent);
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent[0], SearchResult);
}
