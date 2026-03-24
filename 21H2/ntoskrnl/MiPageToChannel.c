/*
 * XREFs of MiPageToChannel @ 0x1402FF108
 * Callers:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402363C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageInNodeList @ 0x1402FEA50 (MiInsertLargePageInNodeList.c)
 *     MiGetPfnChannel @ 0x1403041C4 (MiGetPfnChannel.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiInsertNumaStandbyPage @ 0x140329890 (MiInsertNumaStandbyPage.c)
 *     MiDescribePageRun @ 0x1403B0F18 (MiDescribePageRun.c)
 *     MiInitializeSystemChannelOrdering @ 0x140A92620 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140547900 (MiSearchChannelTable.c)
 */

__int64 __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140C4DED0 )
    return *(unsigned __int16 *)(MiSearchChannelTable(a1) + 12);
  else
    return 0LL;
}
