/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1405B2F1C
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1402A1C70 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x1402A2D80 (CcPinFileData.c)
 * Callees:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038EB40 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038F66C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
