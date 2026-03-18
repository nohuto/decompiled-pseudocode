/*
 * XREFs of PdcPoNetworkResiliency @ 0x1408EC480
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x1402754B0 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x140360AC4 (PopQueueWorkItem.c)
 *     PopNetUpdateDsAccounting @ 0x1405732A0 (PopNetUpdateDsAccounting.c)
 *     PopNetArmDsEvaluationTimer @ 0x1408EE794 (PopNetArmDsEvaluationTimer.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoNetworkResiliency(int a1)
{
  char v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = a1;
  PopAcquirePolicyLock(a1);
  PopNetUpdateDsAccounting(v1);
  if ( v1 )
  {
    PopNetResiliencyEngaged = 1;
    PopNetArmDsEvaluationTimer(v2, (unsigned int)_InterlockedExchange(&PopNetGracePeriodState, 1));
  }
  else
  {
    PopNetResiliencyEngaged = 0;
    KeCancelTimer2((__int64)&PopNetEvaluationTimer);
    _InterlockedExchange(&PopNetGracePeriodState, 0);
    PopQueueWorkItem((__int64)&unk_140C207A8, DelayedWorkQueue);
  }
  return PopReleasePolicyLock(v4, v3);
}
