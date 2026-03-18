/*
 * XREFs of PopExternalMonitorUpdatedWorker @ 0x1407ED710
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x140368A78 (PopOkayToQueueNextWorkItem.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopEvaluateInputSuppressionAction @ 0x140995F04 (PopEvaluateInputSuppressionAction.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopExternalMonitorUpdatedWorker(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  PopAcquirePolicyLock(a1);
  do
  {
    v3 = PopConsoleExternalDisplayConnected;
    PopReleasePolicyLock(v2, v1);
    if ( qword_140C5AE08 )
    {
      LOBYTE(v4) = v3;
      qword_140C5AE08(v4);
    }
    if ( PopPlatformAoAc )
      PopEvaluateInputSuppressionAction();
    PopAcquirePolicyLock(v4);
  }
  while ( v3 != PopConsoleExternalDisplayConnected );
  PopOkayToQueueNextWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem);
  return PopReleasePolicyLock(v6, v5);
}
