/*
 * XREFs of PnprCompleteWake @ 0x140509678
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x1409A9B2C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409AAF90 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x1408AA494 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
