/*
 * XREFs of MiFreeTransitionPageHeatList @ 0x140559B04
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeTransitionPageHeatList(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(stru_140C4E950.Alignment) >= 0x40u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(&stru_140C4E950, ListEntry);
}
