/*
 * XREFs of PopDiscardRange @ 0x1409998AC
 * Callers:
 *     PopSetRange @ 0x140387AA0 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x140343250 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
