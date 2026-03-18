/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot @ 0x1409D7890
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x1409D77F8 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot(volatile __int64 *a1, ULONG_PTR a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  return VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon(a1, retaddr, a2);
}
