/*
 * XREFs of PopExecutionRequiredSettingCallback @ 0x1407BD8F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14075D984 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopSetExecutionRequiredTimer @ 0x1407BD98C (PopSetExecutionRequiredTimer.c)
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
