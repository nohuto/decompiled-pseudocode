/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x140342B54
 * Callers:
 *     SeTokenCanImpersonate @ 0x1406816E0 (SeTokenCanImpersonate.c)
 *     SepIsSiblingTokenByPointer @ 0x1406E8608 (SepIsSiblingTokenByPointer.c)
 *     NtCompareTokens @ 0x1406E8780 (NtCompareTokens.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
