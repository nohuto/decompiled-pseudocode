/*
 * XREFs of MiIsFreeSlabPage @ 0x1405B1530
 * Callers:
 *     MiIsPageSecured @ 0x14026C720 (MiIsPageSecured.c)
 *     MiPurgeSlabEntries @ 0x1405B1568 (MiPurgeSlabEntries.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 */

_BOOL8 __fastcall MiIsFreeSlabPage(__int64 a1)
{
  __int64 v1; // rdx

  return MiIsPfnFromSlabAllocation(a1) && (*(_BYTE *)(v1 + 34) & 7) == 5 && *(_QWORD *)(v1 + 8) >= 0xFFFFFFFFFFFFFFFEuLL;
}
