/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x14059AAF8
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1408BBC18 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     VfDriverLock @ 0x1409BF5A8 (VfDriverLock.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C3CC0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverUnlock @ 0x1409C58CC (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
