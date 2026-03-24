/*
 * XREFs of PopDiscardRange @ 0x1409969FC
 * Callers:
 *     PopSetRange @ 0x140388200 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140777C44 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x140358F70 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
