/*
 * XREFs of PnprCompleteWake @ 0x14050F128
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x1409AD7FC (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409AEC60 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x1408AE8B4 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
