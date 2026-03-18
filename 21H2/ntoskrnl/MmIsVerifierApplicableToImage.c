/*
 * XREFs of MmIsVerifierApplicableToImage @ 0x140583D08
 * Callers:
 *     MiReapplyImportOptimizationWorker @ 0x1405A2710 (MiReapplyImportOptimizationWorker.c)
 *     MmApplyVerifierToRunningImage @ 0x140A81214 (MmApplyVerifierToRunningImage.c)
 *     VfDriverApplyDifVerification @ 0x140A898F0 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140A89AB0 (VfDriverEnableVerifier.c)
 * Callees:
 *     KeIsNmiCallbackRegisteredForDriver @ 0x14056A19C (KeIsNmiCallbackRegisteredForDriver.c)
 */

__int64 __fastcall MmIsVerifierApplicableToImage(__int64 a1)
{
  if ( (MiFlags & 0x8000) != 0
    || !(unsigned int)KeIsNmiCallbackRegisteredForDriver(
                        *(_QWORD *)(a1 + 48),
                        *(_QWORD *)(a1 + 48) + *(unsigned int *)(a1 + 64)) )
  {
    return 0LL;
  }
  else
  {
    return 3221228558LL;
  }
}
