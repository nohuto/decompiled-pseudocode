/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x14023FA10
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x140371630 (VfAvlInsertReservedTreeNode.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1406DD328 (PiDqQueryAddObjectToResultSet.c)
 *     PopCreatePowerRequestObject @ 0x14071D0A0 (PopCreatePowerRequestObject.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14071D27C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PiSwIrpStartCreateWorker @ 0x140746C88 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x140747290 (PiSwBusRelationAdd.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14074C000 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14076E3C0 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14077A6AC (PiUpdateDriverDBCache.c)
 *     EtwpEnumerateKeyProviders @ 0x14078ED40 (EtwpEnumerateKeyProviders.c)
 *     PiDmObjectManagerPopulate @ 0x140798920 (PiDmObjectManagerPopulate.c)
 *     PiDcInitUpdateProperties @ 0x140799708 (PiDcInitUpdateProperties.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407ABBD0 (EtwpEnumerateAutologgerPath.c)
 *     IopSetFileObjectIosbRange @ 0x140895254 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1408FADD4 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x14023FA80 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent @ 0x14023FCCC (FindNodeOrParent.c)
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
