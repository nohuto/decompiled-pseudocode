/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevelNoReboot @ 0x1409D79D0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409D8EE0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevelNoReboot(ULONG_PTR a1)
{
  return ViKeAcquireSpinLockAtDpcLevelCommon(a1);
}
