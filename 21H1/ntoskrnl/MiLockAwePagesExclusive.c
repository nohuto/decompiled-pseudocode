/*
 * XREFs of MiLockAwePagesExclusive @ 0x140547498
 * Callers:
 *     MiDeleteAweInfoPages @ 0x1408D153C (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408D1B94 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D1CF0 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402F6030 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockExclusive(a1 + 56, 0LL);
}
