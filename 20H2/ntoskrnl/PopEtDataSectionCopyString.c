/*
 * XREFs of PopEtDataSectionCopyString @ 0x1408F51BC
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x1406B5E14 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     PopEtDataSectionCopyData @ 0x1406B6A7C (PopEtDataSectionCopyData.c)
 */

void *__fastcall PopEtDataSectionCopyString(__int64 a1, const void *a2, int a3)
{
  return PopEtDataSectionCopyData(a1, a2, 2 * a3);
}
