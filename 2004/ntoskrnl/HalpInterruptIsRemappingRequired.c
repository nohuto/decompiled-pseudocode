/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x140376C1C
 * Callers:
 *     HalpInterruptUnmap @ 0x14074E468 (HalpInterruptUnmap.c)
 *     HalpInterruptQueryControllerInfo @ 0x1407BF31C (HalpInterruptQueryControllerInfo.c)
 *     HalpIommuInitializeAll @ 0x140997E14 (HalpIommuInitializeAll.c)
 *     HalpIommuInitSystem @ 0x14099B5B0 (HalpIommuInitSystem.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A5E24 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 220)) & 1;
}
