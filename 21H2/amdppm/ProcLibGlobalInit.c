/*
 * XREFs of ProcLibGlobalInit @ 0x1C00387D0
 * Callers:
 *     DriverEntry @ 0x1C0038364 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001D90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     InitDevExts @ 0x1C0002D2C (InitDevExts.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0004448 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000548C (WPP_RECORDER_SF_DD.c)
 *     DisplayPPMFlags @ 0x1C0008D48 (DisplayPPMFlags.c)
 *     HviGetHypervisorFeatures @ 0x1C000EA58 (HviGetHypervisorFeatures.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000EA98 (HviIsAnyHypervisorPresent.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C000EAF4 (HviIsHypervisorMicrosoftCompatible.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EF40 (memset.c)
 *     GetRegistryDwordValue @ 0x1C0020FC0 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C0021064 (GetRegistryQwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C002145C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C00214DC (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0021600 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C002162C (ProcLibTraceThrottleStatesErrata.c)
 *     GetHiddenProcessorPresence @ 0x1C0023844 (GetHiddenProcessorPresence.c)
 *     GetHvPpmCapabilities @ 0x1C00239C0 (GetHvPpmCapabilities.c)
 *     InitDriver @ 0x1C003803C (InitDriver.c)
 *     ProcLibRegisterEtw @ 0x1C0038228 (ProcLibRegisterEtw.c)
 *     CollectAcpiBiosInfo @ 0x1C0038668 (CollectAcpiBiosInfo.c)
 *     PopulateEnergyEstimationModel @ 0x1C0039490 (PopulateEnergyEstimationModel.c)
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
  unsigned int v11; // edi
  char v12; // si
  __int16 v18; // r11
  void *v19; // rax
  __int64 v20; // rdx
  ULONG v21; // ecx
  const CHAR *v22; // r8
  const CHAR *v23; // r9
  bool v24; // zf
  unsigned int v25; // ebx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  char *v29; // rdi
  unsigned __int8 i; // bl
  int v31; // eax
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  const char *v34; // rax
  int v36; // [rsp+30h] [rbp-39h]
  char v37; // [rsp+40h] [rbp-29h] BYREF
  bool v38; // [rsp+41h] [rbp-28h] BYREF
  int v39; // [rsp+44h] [rbp-25h] BYREF
  int v40; // [rsp+48h] [rbp-21h] BYREF
  int v41; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v42; // [rsp+50h] [rbp-19h] BYREF
  __int128 v43; // [rsp+58h] [rbp-11h] BYREF
  __int128 v44; // [rsp+68h] [rbp-1h]
  __int64 v45; // [rsp+78h] [rbp+Fh]
  __int128 InputBuffer; // [rsp+80h] [rbp+17h] BYREF

  v42 = 0;
  v40 = 0;
  v41 = 0;
  v38 = 0;
  v37 = 0;
  v45 = 0LL;
  InputBuffer = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C0014608, 0x110u);
  v3 = inited;
  if ( inited >= 0 )
  {
    v6 = dword_1C0014608;
    if ( dword_1C0014608 != 62 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741735;
      v7 = 11;
      v36 = 62;
LABEL_9:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v7,
        (__int64)&WPP_d7c5e771396e3b131ba8bdc028e38c61_Traceguids,
        v6,
        v36);
      return (unsigned int)-1073741735;
    }
    inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
               WdfDriverGlobals,
               0LL,
               &qword_1C00143F8);
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
               &qword_1C0014408);
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
               &qword_1C0014400);
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
               &qword_1C0014948);
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
               &qword_1C0014968);
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
               &qword_1C0014940);
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
    word_1C001497C = 0;
    qword_1C0014970 = WorkItem;
    qword_1C0014418 = (__int64)&qword_1C0014410;
    qword_1C0014410 = (__int64)&qword_1C0014410;
    qword_1C0014428 = (__int64)&qword_1C0014420;
    qword_1C0014420 = (__int64)&qword_1C0014420;
    qword_1C0014438 = (__int64)&qword_1C0014430;
    qword_1C0014430 = (__int64)&qword_1C0014430;
    qword_1C0014448 = (__int64)&qword_1C0014440;
    qword_1C0014440 = (__int64)&qword_1C0014440;
    qword_1C0014458 = (__int64)&qword_1C0014450;
    qword_1C0014450 = (__int64)&qword_1C0014450;
    qword_1C0014958 = (__int64)&qword_1C0014950;
    qword_1C0014950 = (__int64)&qword_1C0014950;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowPepPerfStates",
      &v42);
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"Overrides",
      &dword_1C00143F0);
    GetRegistryQwordValue(v10, v9, &qword_1C00143E8);
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"DisableAsserts",
      &v40);
    if ( v40 )
      byte_1C0014998 = 1;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
      (__int64)L"PerfEnablePackageIdle",
      &v41);
    qword_1C00147C0 = (__int64)RegisterKernelIdleStates;
    v11 = 1280;
    byte_1C0014C11 = 0;
    qword_1C0014830 = (__int64)RegisterHiddenIdleStates;
    byte_1C0014838 = v41 == 0;
    dword_1C001483C = 0;
    qword_1C00147C8 = (__int64)RegisterKernelPerfStates;
    v12 = 0;
    qword_1C00147D8 = (__int64)RegisterKernelPerfFeedback;
    qword_1C00147E0 = (__int64)RegisterKernelLegacyPcc;
    qword_1C00147D0 = (__int64)RegisterKernelCap;
    qword_1C00147E8 = (__int64)RegisterKernelCpc;
    qword_1C00147F0 = (__int64)RegisterKernelPepPerf;
    qword_1C00147F8 = (__int64)GetNtProcessorNumber;
    qword_1C0014800 = (__int64)RegisterKernelPackage;
    qword_1C0014808 = (__int64)&PPM_ETW_SUMMARY2;
    qword_1C0014810 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
    qword_1C0014818 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
    qword_1C0014820 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
    qword_1C0014828 = (__int64)&PPM_ETW_LONG_CAP_INFO;
    if ( !HviIsAnyHypervisorPresent() )
    {
      if ( (int)HalPrivateDispatchTable[143]((__int64)&v43) >= 0 )
      {
        v6 = v43;
        if ( (_DWORD)v43 != 1 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741735;
          v7 = 18;
          v36 = 1;
          goto LABEL_9;
        }
        qword_1C00146E8 = *((_QWORD *)&v43 + 1);
        xmmword_1C00146F0 = v44;
        qword_1C0014700 = v45;
      }
      dword_1C0014C0C = dword_1C00143F4 + HalPrivateDispatchTable[145](0xFFFFFFFFLL);
      dword_1C0014C08 = 2;
LABEL_51:
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
      inited = CollectAcpiBiosInfo(v21, v20, v22, v23);
      v3 = inited;
      if ( inited < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v3;
        v4 = 22;
        goto LABEL_4;
      }
      v39 = 1;
      EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v39);
      v24 = v39 == 2;
      v39 = 1;
      v25 = 0;
      if ( v24 )
        v25 = 1879048192;
      EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v39);
      if ( v39 == 2 )
        v25 |= 2u;
      v39 = 1;
      EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v39);
      if ( v39 == 2 )
        v25 |= 0x3300000u;
      v39 = 1;
      EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v39);
      if ( v39 == 2 )
        v25 |= 0x80000000;
      v26 = v25;
      v27 = 0x180099900377LL;
      qword_1C00143E8 = v25 | (unsigned __int64)qword_1C00143E8;
      dword_1C00148A0 = v25;
      dword_1C0014508 = 1;
      dword_1C001450C = 256;
      if ( v42 )
        v27 = 0x181099D00377LL;
      Globals[0] = v27 | 0x10400000400LL;
      if ( (unsigned __int8)PoEnergyEstimationEnabled() )
      {
        v29 = (char *)&unk_1C00149F0;
        Globals[0] |= 0x2000000000uLL;
        for ( i = 0; i < 2u; ++i )
        {
          LOBYTE(v28) = i;
          PopulateEnergyEstimationModel(v28, v29);
          v29 += 256;
        }
      }
      *(_QWORD *)&InputBuffer = 0LL;
      v31 = InitDriver((__int64)&dword_1C0014508, &InputBuffer);
      v3 = v31;
      if ( v31 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x17u,
            (__int64)&WPP_d7c5e771396e3b131ba8bdc028e38c61_Traceguids,
            v31);
        memset(&dword_1C0014508, 0, 0x100uLL);
        return v3;
      }
      v32 = InputBuffer | Globals[0];
      Globals[0] |= InputBuffer;
      if ( dword_1C001483C == 1 )
      {
        qword_1C0014530 = 0LL;
        v33 = 0xFFFFDFFCF7FFFEFFuLL;
        qword_1C0014548 = 0LL;
        qword_1C0014550 = 0LL;
        qword_1C0014558 = 0LL;
        qword_1C0014578 = 0LL;
        qword_1C0014560 = 0LL;
        qword_1C0014568 = 0LL;
        qword_1C0014580 = 0LL;
        qword_1C0014588 = 0LL;
        qword_1C0014590 = 0LL;
        qword_1C0014598 = 0LL;
        qword_1C00145C8 = 0LL;
        qword_1C00145D0 = 0LL;
      }
      else
      {
        if ( dword_1C001483C != 2 )
        {
LABEL_85:
          if ( v12 )
          {
            qword_1C00145C8 = 0LL;
            qword_1C00145D0 = 0LL;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v34 = "Disabled";
            if ( dword_1C001483C )
              v34 = "Enabled";
            WPP_RECORDER_SF_s(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x18u,
              (__int64)&WPP_d7c5e771396e3b131ba8bdc028e38c61_Traceguids,
              v34);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x19u,
                  (__int64)&WPP_d7c5e771396e3b131ba8bdc028e38c61_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x1Au,
                  (__int64)&WPP_d7c5e771396e3b131ba8bdc028e38c61_Traceguids);
              }
            }
          }
          DisplayPPMFlags(Globals[0], 5u);
          if ( (v26 & Globals[0] & 0x7F077) != 0 )
            ProcLibTraceIdleStatesErrata(0);
          if ( (v26 & Globals[0] & 0x70000000) != 0 )
            ProcLibTracePerfStatesErrata(0);
          if ( (v26 & Globals[0] & 0x3300000) != 0 )
            ProcLibTraceThrottleStatesErrata(0);
          if ( (v26 & Globals[0] & 0x80000000LL) != 0 )
            ProcLibTracePccErrata(0);
          if ( qword_1C00143E8 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x1Bu,
                (__int64)&WPP_d7c5e771396e3b131ba8bdc028e38c61_Traceguids);
            }
            DisplayPPMFlags(~qword_1C00143E8, 5u);
            Globals[0] &= ~qword_1C00143E8;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x1Cu,
              (__int64)&WPP_d7c5e771396e3b131ba8bdc028e38c61_Traceguids);
          DisplayPPMFlags(Globals[0], 4u);
          if ( qword_1C0014548 && (dword_1C00143F0 & 0x70000000) != 0 )
            qword_1C0014548 = 0LL;
          return v3;
        }
        v33 = 0xFFFFFFFCFFFFFEFFuLL;
      }
      Globals[0] = v33 & v32;
      goto LABEL_85;
    }
    byte_1C0014C11 = 1;
    if ( HviIsHypervisorMicrosoftCompatible() )
    {
      _RAX = 1073741828LL;
      __asm { cpuid }
      *(_QWORD *)((char *)&InputBuffer + 4) = __PAIR64__(_RCX, _RBX);
      HIDWORD(InputBuffer) = _RDX;
    }
    InputBuffer = 0LL;
    HviGetHypervisorFeatures();
    if ( (InputBuffer & 0x100000000000LL) == 0 || (v18 & 0x1000) != 0 )
    {
      v12 = 1;
      qword_1C00147C0 = (__int64)RegisterGuestIdleStates;
      v19 = RegisterNoop;
      qword_1C00147C8 = (__int64)RegisterNoop;
      qword_1C00147D8 = (__int64)RegisterNoop;
      qword_1C00147E0 = (__int64)RegisterNoop;
      qword_1C00147D0 = (__int64)RegisterNoop;
      qword_1C00147E8 = (__int64)RegisterNoop;
      qword_1C00147F0 = (__int64)RegisterNoop;
    }
    else
    {
      GetHvPpmCapabilities(&v38, &v37, 0LL);
      if ( v37 )
      {
        dword_1C001483C = 2;
        qword_1C00147C8 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C00147D8 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1C00147E0 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C00147E8 = (__int64)RegisterHvCpcCounters;
        qword_1C0014830 = (__int64)RegisterHvIdleStates;
      }
      else
      {
        if ( !v38 )
        {
LABEL_44:
          dword_1C0014C08 = GetHiddenProcessorPresence();
          goto LABEL_51;
        }
        dword_1C001483C = 1;
        qword_1C00147C8 = (__int64)RegisterHvPerfStates;
        qword_1C00147E0 = (__int64)RegisterHvLegacyPcc;
        qword_1C00147D8 = (__int64)RegisterNoop;
        qword_1C00147F0 = (__int64)RegisterNoop;
        qword_1C0014808 = (__int64)&PPM_ETW_SUMMARY2_MINROOT_HV;
        qword_1C0014818 = (__int64)&PPM_ETW_PERF_STATES_ERROR_MINROOT_HV;
        qword_1C0014820 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_MINROOT_HV;
        qword_1C00147D0 = (__int64)RegisterHvCap;
        qword_1C0014828 = (__int64)&PPM_ETW_LONG_CAP_INFO_MINROOT_HV;
        qword_1C00147E8 = (__int64)RegisterHvCpc;
      }
      qword_1C00147C0 = (__int64)RegisterHvIdleStates;
      qword_1C0014810 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_MINROOT_HV;
      v11 = 1024;
      qword_1C00147F8 = (__int64)GetLpIndex;
      v19 = RegisterHvPackage;
    }
    qword_1C0014800 = (__int64)v19;
    goto LABEL_44;
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
      (__int64)&WPP_d7c5e771396e3b131ba8bdc028e38c61_Traceguids,
      inited);
  }
  return v3;
}
