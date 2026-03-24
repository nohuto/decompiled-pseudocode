/*
 * XREFs of PoAddPowerTriageData @ 0x14056EA5C
 * Callers:
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 * Callees:
 *     PopInternalAddToDumpFile @ 0x140564F44 (PopInternalAddToDumpFile.c)
 */

char PoAddPowerTriageData()
{
  return PopInternalAddToDumpFile(0LL, 0, 0LL);
}
