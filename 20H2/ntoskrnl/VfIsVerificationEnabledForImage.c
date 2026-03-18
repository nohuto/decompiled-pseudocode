/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x14059EC88
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1408C2C98 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     VfDriverLock @ 0x1409C55C8 (VfDriverLock.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C9CF0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverUnlock @ 0x1409CB8FC (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
