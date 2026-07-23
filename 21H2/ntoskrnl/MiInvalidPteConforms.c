/*
 * XREFs of MiInvalidPteConforms @ 0x1402DFD90
 * Callers:
 *     MiSoftFaultMappedView @ 0x14020A740 (MiSoftFaultMappedView.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiDeleteSubsectionPages @ 0x1402DD9C0 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402DFAC0 (MiCheckProtoPtePageState.c)
 *     MiReservePageFileSpaceForPage @ 0x1402E1EB0 (MiReservePageFileSpaceForPage.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 *     MiTryLockLeafPage @ 0x14030E6C8 (MiTryLockLeafPage.c)
 *     MiUpdatePfnPriorityByPte @ 0x140336C60 (MiUpdatePfnPriorityByPte.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MiTransferPartitionPageRun @ 0x140563050 (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInvalidPteConforms(__int64 a1)
{
  return (a1 & 1) == 0 && (!a1 || !qword_140C4DF80 || (qword_140C4DF80 & a1) != 0);
}
