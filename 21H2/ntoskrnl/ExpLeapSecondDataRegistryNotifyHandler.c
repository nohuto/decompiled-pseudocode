/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x14094B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x1407A91B8 (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}
