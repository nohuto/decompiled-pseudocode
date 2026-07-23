/*
 * XREFs of PopDiscardRange @ 0x14099374C
 * Callers:
 *     PopSetRange @ 0x140385900 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x1402D6370 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
