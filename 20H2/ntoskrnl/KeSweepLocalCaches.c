/*
 * XREFs of KeSweepLocalCaches @ 0x140381AF0
 * Callers:
 *     HalpFlushAndWait @ 0x1403F7EC0 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x1409AB3AC (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
