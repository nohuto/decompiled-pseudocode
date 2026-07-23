/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x1407D2034
 * Callers:
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140A73004 (HalpUpdatePerDeviceMsiLimitInformation.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140C4A1E8 != 0;
}
