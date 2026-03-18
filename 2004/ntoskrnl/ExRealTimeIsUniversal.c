/*
 * XREFs of ExRealTimeIsUniversal @ 0x140341760
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x140860A98 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
