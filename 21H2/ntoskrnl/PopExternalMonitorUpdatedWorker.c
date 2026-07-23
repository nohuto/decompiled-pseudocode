/*
 * XREFs of PopExternalMonitorUpdatedWorker @ 0x1407D5900
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1402503C4 (PopOkayToQueueNextWorkItem.c)
 *     PopEvaluateInputSuppressionAction @ 0x1408EECD4 (PopEvaluateInputSuppressionAction.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopExternalMonitorUpdatedWorker(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax

  if ( PopPlatformAoAc )
  {
    PopAcquirePolicyLock(a1);
    PopOkayToQueueNextWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem);
    PopReleasePolicyLock(v2, v1);
    return PopEvaluateInputSuppressionAction(v4, v3, v5);
  }
  return result;
}
