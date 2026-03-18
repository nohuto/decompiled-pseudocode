/*
 * XREFs of PoAddPowerTriageData @ 0x14056961C
 * Callers:
 *     KeBugCheck2 @ 0x140511660 (KeBugCheck2.c)
 * Callees:
 *     PopInternalAddToDumpFile @ 0x14055FAA0 (PopInternalAddToDumpFile.c)
 */

char PoAddPowerTriageData()
{
  return PopInternalAddToDumpFile(0LL, 0, 0LL);
}
