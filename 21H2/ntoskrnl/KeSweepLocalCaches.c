/*
 * XREFs of KeSweepLocalCaches @ 0x1403821F0
 * Callers:
 *     HalpFlushAndWait @ 0x1403FA0F0 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x1409A827C (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
