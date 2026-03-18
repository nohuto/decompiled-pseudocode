/*
 * XREFs of KeSweepLocalCaches @ 0x14037FD30
 * Callers:
 *     HalpFlushAndWait @ 0x1403F3310 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x1409A544C (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
