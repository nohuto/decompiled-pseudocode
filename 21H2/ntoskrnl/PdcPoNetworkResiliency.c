/*
 * XREFs of PdcPoNetworkResiliency @ 0x140996B90
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 *     PopNetUpdateDsAccounting @ 0x1405D8880 (PopNetUpdateDsAccounting.c)
 *     PopNetArmDsEvaluationTimer @ 0x140998474 (PopNetArmDsEvaluationTimer.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
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
    PopQueueWorkItem((__int64)&unk_140C1F8C8, DelayedWorkQueue);
  }
  return PopReleasePolicyLock(v4, v3);
}
