/*
 * XREFs of KeSweepLocalCaches @ 0x14037F3D0
 * Callers:
 *     HalpFlushAndWait @ 0x1403F2080 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x1409A460C (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
