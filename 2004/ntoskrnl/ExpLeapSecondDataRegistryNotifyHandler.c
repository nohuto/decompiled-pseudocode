/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x140948350
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x140792864 (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}
