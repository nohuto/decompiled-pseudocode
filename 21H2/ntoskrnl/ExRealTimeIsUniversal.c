/*
 * XREFs of ExRealTimeIsUniversal @ 0x140233AC0
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x14086420C (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
