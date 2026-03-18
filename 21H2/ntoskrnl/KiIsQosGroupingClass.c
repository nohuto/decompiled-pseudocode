/*
 * XREFs of KiIsQosGroupingClass @ 0x14045B3BC
 * Callers:
 *     KeUpdateQosGroupingSets @ 0x14023BA30 (KeUpdateQosGroupingSets.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140308640 (KiCheckPreferredHeteroProcessor.c)
 *     KiChooseTargetProcessor @ 0x1403419B0 (KiChooseTargetProcessor.c)
 *     KiSelectProcessorToPreempt @ 0x14045B3DA (KiSelectProcessorToPreempt.c)
 *     KiHeteroIdleSetReduction @ 0x1405740C4 (KiHeteroIdleSetReduction.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsQosGroupingClass(int a1)
{
  return ((a1 - 1) & 0xFFFFFFFA) == 0 && a1 != 6;
}
