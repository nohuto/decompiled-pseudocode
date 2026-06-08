/*
 * XREFs of ProcLibGlobalInit @ 0x1C0036650
 * Callers:
 *     DriverEntry @ 0x1C003635C (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     InitDevExts @ 0x1C0002C8C (InitDevExts.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0004A40 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0004C5C (WPP_RECORDER_SF_DD.c)
 *     DisplayPPMFlags @ 0x1C0008518 (DisplayPPMFlags.c)
 *     HviGetHypervisorFeatures @ 0x1C000E8B8 (HviGetHypervisorFeatures.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000E8F8 (HviIsAnyHypervisorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000ED80 (memset.c)
 *     GetRegistryDwordValue @ 0x1C001EFC0 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C001F064 (GetRegistryQwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C001F45C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C001F4DC (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C001F600 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C001F62C (ProcLibTraceThrottleStatesErrata.c)
 *     GetHiddenProcessorPresence @ 0x1C0021034 (GetHiddenProcessorPresence.c)
 *     GetHvPpmCapabilities @ 0x1C00211A8 (GetHvPpmCapabilities.c)
 *     InitDriver @ 0x1C003603C (InitDriver.c)
 *     ProcLibRegisterEtw @ 0x1C0036220 (ProcLibRegisterEtw.c)
 *     CollectAcpiBiosInfo @ 0x1C00364E8 (CollectAcpiBiosInfo.c)
 *     PopulateEnergyEstimationModel @ 0x1C00372A0 (PopulateEnergyEstimationModel.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int inited; // eax
  unsigned int v3; // edi
  unsigned __int16 v4; // r9
  unsigned int v5; // r8d
  int v6; // eax
  unsigned __int16 v7; // r9
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  char v12; // si
  void *v13; // rax
  __int64 v14; // rdx
  ULONG v15; // ecx
  const CHAR *v16; // r8
  const CHAR *v17; // r9
  bool v18; // zf
  unsigned int v19; // ebx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  char *v23; // rdi
  unsigned __int8 i; // bl
  int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  const char *v28; // rax
  int v30; // [rsp+30h] [rbp-39h]
  char v31; // [rsp+40h] [rbp-29h] BYREF
  bool v32; // [rsp+41h] [rbp-28h] BYREF
  int v33; // [rsp+44h] [rbp-25h] BYREF
  int v34; // [rsp+48h] [rbp-21h] BYREF
  int v35; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v36; // [rsp+50h] [rbp-19h] BYREF
  __int128 v37; // [rsp+58h] [rbp-11h] BYREF
  __int128 v38; // [rsp+68h] [rbp-1h]
  __int64 v39; // [rsp+78h] [rbp+Fh]
  __int128 InputBuffer; // [rsp+80h] [rbp+17h] BYREF

  v36 = 0;
  v34 = 0;
  v35 = 0;
  v32 = 0;
  v31 = 0;
  v39 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C0013600, 0x110u);
  v3 = inited;
  if ( inited >= 0 )
  {
    v6 = dword_1C0013600;
    if ( dword_1C0013600 != 62 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741735;
      v7 = 11;
      v30 = 62;
LABEL_9:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v7,
        (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
        v6,
        v30);
      return (unsigned int)-1073741735;
    }
    inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
               WdfDriverGlobals,
               0LL,
               &qword_1C00133F8);
    v3 = inited;
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 12;
      goto LABEL_14;
    }
    inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
               WdfDriverGlobals,
               0LL,
               &qword_1C0013408);
    v3 = inited;
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 13;
      goto LABEL_14;
    }
    inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
               WdfDriverGlobals,
               0LL,
               &qword_1C0013400);
    v3 = inited;
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 14;
      goto LABEL_14;
    }
    inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
               WdfDriverGlobals,
               0LL,
               &qword_1C0013938);
    v3 = inited;
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 15;
      goto LABEL_14;
    }
    inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
               WdfDriverGlobals,
               0LL,
               &qword_1C0013958);
    v3 = inited;
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 16;
      goto LABEL_14;
    }
    inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
               WdfDriverGlobals,
               0LL,
               &qword_1C0013930);
    v3 = inited;
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 17;
LABEL_14:
      v5 = 4;
      goto LABEL_5;
    }
    KeInitializeEvent(&Event, NotificationEvent, 1u);
    WorkItem = IoAllocateWorkItem(DeviceObject);
    word_1C001396C = 0;
    qword_1C0013960 = WorkItem;
    qword_1C0013418 = (__int64)&qword_1C0013410;
    qword_1C0013410 = (__int64)&qword_1C0013410;
    qword_1C0013428 = (__int64)&qword_1C0013420;
    qword_1C0013420 = (__int64)&qword_1C0013420;
    qword_1C0013438 = (__int64)&qword_1C0013430;
    qword_1C0013430 = (__int64)&qword_1C0013430;
    qword_1C0013448 = (__int64)&qword_1C0013440;
    qword_1C0013440 = (__int64)&qword_1C0013440;
    qword_1C0013458 = (__int64)&qword_1C0013450;
    qword_1C0013450 = (__int64)&qword_1C0013450;
    qword_1C0013948 = (__int64)&qword_1C0013940;
    qword_1C0013940 = (__int64)&qword_1C0013940;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowPepPerfStates",
      &v36);
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"Overrides",
      &dword_1C00133F0);
    GetRegistryQwordValue(v10, v9, &qword_1C00133E8);
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"DisableAsserts",
      &v34);
    if ( v34 )
      byte_1C0013988 = 1;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
      (__int64)L"PerfEnablePackageIdle",
      &v35);
    qword_1C00137B8 = (__int64)RegisterKernelIdleStates;
    v11 = 1280;
    byte_1C0013BFC = 0;
    qword_1C00137C0 = (__int64)RegisterKernelPerfStates;
    byte_1C0013828 = v35 == 0;
    dword_1C001382C = 0;
    qword_1C00137D0 = (__int64)RegisterKernelPerfFeedback;
    v12 = 0;
    qword_1C00137D8 = (__int64)RegisterKernelLegacyPcc;
    qword_1C00137C8 = (__int64)RegisterKernelCap;
    qword_1C00137E0 = (__int64)RegisterKernelCpc;
    qword_1C00137E8 = (__int64)RegisterKernelPepPerf;
    qword_1C00137F0 = (__int64)GetNtProcessorNumber;
    qword_1C00137F8 = (__int64)RegisterKernelPackage;
    qword_1C0013800 = (__int64)&PPM_ETW_SUMMARY2;
    qword_1C0013808 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
    qword_1C0013810 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
    qword_1C0013818 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
    qword_1C0013820 = (__int64)&PPM_ETW_LONG_CAP_INFO;
    if ( !HviIsAnyHypervisorPresent() )
    {
      if ( (int)HalPrivateDispatchTable[143]((__int64)&v37) >= 0 )
      {
        v6 = v37;
        if ( (_DWORD)v37 != 1 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741735;
          v7 = 18;
          v30 = 1;
          goto LABEL_9;
        }
        qword_1C00136E0 = *((_QWORD *)&v37 + 1);
        xmmword_1C00136E8 = v38;
        qword_1C00136F8 = v39;
      }
      dword_1C0013BF8 = 2;
LABEL_48:
      inited = InitDevExts(v11);
      v3 = inited;
      if ( inited < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v3;
        v4 = 19;
        goto LABEL_4;
      }
      inited = ProcLibRegisterEtw();
      v3 = inited;
      if ( inited < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v3;
        v4 = 20;
        goto LABEL_4;
      }
      *((_QWORD *)&InputBuffer + 1) = 0LL;
      *(_QWORD *)&InputBuffer = ProcessSystemSleepStateNotify;
      inited = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
      v3 = inited;
      if ( inited < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v3;
        v4 = 21;
        goto LABEL_4;
      }
      inited = CollectAcpiBiosInfo(v15, v14, v16, v17);
      v3 = inited;
      if ( inited < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v3;
        v4 = 22;
        goto LABEL_4;
      }
      v33 = 1;
      EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v33);
      v18 = v33 == 2;
      v33 = 1;
      v19 = 0;
      if ( v18 )
        v19 = 1879048192;
      EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v33);
      if ( v33 == 2 )
        v19 |= 2u;
      v33 = 1;
      EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v33);
      if ( v33 == 2 )
        v19 |= 0x3300000u;
      v33 = 1;
      EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v33);
      if ( v33 == 2 )
        v19 |= 0x80000000;
      v20 = v19;
      v21 = 0x180099900377LL;
      qword_1C00133E8 = v19 | (unsigned __int64)qword_1C00133E8;
      dword_1C0013890 = v19;
      dword_1C0013508 = 1;
      dword_1C001350C = 248;
      if ( v36 )
        v21 = 0x181099D00377LL;
      Globals[0] = v21 | 0x10400000400LL;
      if ( (unsigned __int8)PoEnergyEstimationEnabled() )
      {
        v23 = (char *)&unk_1C00139E0;
        Globals[0] |= 0x2000000000uLL;
        for ( i = 0; i < 2u; ++i )
        {
          LOBYTE(v22) = i;
          PopulateEnergyEstimationModel(v22, v23);
          v23 += 256;
        }
      }
      *(_QWORD *)&InputBuffer = 0LL;
      v25 = InitDriver((__int64)&dword_1C0013508, &InputBuffer);
      v3 = v25;
      if ( v25 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x17u,
            (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
            v25);
        memset(&dword_1C0013508, 0, 0xF8uLL);
        return v3;
      }
      v26 = InputBuffer | Globals[0];
      Globals[0] |= InputBuffer;
      if ( dword_1C001382C == 1 )
      {
        qword_1C0013530 = 0LL;
        v27 = 0xFFFFDFFCF7FFFEFFuLL;
        qword_1C0013548 = 0LL;
        qword_1C0013550 = 0LL;
        qword_1C0013558 = 0LL;
        qword_1C0013578 = 0LL;
        qword_1C0013560 = 0LL;
        qword_1C0013568 = 0LL;
        qword_1C0013580 = 0LL;
        qword_1C0013588 = 0LL;
        qword_1C0013590 = 0LL;
        qword_1C0013598 = 0LL;
        qword_1C00135C0 = 0LL;
        qword_1C00135C8 = 0LL;
      }
      else
      {
        if ( dword_1C001382C != 2 )
        {
LABEL_82:
          if ( v12 )
          {
            qword_1C00135C0 = 0LL;
            qword_1C00135C8 = 0LL;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v28 = "Disabled";
            if ( dword_1C001382C )
              v28 = "Enabled";
            WPP_RECORDER_SF_s(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x18u,
              (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
              v28);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x19u,
                  (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x1Au,
                  (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
              }
            }
          }
          DisplayPPMFlags(Globals[0], 5u);
          if ( (v20 & Globals[0] & 0x7F077) != 0 )
            ProcLibTraceIdleStatesErrata(0);
          if ( (v20 & Globals[0] & 0x70000000) != 0 )
            ProcLibTracePerfStatesErrata(0);
          if ( (v20 & Globals[0] & 0x3300000) != 0 )
            ProcLibTraceThrottleStatesErrata(0);
          if ( (v20 & Globals[0] & 0x80000000LL) != 0 )
            ProcLibTracePccErrata(0);
          if ( qword_1C00133E8 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x1Bu,
                (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
            }
            DisplayPPMFlags(~qword_1C00133E8, 5u);
            Globals[0] &= ~qword_1C00133E8;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x1Cu,
              (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
          DisplayPPMFlags(Globals[0], 4u);
          if ( qword_1C0013548 && (dword_1C00133F0 & 0x70000000) != 0 )
            qword_1C0013548 = 0LL;
          return v3;
        }
        v27 = 0xFFFFFFFCFFFFFEFFuLL;
      }
      Globals[0] = v27 & v26;
      goto LABEL_82;
    }
    byte_1C0013BFC = 1;
    InputBuffer = 0LL;
    HviGetHypervisorFeatures();
    if ( (InputBuffer & 0x100000000000LL) != 0 )
    {
      GetHvPpmCapabilities(&v32, &v31, 0LL);
      if ( v31 )
      {
        dword_1C001382C = 2;
        qword_1C00137C0 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C00137D0 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1C00137D8 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C00137E0 = (__int64)RegisterHvCpcCounters;
      }
      else
      {
        if ( !v32 )
        {
LABEL_41:
          dword_1C0013BF8 = GetHiddenProcessorPresence();
          goto LABEL_48;
        }
        dword_1C001382C = 1;
        qword_1C00137C0 = (__int64)RegisterHvPerfStates;
        qword_1C00137D8 = (__int64)RegisterHvLegacyPcc;
        qword_1C00137D0 = (__int64)RegisterNoop;
        qword_1C00137E8 = (__int64)RegisterNoop;
        qword_1C0013800 = (__int64)&PPM_ETW_SUMMARY2_MINROOT_HV;
        qword_1C0013810 = (__int64)&PPM_ETW_PERF_STATES_ERROR_MINROOT_HV;
        qword_1C0013818 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_MINROOT_HV;
        qword_1C00137C8 = (__int64)RegisterHvCap;
        qword_1C0013820 = (__int64)&PPM_ETW_LONG_CAP_INFO_MINROOT_HV;
        qword_1C00137E0 = (__int64)RegisterHvCpc;
      }
      v11 = 1024;
      qword_1C00137B8 = (__int64)RegisterHvIdleStates;
      qword_1C0013808 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_MINROOT_HV;
      qword_1C00137F0 = (__int64)GetLpIndex;
      v13 = RegisterHvPackage;
    }
    else
    {
      v12 = 1;
      qword_1C00137B8 = (__int64)RegisterGuestIdleStates;
      v13 = RegisterNoop;
      qword_1C00137C0 = (__int64)RegisterNoop;
      qword_1C00137D0 = (__int64)RegisterNoop;
      qword_1C00137D8 = (__int64)RegisterNoop;
      qword_1C00137C8 = (__int64)RegisterNoop;
      qword_1C00137E0 = (__int64)RegisterNoop;
      qword_1C00137E8 = (__int64)RegisterNoop;
    }
    qword_1C00137F8 = (__int64)v13;
    goto LABEL_41;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 10;
LABEL_4:
    v5 = 3;
LABEL_5:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v5,
      v4,
      (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
      inited);
  }
  return v3;
}
