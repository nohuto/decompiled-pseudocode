/*
 * XREFs of ExRealTimeIsUniversal @ 0x140201990
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x14085F744 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
