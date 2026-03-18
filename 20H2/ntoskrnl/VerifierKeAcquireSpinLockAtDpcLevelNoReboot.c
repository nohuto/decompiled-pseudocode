/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevelNoReboot @ 0x1409DD9F0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409DEF00 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevelNoReboot(ULONG_PTR a1)
{
  return ViKeAcquireSpinLockAtDpcLevelCommon(a1);
}
