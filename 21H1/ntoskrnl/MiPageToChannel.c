/*
 * XREFs of MiPageToChannel @ 0x140346578
 * Callers:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140298560 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertNumaStandbyPage @ 0x1402DA110 (MiInsertNumaStandbyPage.c)
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiGetPfnChannel @ 0x140349874 (MiGetPfnChannel.c)
 *     MiDescribePageRun @ 0x1403AEA48 (MiDescribePageRun.c)
 *     MiInitializeSystemChannelOrdering @ 0x140A904C8 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140541DE0 (MiSearchChannelTable.c)
 */

__int64 __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140C4DE10 )
    return *(unsigned __int16 *)(MiSearchChannelTable(a1) + 12);
  else
    return 0LL;
}
