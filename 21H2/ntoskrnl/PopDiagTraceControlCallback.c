/*
 * XREFs of PopDiagTraceControlCallback @ 0x140671060
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14026FC1C (PopDiagTraceSystemLatencyUpdate.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1402729EC (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceFxRundown @ 0x140272A80 (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x140272BF4 (PopThermalTraceRundownEvents.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopPlTraceLogPowerPlane @ 0x14057EE14 (PopPlTraceLogPowerPlane.c)
 *     PopCurrentPowerState @ 0x14066C4DC (PopCurrentPowerState.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x140670078 (PopDiagTracePowerRequestCreate.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1406720AC (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopRundownThermalRequests @ 0x140672140 (PopRundownThermalRequests.c)
 *     PopDiagTracePlatformRoleRundown @ 0x1406721F8 (PopDiagTracePlatformRoleRundown.c)
 *     PopLoggingInformation @ 0x140672568 (PopLoggingInformation.c)
 *     PopDiagTracePowerSetting @ 0x140672680 (PopDiagTracePowerSetting.c)
 *     ExTraceTimerResolution @ 0x140672724 (ExTraceTimerResolution.c)
 *     PopMeasureEnergyChange @ 0x1408EDE1C (PopMeasureEnergyChange.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  unsigned int v7; // r12d
  __int64 *i; // rbx
  __int64 v9; // rcx
  PVOID *v10; // rbx
  __int64 v11; // r14
  unsigned int *v12; // rax
  int v13; // ecx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID v17; // r14
  unsigned int v18; // r13d
  char *v19; // r15
  char *v20; // r14
  ULONG v21; // ebx
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  REGHANDLE v25; // rbx
  REGHANDLE v26; // rbx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rcx
  int v32; // r13d
  __int64 v33; // rax
  char *v34; // rbx
  __int64 v35; // r14
  unsigned int v36; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v37; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v38; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v39; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v40; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v41; // [rsp+44h] [rbp-BCh] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+50h] [rbp-B0h] BYREF
  int v44; // [rsp+54h] [rbp-ACh]
  int v45; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+5Ch] [rbp-A4h] BYREF
  int v47; // [rsp+60h] [rbp-A0h]
  int v48; // [rsp+64h] [rbp-9Ch] BYREF
  int v49; // [rsp+68h] [rbp-98h] BYREF
  int v50; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v51; // [rsp+70h] [rbp-90h] BYREF
  int v52; // [rsp+74h] [rbp-8Ch] BYREF
  int v53; // [rsp+78h] [rbp-88h] BYREF
  int v54; // [rsp+7Ch] [rbp-84h] BYREF
  BOOL v55; // [rsp+80h] [rbp-80h] BYREF
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v57; // [rsp+90h] [rbp-70h]
  unsigned __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v59; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v60; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v61; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v64; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v65; // [rsp+D8h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+108h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+118h] [rbp+18h] BYREF
  int *v69; // [rsp+128h] [rbp+28h]
  __int64 v70; // [rsp+130h] [rbp+30h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+138h] [rbp+38h] BYREF
  int *v72; // [rsp+148h] [rbp+48h]
  __int64 v73; // [rsp+150h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+158h] [rbp+58h] BYREF
  char *v75; // [rsp+168h] [rbp+68h]
  __int64 v76; // [rsp+170h] [rbp+70h]
  char *v77; // [rsp+178h] [rbp+78h]
  __int64 v78; // [rsp+180h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+190h] [rbp+90h] BYREF
  __int16 *v80; // [rsp+1B0h] [rbp+B0h]
  __int64 v81; // [rsp+1B8h] [rbp+B8h]
  __int16 *v82; // [rsp+1C0h] [rbp+C0h]
  __int64 v83; // [rsp+1C8h] [rbp+C8h]
  unsigned __int64 *v84; // [rsp+1D0h] [rbp+D0h]
  __int64 v85; // [rsp+1D8h] [rbp+D8h]
  int *v86; // [rsp+1E0h] [rbp+E0h]
  __int64 v87; // [rsp+1E8h] [rbp+E8h]
  __int64 *v88; // [rsp+1F0h] [rbp+F0h]
  __int64 v89; // [rsp+1F8h] [rbp+F8h]
  __int64 *v90; // [rsp+200h] [rbp+100h]
  __int64 v91; // [rsp+208h] [rbp+108h]
  unsigned __int64 *v92; // [rsp+210h] [rbp+110h]
  __int64 v93; // [rsp+218h] [rbp+118h]
  unsigned __int64 *v94; // [rsp+220h] [rbp+120h]
  __int64 v95; // [rsp+228h] [rbp+128h]
  __int16 *v96; // [rsp+230h] [rbp+130h]
  __int64 v97; // [rsp+238h] [rbp+138h]
  __int16 *v98; // [rsp+240h] [rbp+140h]
  __int64 v99; // [rsp+248h] [rbp+148h]
  int *v100; // [rsp+250h] [rbp+150h]
  __int64 v101; // [rsp+258h] [rbp+158h]
  int *v102; // [rsp+260h] [rbp+160h]
  __int64 v103; // [rsp+268h] [rbp+168h]
  int *v104; // [rsp+270h] [rbp+170h]
  __int64 v105; // [rsp+278h] [rbp+178h]
  int *v106; // [rsp+280h] [rbp+180h]
  __int64 v107; // [rsp+288h] [rbp+188h]
  unsigned int *v108; // [rsp+290h] [rbp+190h]
  __int64 v109; // [rsp+298h] [rbp+198h]
  __int64 *v110; // [rsp+2A0h] [rbp+1A0h]
  __int64 v111; // [rsp+2A8h] [rbp+1A8h]
  int *v112; // [rsp+2B0h] [rbp+1B0h]
  __int64 v113; // [rsp+2B8h] [rbp+1B8h]
  int *v114; // [rsp+2C0h] [rbp+1C0h]
  __int64 v115; // [rsp+2C8h] [rbp+1C8h]
  int *v116; // [rsp+2D0h] [rbp+1D0h]
  __int64 v117; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v118; // [rsp+2E0h] [rbp+1E0h]
  __int64 v119; // [rsp+2E8h] [rbp+1E8h]

  if ( (_DWORD)ControlCode == 2 )
  {
    v7 = 0;
    v37 = 0;
    if ( CallbackContext == &dword_140C02228 )
    {
      if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
      {
        v65 = 0LL;
        v56 = 0LL;
        v64 = 0LL;
        if ( dword_140C02228 )
        {
          if ( tlgKeywordOn((__int64)&dword_140C02228, 0x800000000000LL) && byte_140C22E4C )
          {
            PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
            if ( dword_140C22E10 == 1 || (unsigned int)(dword_140C22E10 - 4) <= 1 )
            {
              v27 = (KiQueryUnbiasedInterruptTime() - qword_140C22E28) / 0x2710uLL;
              v28 = v27 - qword_140C22E38;
              v29 = (MEMORY[0xFFFFF78000000008] - qword_140C22E20) / 0x2710uLL;
              qword_140C22E38 = v27;
              v30 = v29 - qword_140C22E30;
              qword_140C22E30 = v29;
              v31 = v30;
              if ( v28 <= v30 )
                v31 = v28;
              v57 = v31;
              v45 = ++dword_140C22E40;
              v37 = dword_140C22E10;
              v44 = dword_140C22E14;
              v47 = dword_140C22E44;
              LODWORD(P) = dword_140C22E48;
              PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
              PopCurrentPowerState(&v65);
              v36 = 0;
              v32 = DWORD2(v65);
              if ( DWORD2(v65) )
                v36 = (unsigned int)(100 * HIDWORD(v65)) / DWORD2(v65);
              PopMeasureEnergyChange(&v64, &OsStateChangeEnergyCounter);
              v56 = qword_140C22E18;
              if ( (unsigned int)dword_140C02228 > 5 && tlgKeywordOn((__int64)&dword_140C02228, 0x800000000000LL) )
              {
                v38 = 5;
                v80 = &v38;
                v82 = &v39;
                v84 = &v58;
                v81 = 2LL;
                v39 = 1;
                v83 = 2LL;
                v58 = v30;
                v85 = 8LL;
                v43 = MEMORY[0xFFFFF780000002C4];
                v86 = &v43;
                v88 = &v56;
                v59 = v57;
                v90 = (__int64 *)&v59;
                v92 = &v60;
                v94 = &v61;
                v40 = v37;
                v96 = &v40;
                v41 = v44;
                v98 = &v41;
                v46 = v45;
                v100 = &v46;
                v48 = v47;
                v102 = &v48;
                v49 = (int)P;
                v104 = &v49;
                v106 = &v50;
                v51 = v36;
                v108 = &v51;
                v62 = *((_QWORD *)&v64 + 1);
                v110 = &v62;
                v52 = v64;
                v112 = &v52;
                v53 = (unsigned __int8)v65;
                v114 = &v53;
                v87 = 4LL;
                v89 = 8LL;
                v91 = 8LL;
                v60 = v29;
                v93 = 8LL;
                v61 = v27;
                v95 = 8LL;
                v97 = 2LL;
                v99 = 2LL;
                v101 = 4LL;
                v103 = 4LL;
                v105 = 4LL;
                v50 = v32;
                v107 = 4LL;
                v109 = 4LL;
                v111 = 8LL;
                v113 = 4LL;
                v54 = BYTE3(v65);
                v115 = 4LL;
                v116 = &v54;
                v117 = 4LL;
                v118 = &v63;
                v63 = 0x1000000LL;
                v119 = 8LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140C02228,
                  (unsigned __int8 *)byte_140027C69,
                  0LL,
                  0LL,
                  0x16u,
                  &v79);
              }
            }
            else
            {
              PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
            }
          }
        }
      }
      if ( PopPowerPlane )
        PopPlTraceLogPowerPlane((unsigned __int16 *)PopPowerPlane, ControlCode, Level);
    }
    else
    {
      ExTraceTimerResolution(SourceId, ControlCode, Level, MatchAnyKeyword);
      PopDiagTraceSystemLatencyUpdate(1, PopFxSystemLatencyLimit);
      PopAcquirePowerRequestPushLock(0);
      for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
        PopDiagTracePowerRequestCreate(1, (__int64)i);
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      *(_QWORD *)&UserData.Size = 4LL;
      v55 = dword_140C2332C == 0;
      UserData.Ptr = (ULONGLONG)&v55;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_RUNDOWN, 0LL, 1u, &UserData);
      ExAcquireFastMutex(&PopSettingLock);
      v10 = (PVOID *)PopPowerSettings;
      if ( PopPowerSettings != &PopPowerSettings )
      {
        v11 = dword_140C2332C;
        do
        {
          v12 = (unsigned int *)v10[v11 + 8];
          if ( v12 )
          {
            LOBYTE(v9) = 1;
            PopDiagTracePowerSetting(v9, v10 + 4, v12[1], v12 + 3);
          }
          v10 = (PVOID *)*v10;
        }
        while ( v10 != &PopPowerSettings );
      }
      KeReleaseGuardedMutex(&PopSettingLock);
      PopThermalTraceRundownEvents();
      P = 0LL;
      PopAcquirePolicyLock(v13);
      v14 = PopLoggingInformation(&P, &v37);
      PopReleasePolicyLock(v16, v15);
      v17 = P;
      if ( v14 >= 0 )
      {
        v18 = *(_DWORD *)P;
        v19 = (char *)P + 4;
        if ( *(_DWORD *)P )
        {
          v20 = (char *)P + v37;
          do
          {
            if ( v19 >= v20 )
              break;
            v21 = *((_DWORD *)v19 + 3);
            UserData.Reserved = 0;
            v21 += 16;
            UserData.Size = v21;
            UserData.Ptr = (ULONGLONG)v19;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SLEEP_DISABLE_REASON_RUNDOWN, 0LL, 1u, &UserData);
            ++v7;
            v19 += v21;
          }
          while ( v7 < v18 );
          v17 = P;
        }
      }
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      if ( !_InterlockedCompareExchange(&PopDiagDeviceRundownRequests, 1, 0) )
        ExQueueWorkItem(&PopDiagDeviceRundownWorkItem, DelayedWorkQueue);
      PopDiagTraceFxRundown();
      PopDiagTracePlatformRoleRundown();
      PopRundownThermalRequests();
      PopAcquirePolicyLock(v22);
      if ( PopDiagHandleRegistered )
      {
        v25 = PopDiagHandle;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN) )
        {
          *(_QWORD *)&v68.Size = 4LL;
          v68.Ptr = (ULONGLONG)&PopNetStandbyState;
          v70 = 4LL;
          v69 = &PopNetStandbyReason;
          EtwWrite(v25, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN, 0LL, 2u, &v68);
        }
        if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN) )
        {
          v33 = 0LL;
          v36 = 0;
          do
          {
            *(_QWORD *)&v71.Size = 4LL;
            v71.Ptr = (ULONGLONG)&v36;
            v73 = 4LL;
            v72 = &PopCsDeviceCompliance[v33];
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN, 0LL, 2u, &v71);
            v33 = v36 + 1;
            v36 = v33;
          }
          while ( (unsigned int)v33 < 5 );
        }
      }
      PopReleasePolicyLock(v24, v23);
      PopDiagTraceDynamicTickStatusRundown();
      PopDiagTraceDeepSleepConstraintRundown();
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerEventLock);
      if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE_RUNDOWN) )
      {
        v34 = (char *)&unk_140D2DD70;
        v35 = 48LL;
        do
        {
          v74.Ptr = (ULONGLONG)(v34 - 32);
          *(_QWORD *)&v74.Size = 4LL;
          v75 = v34 - 16;
          v76 = 4LL;
          v77 = v34;
          v78 = 8LL;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE_RUNDOWN, 0LL, 3u, &v74);
          v34 += 48;
          --v35;
        }
        while ( v35 );
      }
      PopReleaseRwLock((ULONG_PTR)&PopPowerEventLock);
      PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
      if ( PopDiagHandleRegistered )
      {
        v26 = PopDiagHandle;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_RUNDOWN) )
        {
          *(_QWORD *)&v67.Size = 4LL;
          v67.Ptr = (ULONGLONG)&PopIdleScanInterval;
          EtwWrite(v26, &POP_ETW_EVENT_SYSTEM_IDLE_RUNDOWN, 0LL, 1u, &v67);
        }
      }
      PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
    }
  }
}
