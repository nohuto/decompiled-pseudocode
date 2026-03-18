/*
 * XREFs of PoAddPowerTriageData @ 0x140568FCC
 * Callers:
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 * Callees:
 *     PopInternalAddToDumpFile @ 0x14055F450 (PopInternalAddToDumpFile.c)
 */

char PoAddPowerTriageData()
{
  return PopInternalAddToDumpFile(0LL, 0, 0LL);
}
