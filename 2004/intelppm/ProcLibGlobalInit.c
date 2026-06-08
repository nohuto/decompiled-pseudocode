/*
 * XREFs of ProcLibGlobalInit @ 0x1C003B758
 * Callers:
 *     DriverEntry @ 0x1C003B03C (DriverEntry.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C0001C68 (HviIsAnyHypervisorPresent.c)
 *     InitDevExts @ 0x1C0001CB4 (InitDevExts.c)
 *     DisplayPPMFlags @ 0x1C0002788 (DisplayPPMFlags.c)
 *     WPP_RECORDER_SF_s @ 0x1C000356C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0009C90 (WPP_RECORDER_SF_dd.c)
 *     GetRegistryQwordValue @ 0x1C002083C (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C0020900 (GetRegistryDwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C002BD80 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C002BE00 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C002C300 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C002D188 (ProcLibTraceThrottleStatesErrata.c)
 *     GetHiddenProcessorPresence @ 0x1C002F774 (GetHiddenProcessorPresence.c)
 *     GetHvPpmCapabilities @ 0x1C002F8E8 (GetHvPpmCapabilities.c)
 *     ProcLibRegisterEtw @ 0x1C003B16C (ProcLibRegisterEtw.c)
 *     CollectAcpiBiosInfo @ 0x1C003B1B4 (CollectAcpiBiosInfo.c)
 *     InitDriver @ 0x1C003B2B4 (InitDriver.c)
 *     PopulateEnergyEstimationModel @ 0x1C003B590 (PopulateEnergyEstimationModel.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int inited; // eax
  unsigned int v3; // edi
  int v4; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  char v9; // si
  __int64 v10; // rdx
  ULONG v11; // ecx
  const CHAR *v12; // r8
  const CHAR *v13; // r9
  bool v14; // zf
  unsigned int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // rax
  int *v18; // rdi
  unsigned __int8 i; // bl
  int v20; // eax
  __int64 v21; // rax
  const char *v22; // rax
  unsigned __int16 v24; // r9
  unsigned int v25; // r8d
  unsigned __int16 v26; // r9
  void *v37; // rax
  unsigned __int64 v38; // rdx
  int v39; // [rsp+30h] [rbp-49h]
  char v40; // [rsp+40h] [rbp-39h] BYREF
  bool v41; // [rsp+41h] [rbp-38h] BYREF
  int v42; // [rsp+44h] [rbp-35h] BYREF
  int v43; // [rsp+48h] [rbp-31h] BYREF
  int v44; // [rsp+4Ch] [rbp-2Dh] BYREF
  int v45; // [rsp+50h] [rbp-29h] BYREF
  __int128 v46; // [rsp+58h] [rbp-21h] BYREF
  __int128 v47; // [rsp+68h] [rbp-11h]
  __int64 v48; // [rsp+78h] [rbp-1h]
  __int128 v49; // [rsp+80h] [rbp+7h] BYREF
  __int128 InputBuffer; // [rsp+90h] [rbp+17h] BYREF

  v45 = 0;
  v43 = 0;
  v44 = 0;
  v41 = 0;
  v40 = 0;
  v48 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C001C620, 0x110u);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v24 = 10;
    goto LABEL_62;
  }
  v4 = dword_1C001C620;
  if ( dword_1C001C620 != 62 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 11;
      v39 = 62;
LABEL_67:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v26,
        (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
        v4,
        v39);
    }
    return (unsigned int)-1073741735;
  }
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C001C418);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v24 = 12;
    goto LABEL_63;
  }
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C001C428);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v24 = 13;
    goto LABEL_63;
  }
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C001C420);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v24 = 14;
    goto LABEL_63;
  }
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C001C958);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v24 = 15;
    goto LABEL_63;
  }
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
             WdfDriverGlobals,
             0LL,
             &qword_1C001C978);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v24 = 16;
    goto LABEL_63;
  }
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
             WdfDriverGlobals,
             0LL,
             &qword_1C001C950);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v24 = 17;
LABEL_63:
    v25 = 4;
    goto LABEL_64;
  }
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C001C98C = 0;
  qword_1C001C980 = WorkItem;
  qword_1C001C438 = (__int64)&qword_1C001C430;
  qword_1C001C430 = (__int64)&qword_1C001C430;
  qword_1C001C448 = (__int64)&qword_1C001C440;
  qword_1C001C440 = (__int64)&qword_1C001C440;
  qword_1C001C458 = (__int64)&qword_1C001C450;
  qword_1C001C450 = (__int64)&qword_1C001C450;
  qword_1C001C468 = (__int64)&qword_1C001C460;
  qword_1C001C460 = (__int64)&qword_1C001C460;
  qword_1C001C478 = (__int64)&qword_1C001C470;
  qword_1C001C470 = (__int64)&qword_1C001C470;
  qword_1C001C968 = (__int64)&qword_1C001C960;
  qword_1C001C960 = (__int64)&qword_1C001C960;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v45);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C001C410);
  GetRegistryQwordValue(v7, v6, &qword_1C001C408);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v43);
  if ( v43 )
    byte_1C001C9A8 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v44);
  qword_1C001C7D8 = (__int64)RegisterKernelIdleStates;
  v8 = 1280;
  byte_1C001CC1C = 0;
  qword_1C001C7E0 = (__int64)RegisterKernelPerfStates;
  byte_1C001C848 = v44 == 0;
  dword_1C001C84C = 0;
  qword_1C001C7F0 = (__int64)RegisterKernelPerfFeedback;
  v9 = 0;
  qword_1C001C7F8 = (__int64)RegisterKernelLegacyPcc;
  qword_1C001C7E8 = (__int64)RegisterKernelCap;
  qword_1C001C800 = (__int64)RegisterKernelCpc;
  qword_1C001C808 = (__int64)RegisterKernelPepPerf;
  qword_1C001C810 = (__int64)GetNtProcessorNumber;
  qword_1C001C818 = (__int64)RegisterKernelPackage;
  qword_1C001C820 = (__int64)"7";
  qword_1C001C828 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C001C830 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C001C838 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C001C840 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  if ( !HviIsAnyHypervisorPresent() )
  {
    if ( (int)HalPrivateDispatchTable[143]((__int64)&v46) < 0 )
    {
LABEL_13:
      dword_1C001CC18 = 2;
      goto LABEL_14;
    }
    v4 = v46;
    if ( (_DWORD)v46 == 1 )
    {
      qword_1C001C700 = *((_QWORD *)&v46 + 1);
      xmmword_1C001C708 = v47;
      qword_1C001C718 = v48;
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 18;
      v39 = 1;
      goto LABEL_67;
    }
    return (unsigned int)-1073741735;
  }
  byte_1C001CC1C = 1;
  v49 = 0LL;
  InputBuffer = 0LL;
  if ( HviIsAnyHypervisorPresent() )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    *(_QWORD *)((char *)&InputBuffer + 4) = __PAIR64__(_RCX, _RBX);
    HIDWORD(InputBuffer) = _RDX;
  }
  else
  {
    LODWORD(_RAX) = InputBuffer;
  }
  if ( (_DWORD)_RAX == 824407624 )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *(_QWORD *)&v49 = __PAIR64__(_RBX, _RAX);
    *((_QWORD *)&v49 + 1) = __PAIR64__(_RDX, _RCX);
  }
  if ( (v49 & 0x100000000000LL) == 0 )
  {
    v9 = 1;
    qword_1C001C7D8 = (__int64)RegisterGuestIdleStates;
    v37 = RegisterNoop;
    qword_1C001C7E0 = (__int64)RegisterNoop;
    qword_1C001C7F0 = (__int64)RegisterNoop;
    qword_1C001C7F8 = (__int64)RegisterNoop;
    qword_1C001C7E8 = (__int64)RegisterNoop;
    qword_1C001C800 = (__int64)RegisterNoop;
    qword_1C001C808 = (__int64)RegisterNoop;
    goto LABEL_93;
  }
  GetHvPpmCapabilities(&v41, &v40, 0LL);
  if ( v40 )
  {
    dword_1C001C84C = 2;
    qword_1C001C7E0 = (__int64)RegisterHvPerfStatesCounters;
    qword_1C001C7F0 = (__int64)RegisterHvPerfFeedbackCounters;
    qword_1C001C7F8 = (__int64)RegisterHvLegacyPccCounters;
    qword_1C001C800 = (__int64)RegisterHvCpcCounters;
    goto LABEL_91;
  }
  if ( v41 )
  {
    dword_1C001C84C = 1;
    qword_1C001C7E0 = (__int64)RegisterHvPerfStates;
    qword_1C001C7F8 = (__int64)RegisterHvLegacyPcc;
    qword_1C001C7F0 = (__int64)RegisterNoop;
    qword_1C001C808 = (__int64)RegisterNoop;
    qword_1C001C820 = (__int64)&PPM_ETW_SUMMARY2_MINROOT_HV;
    qword_1C001C830 = (__int64)&PPM_ETW_PERF_STATES_ERROR_MINROOT_HV;
    qword_1C001C838 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_MINROOT_HV;
    qword_1C001C7E8 = (__int64)RegisterHvCap;
    qword_1C001C840 = (__int64)&PPM_ETW_LONG_CAP_INFO_MINROOT_HV;
    qword_1C001C800 = (__int64)RegisterHvCpc;
LABEL_91:
    v8 = 1024;
    qword_1C001C7D8 = (__int64)RegisterHvIdleStates;
    qword_1C001C828 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_MINROOT_HV;
    qword_1C001C810 = (__int64)GetLpIndex;
    v37 = RegisterHvPackage;
LABEL_93:
    qword_1C001C818 = (__int64)v37;
  }
  dword_1C001CC18 = GetHiddenProcessorPresence();
LABEL_14:
  inited = InitDevExts(v8);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v24 = 19;
    goto LABEL_62;
  }
  inited = ProcLibRegisterEtw();
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v24 = 20;
    goto LABEL_62;
  }
  *((_QWORD *)&InputBuffer + 1) = 0LL;
  *(_QWORD *)&InputBuffer = ProcessSystemSleepStateNotify;
  inited = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v24 = 21;
    goto LABEL_62;
  }
  inited = CollectAcpiBiosInfo(v11, v10, v12, v13);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v24 = 22;
LABEL_62:
    v25 = 3;
LABEL_64:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v25,
      v24,
      (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
      inited);
    return v3;
  }
  v42 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v42);
  v14 = v42 == 2;
  v42 = 1;
  v15 = 0;
  if ( v14 )
    v15 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v42);
  if ( v42 == 2 )
    v15 |= 2u;
  v42 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v42);
  if ( v42 == 2 )
    v15 |= 0x3300000u;
  v42 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v42);
  if ( v42 == 2 )
    v15 |= 0x80000000;
  v16 = v15;
  v17 = 0x180099900377LL;
  qword_1C001C408 = v15 | (unsigned __int64)qword_1C001C408;
  dword_1C001C8B0 = v15;
  dword_1C001C528 = 1;
  dword_1C001C52C = 248;
  if ( v45 )
    v17 = 0x181099D00377LL;
  Globals[0] = v17 | 0x10400000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v18 = dword_1C001CA00;
    Globals[0] |= 0x2000000000uLL;
    for ( i = 0; i < 2u; ++i )
    {
      PopulateEnergyEstimationModel(i, v18);
      v18 += 64;
    }
  }
  *(_QWORD *)&v49 = 0LL;
  v20 = InitDriver((__int64)&dword_1C001C528, &v49);
  v3 = v20;
  if ( v20 >= 0 )
  {
    v21 = v49 | Globals[0];
    Globals[0] |= v49;
    if ( dword_1C001C84C == 1 )
    {
      qword_1C001C550 = 0LL;
      v38 = 0xFFFFDFFCF7FFFEFFuLL;
      qword_1C001C568 = 0LL;
      qword_1C001C570 = 0LL;
      qword_1C001C578 = 0LL;
      qword_1C001C598 = 0LL;
      qword_1C001C580 = 0LL;
      qword_1C001C588 = 0LL;
      qword_1C001C5A0 = 0LL;
      qword_1C001C5A8 = 0LL;
      qword_1C001C5B0 = 0LL;
      qword_1C001C5B8 = 0LL;
      qword_1C001C5E0 = 0LL;
      qword_1C001C5E8 = 0LL;
    }
    else
    {
      if ( dword_1C001C84C != 2 )
      {
LABEL_34:
        if ( v9 )
        {
          qword_1C001C5E0 = 0LL;
          qword_1C001C5E8 = 0LL;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = "Disabled";
          if ( dword_1C001C84C )
            v22 = "Enabled";
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0x18u,
            (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
            v22);
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
        if ( (v16 & Globals[0] & 0x7F077) != 0 )
          ProcLibTraceIdleStatesErrata(0);
        if ( (v16 & Globals[0] & 0x70000000) != 0 )
          ProcLibTracePerfStatesErrata(0);
        if ( (v16 & Globals[0] & 0x3300000) != 0 )
          ProcLibTraceThrottleStatesErrata(0);
        if ( (v16 & Globals[0] & 0x80000000LL) != 0 )
          ProcLibTracePccErrata(0);
        if ( qword_1C001C408 )
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
          DisplayPPMFlags(~qword_1C001C408, 5u);
          Globals[0] &= ~qword_1C001C408;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0x1Cu,
            (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
        DisplayPPMFlags(Globals[0], 4u);
        if ( qword_1C001C568 && (dword_1C001C410 & 0x70000000) != 0 )
          qword_1C001C568 = 0LL;
        return v3;
      }
      v38 = 0xFFFFFFFCFFFFFEFFuLL;
    }
    Globals[0] = v38 & v21;
    goto LABEL_34;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x17u,
      (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
      v20);
  memset(&dword_1C001C528, 0, 0xF8uLL);
  return v3;
}
