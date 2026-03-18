/*
 * XREFs of MiLockAwePagesExclusive @ 0x140547AE8
 * Callers:
 *     MiDeleteAweInfoPages @ 0x1408D288C (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408D2EE4 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D3040 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140332ED0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockExclusive(a1 + 56, 0LL);
}
