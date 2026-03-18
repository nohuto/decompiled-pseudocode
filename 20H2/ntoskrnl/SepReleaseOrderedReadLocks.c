/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x140204E28
 * Callers:
 *     NtCompareTokens @ 0x1405E25F0 (NtCompareTokens.c)
 *     SeTokenCanImpersonate @ 0x140606E90 (SeTokenCanImpersonate.c)
 *     SepIsSiblingTokenByPointer @ 0x1406D0D5C (SepIsSiblingTokenByPointer.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
