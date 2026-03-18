/*
 * XREFs of IntPartAllocateAndZeroMemory @ 0x1C0023F90
 * Callers:
 *     ProcessorpSelectProcessorSetFromPartitions @ 0x1C009C294 (ProcessorpSelectProcessorSetFromPartitions.c)
 *     IntPartArbInit @ 0x1C009D7C4 (IntPartArbInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntPartAllocateAndZeroMemory(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1232102209LL);
}
