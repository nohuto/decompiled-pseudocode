/*
 * XREFs of PdcPoNetworkResiliency @ 0x1408F2090
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1403316F4 (PopQueueWorkItem.c)
 *     KeCancelTimer2 @ 0x14033C240 (KeCancelTimer2.c)
 *     PopNetUpdateDsAccounting @ 0x140576CD0 (PopNetUpdateDsAccounting.c)
 *     PopNetArmDsEvaluationTimer @ 0x1408F43A4 (PopNetArmDsEvaluationTimer.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoNetworkResiliency(int a1)
{
  char v1; // bl
  __int64 v2; // rcx
  __int64 v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx

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
    KeCancelTimer2((__int64)&PopNetEvaluationTimer, 0LL, v3, v4);
    _InterlockedExchange(&PopNetGracePeriodState, 0);
    PopQueueWorkItem((__int64)&unk_140C208C8, DelayedWorkQueue);
  }
  return PopReleasePolicyLock(v6, v5);
}
