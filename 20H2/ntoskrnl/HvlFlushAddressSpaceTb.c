/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x14038FF1C
 * Callers:
 *     KeFlushProcessTb @ 0x140263464 (KeFlushProcessTb.c)
 *     KiFlushAddressSpaceTb @ 0x14038FCDC (KiFlushAddressSpaceTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B5E58 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     HvlpFastFlushAddressSpaceTb @ 0x14038FDC0 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14038FFBC (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1404F91F4 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404F94C4 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1404F9568 (HvlpSlowFlushAddressSpaceTbEx.c)
 */

__int64 __fastcall HvlFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = a1;
  if ( a2 && (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(a1, a2, a3, a1) )
  {
    if ( ((HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowFlushAddressSpaceTbEx(v3);
    else
      return HvlpFastFlushAddressSpaceTbEx(v3);
  }
  else if ( (HvlEnlightenments & 0x80u) == 0 )
  {
    return HvlpSlowFlushAddressSpaceTb(v3, a2, a3);
  }
  else
  {
    return HvlpFastFlushAddressSpaceTb(v3, a2, a3, v3);
  }
}
