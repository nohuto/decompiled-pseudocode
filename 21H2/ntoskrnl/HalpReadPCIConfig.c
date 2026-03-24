/*
 * XREFs of HalpReadPCIConfig @ 0x14039EAF4
 * Callers:
 *     HalpSetPCIData @ 0x14039E8A4 (HalpSetPCIData.c)
 *     HalpGetPCIData @ 0x14039E9D4 (HalpGetPCIData.c)
 *     HalpValidPCISlot @ 0x14039EB74 (HalpValidPCISlot.c)
 *     HalMcUpdateReadPCIConfig @ 0x1404CC080 (HalMcUpdateReadPCIConfig.c)
 * Callees:
 *     HalpPCIConfig @ 0x1402B1B20 (HalpPCIConfig.c)
 *     HalpValidPCISlot @ 0x14039EB74 (HalpValidPCISlot.c)
 *     memset @ 0x140414200 (memset.c)
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
