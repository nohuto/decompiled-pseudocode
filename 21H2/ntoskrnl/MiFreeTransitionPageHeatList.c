/*
 * XREFs of MiFreeTransitionPageHeatList @ 0x14055F5F4
 * Callers:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x140331500 (MmCopyToCachedPage.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeTransitionPageHeatList(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(stru_140C4EA10.Alignment) >= 0x40u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(&stru_140C4EA10, ListEntry);
}
