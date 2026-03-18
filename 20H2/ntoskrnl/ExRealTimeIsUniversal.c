/*
 * XREFs of ExRealTimeIsUniversal @ 0x1403124D0
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x1408664B4 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
