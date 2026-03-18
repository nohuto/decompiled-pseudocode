/*
 * XREFs of MiLockAwePagesExclusive @ 0x14054B4B8
 * Callers:
 *     MiDeleteAweInfoPages @ 0x1408D86CC (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408D8D24 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D8E80 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1403060F0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockExclusive(a1 + 56, 0LL);
}
