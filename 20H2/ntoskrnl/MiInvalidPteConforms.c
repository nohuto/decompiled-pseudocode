/*
 * XREFs of MiInvalidPteConforms @ 0x1402C9D60
 * Callers:
 *     MiSoftFaultMappedView @ 0x140202000 (MiSoftFaultMappedView.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiUpdatePfnPriorityByPte @ 0x1402AF320 (MiUpdatePfnPriorityByPte.c)
 *     MiDeleteSubsectionPages @ 0x1402C7990 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402C9A90 (MiCheckProtoPtePageState.c)
 *     MiReservePageFileSpaceForPage @ 0x1403486C0 (MiReservePageFileSpaceForPage.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     MiTradePage @ 0x14034AE80 (MiTradePage.c)
 *     MiTryLockLeafPage @ 0x14034D840 (MiTryLockLeafPage.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MiTransferPartitionPageRun @ 0x140561340 (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInvalidPteConforms(__int64 a1)
{
  return (a1 & 1) == 0 && (!a1 || !qword_140C4DDC0 || (qword_140C4DDC0 & a1) != 0);
}
