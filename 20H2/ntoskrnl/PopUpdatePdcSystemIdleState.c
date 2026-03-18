/*
 * XREFs of PopUpdatePdcSystemIdleState @ 0x1408F3A18
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x1408F35F4 (PopExecuteSystemIdleAction.c)
 * Callees:
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PopAcquirePowerRequestPushLock @ 0x14071EC18 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14076E304 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopSetExecutionRequiredTimer @ 0x1407CF38C (PopSetExecutionRequiredTimer.c)
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
  if ( qword_140C54270 )
  {
    LOBYTE(v3) = a1;
    return ((__int64 (__fastcall *)(__int64))qword_140C54270)(v3);
  }
  return result;
}
