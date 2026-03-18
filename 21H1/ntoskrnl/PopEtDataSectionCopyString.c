/*
 * XREFs of PopEtDataSectionCopyString @ 0x1408EE2BC
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x1406BDE14 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     PopEtDataSectionCopyData @ 0x1406BEA7C (PopEtDataSectionCopyData.c)
 */

void *__fastcall PopEtDataSectionCopyString(__int64 a1, const void *a2, int a3)
{
  return PopEtDataSectionCopyData(a1, a2, 2 * a3);
}
