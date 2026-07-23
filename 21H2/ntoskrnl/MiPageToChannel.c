/*
 * XREFs of MiPageToChannel @ 0x140309E58
 * Callers:
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402DAC10 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiInsertNumaStandbyPage @ 0x1403345E0 (MiInsertNumaStandbyPage.c)
 *     MiDescribePageRun @ 0x1403B1088 (MiDescribePageRun.c)
 *     MiInitializeSystemChannelOrdering @ 0x140A93620 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140547B40 (MiSearchChannelTable.c)
 */

__int64 __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140C4DF10 )
    return *(unsigned __int16 *)(MiSearchChannelTable(a1) + 12);
  else
    return 0LL;
}
