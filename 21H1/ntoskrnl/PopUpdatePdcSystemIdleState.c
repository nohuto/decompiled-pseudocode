/*
 * XREFs of PopUpdatePdcSystemIdleState @ 0x1408ECB14
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x1408EC6D0 (PopExecuteSystemIdleAction.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14075D984 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopSetExecutionRequiredTimer @ 0x1407BD98C (PopSetExecutionRequiredTimer.c)
 */

__int64 __fastcall PopUpdatePdcSystemIdleState(char a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  PopAcquirePowerRequestPushLock(1);
  if ( BYTE3(PopExecutionRequiredContext) != a1 )
  {
    BYTE3(PopExecutionRequiredContext) = a1;
    if ( a1 )
    {
      *((_QWORD *)&PopExecutionRequiredContext + 1) = MEMORY[0xFFFFF78000000008];
      PopSetExecutionRequiredTimer();
    }
    else
    {
      *((_QWORD *)&PopExecutionRequiredContext + 1) = 0LL;
      KeCancelTimer(&PopExecutionRequiredTimer);
    }
    PopHandleExecutionRequiredEnablementUpdate(v2);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  result = 3221225474LL;
  if ( qword_140C542F0 )
  {
    LOBYTE(v3) = a1;
    return ((__int64 (__fastcall *)(__int64))qword_140C542F0)(v3);
  }
  return result;
}
