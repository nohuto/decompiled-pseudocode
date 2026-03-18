/*
 * XREFs of ExpFastResourceLegacyAcquireExclusive @ 0x14039BA38
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1402AEE80 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x14063D340 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x14039BDE0 (ExAcquireFastResourceExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14039C618 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireExclusive(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  void *OwnerEntryForLegacyShim; // rsi
  char v5; // bl

  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(BugCheckParameter2, a2, a3);
  v5 = ExAcquireFastResourceExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v5 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v5;
}
