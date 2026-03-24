/*
 * XREFs of PopEvaluateInputSuppressionAction @ 0x1408EEB74
 * Callers:
 *     PopBroadcastInputSuppressionCallback @ 0x140781BB0 (PopBroadcastInputSuppressionCallback.c)
 *     PopExternalMonitorUpdatedWorker @ 0x1407D5790 (PopExternalMonitorUpdatedWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FDDA0 (ZwUpdateWnfStateData.c)
 *     PopBroadcastSessionInfo @ 0x1407967A4 (PopBroadcastSessionInfo.c)
 *     PopTraceInputSuppressionActionUpdate @ 0x1408EC3E0 (PopTraceInputSuppressionActionUpdate.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 */

void __fastcall PopEvaluateInputSuppressionAction(int a1)
{
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

  v15 = 0;
  v13 = 0;
  v14 = 0LL;
  PopAcquirePolicyLock(a1);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopInputSuppressionLock);
  v3 = PopConsoleExternalDisplayConnected;
  v4 = PopLidOpened == 0;
  v5 = dword_140C23E8C == 1;
  v6 = PopConsoleDisplayState == 0;
  if ( PopErrataReportingIncorrectLidState
    || !PopIgnoreLidStateForInputSuppression && PopLidOpened
    || dword_140C23E8C != 1
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
