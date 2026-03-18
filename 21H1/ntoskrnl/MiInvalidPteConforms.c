/*
 * XREFs of MiInvalidPteConforms @ 0x1402838C0
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x140227DE0 (MiReservePageFileSpaceForPage.c)
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 *     MiDeleteSubsectionPages @ 0x140283240 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402855A0 (MiCheckProtoPtePageState.c)
 *     MiUpdatePfnPriorityByPte @ 0x14028F5D0 (MiUpdatePfnPriorityByPte.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiSoftFaultMappedView @ 0x1402B3FF0 (MiSoftFaultMappedView.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiTryLockLeafPage @ 0x1402FD8C4 (MiTryLockLeafPage.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiTransferPartitionPageRun @ 0x14055D320 (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInvalidPteConforms(__int64 a1)
{
  return (a1 & 1) == 0 && (!a1 || !qword_140C4DE80 || (qword_140C4DE80 & a1) != 0);
}
