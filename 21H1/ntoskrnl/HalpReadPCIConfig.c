/*
 * XREFs of HalpReadPCIConfig @ 0x14039B5D4
 * Callers:
 *     HalpSetPCIData @ 0x14039B384 (HalpSetPCIData.c)
 *     HalpGetPCIData @ 0x14039B4B4 (HalpGetPCIData.c)
 *     HalpValidPCISlot @ 0x14039B654 (HalpValidPCISlot.c)
 *     HalMcUpdateReadPCIConfig @ 0x1404C6CA0 (HalMcUpdateReadPCIConfig.c)
 * Callees:
 *     HalpPCIConfig @ 0x140303330 (HalpPCIConfig.c)
 *     HalpValidPCISlot @ 0x14039B654 (HalpValidPCISlot.c)
 *     memset @ 0x140408F80 (memset.c)
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
