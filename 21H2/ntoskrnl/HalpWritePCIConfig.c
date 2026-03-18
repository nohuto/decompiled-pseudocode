/*
 * XREFs of HalpWritePCIConfig @ 0x1403ADC74
 * Callers:
 *     HalpSetPCIData @ 0x1403ADD44 (HalpSetPCIData.c)
 *     HalpValidPCISlot @ 0x1403AE024 (HalpValidPCISlot.c)
 * Callees:
 *     HalpPCIConfig @ 0x14023AB60 (HalpPCIConfig.c)
 *     HalpValidPCISlot @ 0x1403AE024 (HalpValidPCISlot.c)
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
