/*
 * XREFs of MiStoreFreeWriteSupport @ 0x14037AF04
 * Callers:
 *     SmIoRequestComplete @ 0x14037ADB8 (SmIoRequestComplete.c)
 *     MiStoreWriteModifiedPages @ 0x14037B44C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreFreeWriteSupport(PSLIST_ENTRY ListEntry, union _SLIST_HEADER *a2)
{
  if ( LOWORD(a2[78].Alignment) >= 0x100u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 78, ListEntry);
}
