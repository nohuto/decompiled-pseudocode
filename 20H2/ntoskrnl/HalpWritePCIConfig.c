/*
 * XREFs of HalpWritePCIConfig @ 0x14039EB9C
 * Callers:
 *     HalpSetPCIData @ 0x14039EC64 (HalpSetPCIData.c)
 *     HalpValidPCISlot @ 0x14039EF34 (HalpValidPCISlot.c)
 * Callees:
 *     HalpPCIConfig @ 0x140311160 (HalpPCIConfig.c)
 *     HalpValidPCISlot @ 0x14039EF34 (HalpValidPCISlot.c)
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
