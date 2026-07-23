/*
 * XREFs of MiLockAwePagesExclusive @ 0x14054D1F8
 * Callers:
 *     MiDeleteAweInfoPages @ 0x1408D5FEC (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408D6644 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D67A0 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14021FB50 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockExclusive(a1 + 56, 0LL);
}
