/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x14094BAB0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x1407A93B8 (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}
