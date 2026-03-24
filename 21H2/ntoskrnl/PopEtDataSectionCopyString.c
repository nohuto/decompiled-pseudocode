/*
 * XREFs of PopEtDataSectionCopyString @ 0x1408F299C
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x14068E738 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     PopEtDataSectionCopyData @ 0x14068F3A0 (PopEtDataSectionCopyData.c)
 */

void *__fastcall PopEtDataSectionCopyString(__int64 a1, const void *a2, int a3)
{
  return PopEtDataSectionCopyData(a1, a2, 2 * a3);
}
