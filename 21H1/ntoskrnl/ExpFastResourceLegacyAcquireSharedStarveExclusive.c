/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1405AEC9C
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1402838F0 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x140286B20 (CcPinFileData.c)
 * Callees:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038BB10 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038C63C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
