/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevelNoReboot @ 0x1409D7970
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409D8E80 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevelNoReboot(ULONG_PTR a1)
{
  return ViKeAcquireSpinLockAtDpcLevelCommon(a1);
}
