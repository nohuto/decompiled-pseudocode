/*
 * XREFs of MiFreeTransitionPageHeatList @ 0x14055A154
 * Callers:
 *     MmCopyToCachedPage @ 0x140223C10 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeTransitionPageHeatList(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(stru_140C4E810.Alignment) >= 0x40u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(&stru_140C4E810, ListEntry);
}
