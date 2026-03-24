/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x14037903C
 * Callers:
 *     HalpInterruptUnmap @ 0x140761838 (HalpInterruptUnmap.c)
 *     HalpInterruptQueryControllerInfo @ 0x1407D1E5C (HalpInterruptQueryControllerInfo.c)
 *     HalpIommuInitializeAll @ 0x14099B3D4 (HalpIommuInitializeAll.c)
 *     HalpIommuInitSystem @ 0x14099B9D0 (HalpIommuInitSystem.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A8C54 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 220)) & 1;
}
