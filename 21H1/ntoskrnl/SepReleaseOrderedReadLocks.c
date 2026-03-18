/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x1403050F4
 * Callers:
 *     SeTokenCanImpersonate @ 0x140609600 (SeTokenCanImpersonate.c)
 *     SepIsSiblingTokenByPointer @ 0x1406C7F48 (SepIsSiblingTokenByPointer.c)
 *     NtCompareTokens @ 0x1406C80C0 (NtCompareTokens.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
