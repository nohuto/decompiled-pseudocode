/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x1407BF384
 * Callers:
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140A6E8A4 (HalpUpdatePerDeviceMsiLimitInformation.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140C4A228 != 0;
}
