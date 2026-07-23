/*
 * XREFs of MiStoreFreeWriteSupport @ 0x1402582B8
 * Callers:
 *     SmIoRequestComplete @ 0x140258004 (SmIoRequestComplete.c)
 *     MiStoreWriteModifiedPages @ 0x140342AB0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreFreeWriteSupport(PSLIST_ENTRY ListEntry, _SLIST_HEADER *a2)
{
  if ( LOWORD(a2[77].Alignment) >= 0x100u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 77, ListEntry);
}
