/*
 * XREFs of MiIsFreeSlabPage @ 0x140551868
 * Callers:
 *     MiIsPageSecured @ 0x140251878 (MiIsPageSecured.c)
 *     MiFreeSlabEntries @ 0x1403181C0 (MiFreeSlabEntries.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 */

_BOOL8 __fastcall MiIsFreeSlabPage(__int64 a1)
{
  __int64 v1; // r8

  return MiIsPfnFromSlabAllocation(a1) && (*(_BYTE *)(v1 + 34) & 7) == 5 && *(_QWORD *)(v1 + 8) >= 0xFFFFFFFFFFFFFFFEuLL;
}
