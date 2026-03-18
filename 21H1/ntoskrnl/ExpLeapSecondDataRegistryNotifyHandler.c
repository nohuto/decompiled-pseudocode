/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x140947060
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x1407901D4 (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData);
}
