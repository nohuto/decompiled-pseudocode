/*
 * XREFs of ExpFastResourceLegacyAcquireExclusive @ 0x14038DEF4
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140221F70 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x1405B3B20 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x14038E760 (ExAcquireFastResourceExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038F66C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireExclusive(ULONG_PTR BugCheckParameter2)
{
  void *OwnerEntryForLegacyShim; // rsi
  char v3; // bl

  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(BugCheckParameter2);
  v3 = ExAcquireFastResourceExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v3 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v3;
}
