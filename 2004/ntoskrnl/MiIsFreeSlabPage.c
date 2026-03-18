/*
 * XREFs of MiIsFreeSlabPage @ 0x14054DE98
 * Callers:
 *     MiIsPageSecured @ 0x14033FB58 (MiIsPageSecured.c)
 *     MiFreeSlabEntries @ 0x140346D00 (MiFreeSlabEntries.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 */

_BOOL8 __fastcall MiIsFreeSlabPage(__int64 a1)
{
  __int64 v1; // r8

  return MiIsPfnFromSlabAllocation(a1) && (*(_BYTE *)(v1 + 34) & 7) == 5 && *(_QWORD *)(v1 + 8) >= 0xFFFFFFFFFFFFFFFEuLL;
}
