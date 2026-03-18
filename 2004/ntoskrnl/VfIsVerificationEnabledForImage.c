/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x14059B1E8
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1408BCF38 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     VfDriverLock @ 0x1409BF5B8 (VfDriverLock.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C3CD0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverUnlock @ 0x1409C58DC (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
