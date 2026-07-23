/*
 * XREFs of PopDiscardRange @ 0x14099210C
 * Callers:
 *     PopSetRange @ 0x140384990 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140763244 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x1402E30C0 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
