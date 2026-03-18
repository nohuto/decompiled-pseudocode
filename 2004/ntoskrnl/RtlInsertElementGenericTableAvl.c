/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x140201DA0
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x14036F6E0 (VfAvlInsertReservedTreeNode.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14064DA1C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x14064DBA8 (PopCreatePowerRequestObject.c)
 *     PiDqQueryAddObjectToResultSet @ 0x14070B030 (PiDqQueryAddObjectToResultSet.c)
 *     PiSwIrpStartCreateWorker @ 0x1407377F8 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x140738380 (PiSwBusRelationAdd.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14073D0F0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14075FD50 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14076B8EC (PiUpdateDriverDBCache.c)
 *     EtwpEnumerateKeyProviders @ 0x14077C948 (EtwpEnumerateKeyProviders.c)
 *     PiDcInitUpdateProperties @ 0x14078CFC8 (PiDcInitUpdateProperties.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079C8A0 (EtwpEnumerateAutologgerPath.c)
 *     PiDmObjectManagerPopulate @ 0x1407A46B4 (PiDmObjectManagerPopulate.c)
 *     IopSetFileObjectIosbRange @ 0x14088F76C (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1408F51C4 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x140201E10 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent @ 0x14020205C (FindNodeOrParent.c)
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
