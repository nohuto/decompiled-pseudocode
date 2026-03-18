/*
 * XREFs of ExpFastResourceLegacyAcquireExclusive @ 0x14038AEC4
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140261F10 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x1405AF8A0 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x14038B730 (ExAcquireFastResourceExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038C63C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireExclusive(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  void *OwnerEntryForLegacyShim; // rsi
  char v4; // bl

  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(BugCheckParameter2, a2);
  v4 = ExAcquireFastResourceExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v4 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v4;
}
