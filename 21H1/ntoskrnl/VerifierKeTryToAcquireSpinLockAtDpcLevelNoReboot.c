/*
 * XREFs of VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x1409D8850
 * Callers:
 *     <none>
 * Callees:
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409D9360 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 */

__int64 __fastcall VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot(ULONG_PTR a1)
{
  return ViKeTryToAcquireSpinLockAtDpcLevelCommon(a1);
}
