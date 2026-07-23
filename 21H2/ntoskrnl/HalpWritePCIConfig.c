/*
 * XREFs of HalpWritePCIConfig @ 0x14039E92C
 * Callers:
 *     HalpSetPCIData @ 0x14039E9F4 (HalpSetPCIData.c)
 *     HalpValidPCISlot @ 0x14039ECC4 (HalpValidPCISlot.c)
 * Callees:
 *     HalpPCIConfig @ 0x14022FCD0 (HalpPCIConfig.c)
 *     HalpValidPCISlot @ 0x14039ECC4 (HalpValidPCISlot.c)
 */

__int64 __fastcall HalpWritePCIConfig(
        unsigned __int16 a1,
        unsigned __int8 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned int a6)
{
  if ( !(unsigned __int8)HalpValidPCISlot() )
    return 0LL;
  HalpPCIConfig((unsigned int *)a1, a2, a3, a4, a5, a6, 1);
  return a6;
}
