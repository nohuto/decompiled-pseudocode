/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x1407D1EC4
 * Callers:
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140A72004 (HalpUpdatePerDeviceMsiLimitInformation.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140C4A1A8 != 0;
}
