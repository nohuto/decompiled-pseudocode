/*
 * XREFs of HalpReadPCIConfig @ 0x14039BD64
 * Callers:
 *     HalpSetPCIData @ 0x14039BB14 (HalpSetPCIData.c)
 *     HalpGetPCIData @ 0x14039BC44 (HalpGetPCIData.c)
 *     HalpValidPCISlot @ 0x14039BDE4 (HalpValidPCISlot.c)
 *     HalMcUpdateReadPCIConfig @ 0x1404C7150 (HalMcUpdateReadPCIConfig.c)
 * Callees:
 *     HalpPCIConfig @ 0x140340130 (HalpPCIConfig.c)
 *     HalpValidPCISlot @ 0x14039BDE4 (HalpValidPCISlot.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall HalpReadPCIConfig(
        unsigned __int16 a1,
        unsigned __int8 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned int Size)
{
  if ( (unsigned __int8)HalpValidPCISlot() )
  {
    HalpPCIConfig((unsigned int *)a1, a2, a3, a4, a5, Size, 0);
    return Size;
  }
  else
  {
    memset(a4, 255, Size);
    return 0LL;
  }
}
