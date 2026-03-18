/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x1407CDC14
 * Callers:
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140A75084 (HalpUpdatePerDeviceMsiLimitInformation.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140C4A288 != 0;
}
