/*
 * XREFs of HalpReadPCIConfig @ 0x14039EC44
 * Callers:
 *     HalpSetPCIData @ 0x14039E9F4 (HalpSetPCIData.c)
 *     HalpGetPCIData @ 0x14039EB24 (HalpGetPCIData.c)
 *     HalpValidPCISlot @ 0x14039ECC4 (HalpValidPCISlot.c)
 *     HalMcUpdateReadPCIConfig @ 0x1404CC2C0 (HalMcUpdateReadPCIConfig.c)
 * Callees:
 *     HalpPCIConfig @ 0x14022FCD0 (HalpPCIConfig.c)
 *     HalpValidPCISlot @ 0x14039ECC4 (HalpValidPCISlot.c)
 *     memset @ 0x140414300 (memset.c)
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
