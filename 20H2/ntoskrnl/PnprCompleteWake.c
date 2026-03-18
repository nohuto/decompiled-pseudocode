/*
 * XREFs of PnprCompleteWake @ 0x14050D5F8
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x1409B08FC (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409B1D60 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x1408B12E4 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
