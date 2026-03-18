/*
 * XREFs of KeSweepLocalCaches @ 0x140389F70
 * Callers:
 *     HaliAcpiSleep @ 0x140390D20 (HaliAcpiSleep.c)
 *     HalpFlushAndWait @ 0x14041B4C0 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140A621FC (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
