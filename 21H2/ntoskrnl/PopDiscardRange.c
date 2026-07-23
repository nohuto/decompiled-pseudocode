/*
 * XREFs of PopDiscardRange @ 0x1409979FC
 * Callers:
 *     PopSetRange @ 0x140388350 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140777E04 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
