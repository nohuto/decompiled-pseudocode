/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x140375E0C
 * Callers:
 *     HalpInterruptUnmap @ 0x14074A048 (HalpInterruptUnmap.c)
 *     HalpInterruptQueryControllerInfo @ 0x1407BC1AC (HalpInterruptQueryControllerInfo.c)
 *     HalpIommuInitializeAll @ 0x140996A44 (HalpIommuInitializeAll.c)
 *     HalpIommuInitSystem @ 0x140997040 (HalpIommuInitSystem.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A4FE4 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 220)) & 1;
}
