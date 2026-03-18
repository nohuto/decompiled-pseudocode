/*
 * XREFs of MiInvalidPteConforms @ 0x140273A80
 * Callers:
 *     MiTryLockLeafPage @ 0x1402708F4 (MiTryLockLeafPage.c)
 *     MiSoftFaultMappedView @ 0x140270A00 (MiSoftFaultMappedView.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiDeleteSubsectionPages @ 0x140273390 (MiDeleteSubsectionPages.c)
 *     MiLockLeafPage @ 0x1402738F0 (MiLockLeafPage.c)
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140316E90 (MiUpdatePfnForPrefetchByPte.c)
 *     MiCheckProtoPtePageState @ 0x140337B00 (MiCheckProtoPtePageState.c)
 *     MiReservePageFileSpaceForPage @ 0x14033B190 (MiReservePageFileSpaceForPage.c)
 *     MiTransferPartitionPageRun @ 0x1405BF718 (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInvalidPteConforms(__int64 a1)
{
  return (a1 & 1) == 0 && (!a1 || !qword_140C50780 || (qword_140C50780 & a1) != 0);
}
