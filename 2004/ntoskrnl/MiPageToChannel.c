/*
 * XREFs of MiPageToChannel @ 0x140317238
 * Callers:
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14023F530 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertNumaStandbyPage @ 0x1402793E0 (MiInsertNumaStandbyPage.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiGetPfnChannel @ 0x14031A534 (MiGetPfnChannel.c)
 *     MiDescribePageRun @ 0x1403A8628 (MiDescribePageRun.c)
 *     MiInitializeSystemChannelOrdering @ 0x140A8FAB8 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140542430 (MiSearchChannelTable.c)
 */

__int64 __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140C4DCD0 )
    return *(unsigned __int16 *)(MiSearchChannelTable(a1) + 12);
  else
    return 0LL;
}
