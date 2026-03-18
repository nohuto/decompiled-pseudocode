/*
 * XREFs of PnprCompleteWake @ 0x140509CC8
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x1409AA98C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409ABDF0 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x1408AB7B4 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
