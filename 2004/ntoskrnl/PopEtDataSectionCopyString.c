/*
 * XREFs of PopEtDataSectionCopyString @ 0x1408EF5AC
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x14064BCCC (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     PopEtDataSectionCopyData @ 0x14064C934 (PopEtDataSectionCopyData.c)
 */

void *__fastcall PopEtDataSectionCopyString(__int64 a1, const void *a2, int a3)
{
  return PopEtDataSectionCopyData(a1, a2, 2 * a3);
}
