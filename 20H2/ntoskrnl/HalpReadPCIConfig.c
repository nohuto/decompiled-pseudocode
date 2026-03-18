/*
 * XREFs of HalpReadPCIConfig @ 0x14039EEB4
 * Callers:
 *     HalpSetPCIData @ 0x14039EC64 (HalpSetPCIData.c)
 *     HalpGetPCIData @ 0x14039ED94 (HalpGetPCIData.c)
 *     HalpValidPCISlot @ 0x14039EF34 (HalpValidPCISlot.c)
 *     HalMcUpdateReadPCIConfig @ 0x1404CA6B0 (HalMcUpdateReadPCIConfig.c)
 * Callees:
 *     HalpPCIConfig @ 0x140311160 (HalpPCIConfig.c)
 *     HalpValidPCISlot @ 0x14039EF34 (HalpValidPCISlot.c)
 *     memset @ 0x140411300 (memset.c)
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
