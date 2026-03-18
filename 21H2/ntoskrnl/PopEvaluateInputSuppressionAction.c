/*
 * XREFs of PopEvaluateInputSuppressionAction @ 0x140995F04
 * Callers:
 *     PopExternalMonitorUpdatedWorker @ 0x1407ED710 (PopExternalMonitorUpdatedWorker.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140811D40 (PopBroadcastInputSuppressionCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     PopBroadcastSessionInfo @ 0x140828EBC (PopBroadcastSessionInfo.c)
 *     PopTraceInputSuppressionActionUpdate @ 0x140993DA0 (PopTraceInputSuppressionActionUpdate.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

void PopEvaluateInputSuppressionAction()
{
  int v0; // ecx
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // bp
  bool v4; // di
  bool v5; // si
  char v6; // r14
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+28h] [rbp-60h]
  BOOL v13; // [rsp+40h] [rbp-48h] BYREF
  GUID v14; // [rsp+48h] [rbp-40h] BYREF
  BOOL v15; // [rsp+58h] [rbp-30h]

  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopInputSuppressionLock);
  PopAcquirePolicyLock(v0);
  v3 = PopConsoleExternalDisplayConnected;
  v4 = PopLidOpened == 0;
  v5 = dword_140C232CC == 1;
  v6 = PopConsoleDisplayState == 0;
  if ( PopErrataReportingIncorrectLidState
    || !PopIgnoreLidStateForInputSuppression && PopLidOpened
    || dword_140C232CC != 1
    || PopConsoleExternalDisplayConnected
    || (v7 = 1, PopConsoleDisplayState) )
  {
    v7 = 0;
  }
  if ( !PopEnableInputSuppression && v7 == 1 )
    v7 = 2;
  PopReleasePolicyLock(v2, v1);
  if ( PopInputSuppressionRequired != v7 )
  {
    LOBYTE(v11) = v3;
    LOBYTE(v10) = v5;
    LOBYTE(v8) = v4;
    PopInputSuppressionRequired = v7;
    PopTraceInputSuppressionActionUpdate(v9, v8, v10, v11, v6, v12, v7);
    ZwUpdateWnfStateData((__int64)&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX, (__int64)&PopInputSuppressionRequired);
    if ( PopEnableInputSuppression )
    {
      if ( (unsigned int)PopInputSuppressionRequired <= 1 )
        _InterlockedIncrement(&PopInputSuppressionActionCount);
      v13 = PopInputSuppressionRequired == 1;
      ZwUpdateWnfStateData((__int64)&WNF_PO_INPUT_SUPPRESS_NOTIFICATION, (__int64)&v13);
      v15 = v13;
      v14 = GUID_INPUT_SUPPRESS_REQUESTED;
      PopBroadcastSessionInfo(0, 20, (__int64)&v14);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopInputSuppressionLock);
}
