/*
 * XREFs of ExRealTimeIsUniversal @ 0x1402B58E0
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x1408640B4 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
