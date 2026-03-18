/*
 * XREFs of MiPageToChannel @ 0x1403B76EC
 * Callers:
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiSynchronizeFastPageInsert @ 0x1402C0900 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C8740 (MiUnlinkFreeOrZeroedPage.c)
 *     MiLargePagePromote @ 0x1402CC9A0 (MiLargePagePromote.c)
 *     MiGetPfnChannel @ 0x1402E8990 (MiGetPfnChannel.c)
 *     MiPurgingPageFromLookaside @ 0x1402E9540 (MiPurgingPageFromLookaside.c)
 *     MiAllocateMdlPagesByLists @ 0x140324C60 (MiAllocateMdlPagesByLists.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiAcquirePageListLock @ 0x1403277D0 (MiAcquirePageListLock.c)
 *     MiEnqueuePageList @ 0x1403365F0 (MiEnqueuePageList.c)
 *     MiPfnToStandbyLookaside @ 0x140339140 (MiPfnToStandbyLookaside.c)
 *     MiDescribePageRun @ 0x1403B7624 (MiDescribePageRun.c)
 *     MiInsertHugeRangeInList @ 0x1405875A0 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1405891A4 (MiUnlinkHugeRange.c)
 *     MiInitializeSystemChannelOrdering @ 0x140B52168 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1405A6950 (MiSearchChannelTable.c)
 */

__int64 __fastcall MiPageToChannel(ULONG_PTR a1)
{
  if ( qword_140C50710 )
    return *(unsigned __int16 *)(MiSearchChannelTable(a1) + 12);
  else
    return 0LL;
}
