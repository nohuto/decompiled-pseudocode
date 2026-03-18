/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14063CD9C
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1402339A0 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x14032AD00 (CcPinFileData.c)
 * Callees:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14039BA90 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14039C618 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireSharedStarveExclusive(ULONG_PTR BugCheckParameter2, char a2)
{
  _BYTE *OwnerEntryForLegacyShim; // rsi
  char v5; // bl

  OwnerEntryForLegacyShim = ExpAllocateOwnerEntryForLegacyShim();
  v5 = ExAcquireFastResourceSharedStarveExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim, a2);
  if ( !v5 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v5;
}
