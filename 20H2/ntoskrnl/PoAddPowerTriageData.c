/*
 * XREFs of PoAddPowerTriageData @ 0x14056D04C
 * Callers:
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 * Callees:
 *     PopInternalAddToDumpFile @ 0x140563474 (PopInternalAddToDumpFile.c)
 */

char PoAddPowerTriageData()
{
  return PopInternalAddToDumpFile(0LL, 0, 0LL);
}
