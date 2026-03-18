/*
 * XREFs of PopExecutionRequiredSettingCallback @ 0x1407CF2F0
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14071EC18 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14076E304 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopSetExecutionRequiredTimer @ 0x1407CF38C (PopSetExecutionRequiredTimer.c)
 */

__int64 __fastcall PopExecutionRequiredSettingCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9
  unsigned __int64 v8; // rcx

  v6 = -1073741811;
  PopAcquirePowerRequestPushLock(1);
  v7 = *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 == *a1 )
    v7 = *(_QWORD *)GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data4 - a1[1];
  if ( !v7 && a3 == 4 && a2 )
  {
    KeCancelTimer(&PopExecutionRequiredTimer);
    PopExecutionRequiredTimeout = *a2;
    PopSetExecutionRequiredTimer();
    PopHandleExecutionRequiredEnablementUpdate(v8);
    v6 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return v6;
}
