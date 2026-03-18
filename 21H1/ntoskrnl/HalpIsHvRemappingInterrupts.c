/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x1407BC214
 * Callers:
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140A6E1AC (HalpUpdatePerDeviceMsiLimitInformation.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140C4A388 != 0;
}
