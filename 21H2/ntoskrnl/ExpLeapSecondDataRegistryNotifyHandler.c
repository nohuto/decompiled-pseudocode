/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x1409F7D10
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x140857F38 (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}
