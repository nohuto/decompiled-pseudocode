/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x14094E110
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x14079F0F8 (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}
