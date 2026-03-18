/*
 * XREFs of PopDiagTraceControlCallback @ 0x14081CBF0
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceSystemLatencyUpdate @ 0x140224DF0 (PopDiagTraceSystemLatencyUpdate.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     PopDiagTraceFxRundown @ 0x140395A18 (PopDiagTraceFxRundown.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopThermalTraceRundownEvents @ 0x1405D07C8 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1405D18CC (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopPlTraceLogPowerPlane @ 0x1405DEB88 (PopPlTraceLogPowerPlane.c)
 *     PopDiagTracePowerSetting @ 0x1406DFE10 (PopDiagTracePowerSetting.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x1407EFFBC (PopDiagTracePowerRequestCreate.c)
 *     PopTransitionTelemetryOsState @ 0x14081B500 (PopTransitionTelemetryOsState.c)
 *     PopLoggingInformation @ 0x1409898D8 (PopLoggingInformation.c)
 *     PopRundownThermalRequests @ 0x14098BADC (PopRundownThermalRequests.c)
 *     PopDiagTraceDeviceComplianceRundown @ 0x140991E18 (PopDiagTraceDeviceComplianceRundown.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1409922E8 (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopDiagTracePlatformRoleRundown @ 0x140992B80 (PopDiagTracePlatformRoleRundown.c)
 *     PopDiagTracePowerStateEventRundown @ 0x140993038 (PopDiagTracePowerStateEventRundown.c)
 *     PopDiagTraceSystemIdleRundown @ 0x140993308 (PopDiagTraceSystemIdleRundown.c)
 *     PopTraceStandbyConnectivityRundown @ 0x140994114 (PopTraceStandbyConnectivityRundown.c)
 *     ExTraceTimerResolution @ 0x1409F7C6C (ExTraceTimerResolution.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTraceControlCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        int *CallbackContext)
{
  PVOID *i; // rbx
  PVOID *v8; // rbx
  __int64 v9; // rsi
  _DWORD *v10; // rax
  int v11; // ecx
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID v15; // rsi
  unsigned int v16; // r15d
  char *v17; // r14
  unsigned int v18; // r12d
  char *v19; // r13
  ULONG v20; // ebx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // [rsp+30h] [rbp-30h] BYREF
  BOOL v25; // [rsp+34h] [rbp-2Ch] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-20h] BYREF

  if ( (_DWORD)ControlCode == 2 )
  {
    v24 = 0;
    if ( CallbackContext == &dword_140C03A00 )
    {
      if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
        PopTransitionTelemetryOsState(5, 1);
      if ( PopPowerPlane )
        PopPlTraceLogPowerPlane((unsigned __int16 *)PopPowerPlane);
    }
    else
    {
      ExTraceTimerResolution(SourceId, ControlCode, Level, MatchAnyKeyword);
      PopDiagTraceSystemLatencyUpdate(1, PopFxSystemLatencyLimit);
      PopAcquirePowerRequestPushLock(0);
      for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
        PopDiagTracePowerRequestCreate(1, (__int64)i);
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      UserData.Size = 4;
      UserData.Reserved = 0;
      v25 = dword_140C232CC == 0;
      UserData.Ptr = (ULONGLONG)&v25;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_RUNDOWN, 0LL, 1u, &UserData);
      ExAcquireFastMutex(&PopSettingLock);
      v8 = (PVOID *)PopPowerSettings;
      if ( PopPowerSettings != &PopPowerSettings )
      {
        v9 = dword_140C232CC;
        do
        {
          v10 = v8[v9 + 8];
          if ( v10 )
            PopDiagTracePowerSetting(1, (ULONGLONG)(v8 + 4), v10[1], (__int64)(v10 + 3));
          v8 = (PVOID *)*v8;
        }
        while ( v8 != &PopPowerSettings );
      }
      KeReleaseGuardedMutex(&PopSettingLock);
      PopThermalTraceRundownEvents();
      P = 0LL;
      PopAcquirePolicyLock(v11);
      v12 = PopLoggingInformation(&P, &v24);
      PopReleasePolicyLock(v14, v13);
      v15 = P;
      if ( v12 >= 0 )
      {
        v16 = *(_DWORD *)P;
        v17 = (char *)P + 4;
        v18 = 0;
        if ( *(_DWORD *)P )
        {
          v19 = (char *)P + v24;
          do
          {
            if ( v17 >= v19 )
              break;
            v20 = *((_DWORD *)v17 + 3);
            UserData.Reserved = 0;
            v20 += 16;
            UserData.Size = v20;
            UserData.Ptr = (ULONGLONG)v17;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SLEEP_DISABLE_REASON_RUNDOWN, 0LL, 1u, &UserData);
            ++v18;
            v17 += v20;
          }
          while ( v18 < v16 );
        }
      }
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      if ( !_InterlockedCompareExchange(&PopDiagDeviceRundownRequests, 1, 0) )
        ExQueueWorkItem(&PopDiagDeviceRundownWorkItem, DelayedWorkQueue);
      if ( CallbackContext == (int *)&PopDiagHandle )
        PopDiagTraceFxRundown(0LL);
      PopDiagTracePlatformRoleRundown();
      PopRundownThermalRequests();
      PopAcquirePolicyLock(v21);
      PopTraceStandbyConnectivityRundown();
      PopDiagTraceDeviceComplianceRundown();
      PopReleasePolicyLock(v23, v22);
      PopDiagTraceDynamicTickStatusRundown();
      PopDiagTraceDeepSleepConstraintRundown();
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerEventLock);
      PopDiagTracePowerStateEventRundown();
      PopReleaseRwLock((ULONG_PTR)&PopPowerEventLock);
      PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
      PopDiagTraceSystemIdleRundown();
      PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
    }
  }
}
