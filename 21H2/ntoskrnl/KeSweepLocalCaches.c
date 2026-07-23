/*
 * XREFs of KeSweepLocalCaches @ 0x140381D40
 * Callers:
 *     HalpFlushAndWait @ 0x1403FA2D0 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x1409A91AC (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
