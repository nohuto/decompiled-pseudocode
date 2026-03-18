/*
 * XREFs of MiFreeTransitionPageHeatList @ 0x14055DB24
 * Callers:
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeTransitionPageHeatList(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(stru_140C4E890.Alignment) >= 0x40u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(&stru_140C4E890, ListEntry);
}
