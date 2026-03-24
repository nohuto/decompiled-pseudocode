/*
 * XREFs of MiLockAwePagesExclusive @ 0x14054CFB8
 * Callers:
 *     MiDeleteAweInfoPages @ 0x1408D5E8C (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408D64E4 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D6640 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A2710 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockExclusive(a1 + 56, 0LL);
}
