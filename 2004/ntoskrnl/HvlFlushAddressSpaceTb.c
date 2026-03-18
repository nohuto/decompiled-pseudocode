/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x14038DA2C
 * Callers:
 *     KeFlushProcessTb @ 0x14026B944 (KeFlushProcessTb.c)
 *     KiFlushAddressSpaceTb @ 0x14038D7EC (KiFlushAddressSpaceTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B4498 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     HvlpFastFlushAddressSpaceTb @ 0x14038D8D0 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14038DACC (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1404F5964 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404F5C34 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1404F5CD8 (HvlpSlowFlushAddressSpaceTbEx.c)
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
