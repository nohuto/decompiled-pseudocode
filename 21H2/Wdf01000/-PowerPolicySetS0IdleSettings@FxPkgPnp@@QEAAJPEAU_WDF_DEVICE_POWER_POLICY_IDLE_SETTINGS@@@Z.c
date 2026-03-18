/*
 * XREFs of ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C001BAE0
 * Callers:
 *     imp_WdfDeviceAssignS0IdleSettings @ 0x1C001B9F0 (imp_WdfDeviceAssignS0IdleSettings.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C001B740 (-PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA-AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POW.c)
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C001C1D0 (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C001C20C (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C001DCB8 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C0021D90 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C003227C (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DD @ 0x1C005A3C8 (WPP_IFR_SF_DD.c)
 *     WPP_IFR_SF_sd @ 0x1C005DA8C (WPP_IFR_SF_sd.c)
 *     WPP_IFR_SF_LLd @ 0x1C00892B0 (WPP_IFR_SF_LLd.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C008A8C4 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall FxPkgPnp::PowerPolicySetS0IdleSettings(FxPkgPnp *this, _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings)
{
  _WDF_TRI_STATE v2; // eax
  FxPowerPolicyOwnerSettings *m_Owner; // r14
  _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *v4; // rdi
  unsigned __int8 v6; // r12
  int DxState; // esi
  FxPowerPolicyOwnerSettings *v8; // rax
  unsigned __int8 Set; // r15
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps; // eax
  signed int _a2; // eax
  unsigned int v12; // r8d
  unsigned int IdleTimeout; // r13d
  _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings; // eax
  int result; // eax
  IdleTimeoutManagement *p_m_TimeoutMgmt; // r12
  FxPowerPolicyOwnerSettings *v17; // rcx
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES v18; // eax
  int ExcludeD3Cold; // ecx
  void (__fastcall *SetD3ColdSupport)(void *, unsigned __int8); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  IdleTimeoutManagement::IdleTimeoutStatusUpdateResult updated; // eax
  FxObject *v23; // r10
  _FX_DRIVER_GLOBALS *v24; // rcx
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned __int8 v26; // dl
  volatile int m_IdleTimeoutStatus; // eax
  bool v28; // zf
  unsigned __int64 m_PoFxDeviceFlags; // rax
  unsigned __int64 v30; // rax
  _WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake; // ecx
  _FX_DRIVER_GLOBALS *v32; // rcx
  int inited; // eax
  int v34; // r15d
  __int32 v35; // eax
  __int32 v36; // eax
  int v37; // ebx
  const void *ObjectHandleUnchecked; // rax
  __int64 v39; // r10
  const void *v40; // rax
  __int64 v41; // r10
  unsigned __int8 v42; // dl
  unsigned __int8 v43; // cl
  const char *v44; // rcx
  unsigned __int16 v45; // r9
  __int64 i; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-E0h]
  int _a3; // [rsp+38h] [rbp-C8h]
  unsigned __int8 enabled; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 directedTransitions; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int8 dfxChildrenOptional; // [rsp+42h] [rbp-BEh] BYREF
  unsigned __int8 v52; // [rsp+43h] [rbp-BDh]
  unsigned __int8 useWdfTimerForPofx; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v54; // [rsp+45h] [rbp-BBh]
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING childrenOptionalName; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING useWdfTimerForPofxName; // [rsp+68h] [rbp-98h] BYREF
  _BYTE useWdfTimerForPofxName_buffer[48]; // [rsp+78h] [rbp-88h] OVERLAPPED BYREF
  __int64 v59; // [rsp+A8h] [rbp-58h]
  wchar_t v60; // [rsp+B0h] [rbp-50h]
  wchar_t childrenOptionalName_buffer[48]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v62[4]; // [rsp+120h] [rbp+20h] BYREF
  wchar_t v63; // [rsp+160h] [rbp+60h]

  v2 = Settings->Enabled;
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v52 = 0;
  v4 = Settings;
  v6 = 0;
  DxState = 4;
  if ( v2 == WdfTrue )
  {
    enabled = 1;
    goto LABEL_4;
  }
  if ( v2 != WdfUseDefault )
  {
    enabled = 0;
LABEL_4:
    v8 = m_Owner;
    goto LABEL_5;
  }
  enabled = 1;
  if ( KeGetCurrentIrql() )
  {
    WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x2Fu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids);
  }
  else
  {
    v60 = aWdfdefaultidle[28];
    *(_OWORD *)useWdfTimerForPofxName_buffer = *(_OWORD *)L"WdfDefaultIdleInWorkingState";
    *(_QWORD *)&valueName.Length = 3801144LL;
    *(_OWORD *)&useWdfTimerForPofxName_buffer[16] = *(_OWORD *)L"ltIdleInWorkingState";
    valueName.Buffer = (wchar_t *)useWdfTimerForPofxName_buffer;
    *(_OWORD *)&useWdfTimerForPofxName_buffer[32] = *(_OWORD *)L"WorkingState";
    v59 = *(_QWORD *)L"tate";
    FxPkgPnp::ReadRegistryS0Idle(this, &valueName, &enabled);
  }
  v8 = this->m_PowerPolicyMachine.m_Owner;
LABEL_5:
  Set = v8->m_IdleSettings.Set;
  v54 = Set;
  if ( !this->m_CapsQueried && !KeGetCurrentIrql() )
  {
    result = FxPkgPnp::QueryForCapabilities(this);
    if ( result < 0 )
      return result;
  }
  IdleCaps = v4->IdleCaps;
  if ( IdleCaps == IdleCannotWakeFromS0 )
  {
    DxState = v4->DxState;
    v52 = 0;
    if ( DxState == 5 )
      DxState = 4;
    goto LABEL_12;
  }
  if ( (unsigned int)(IdleCaps - 2) > 1 )
    goto LABEL_12;
  DxState = v4->DxState;
  v52 = 1;
  _a2 = FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(this, 1u);
  if ( DxState == 5 )
  {
    DxState = _a2;
    if ( (unsigned int)(_a2 - 2) > 2 )
    {
LABEL_89:
      WPP_IFR_SF_DD(
        this->m_Globals,
        (unsigned __int8)Settings,
        0xCu,
        0x30u,
        (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
        _a2,
        -1073741101);
      return -1073741101;
    }
    if ( _a2 > 3 )
    {
      if ( v4->IdleCaps != IdleUsbSelectiveSuspend )
        goto LABEL_12;
      goto LABEL_89;
    }
    goto LABEL_80;
  }
  if ( DxState > _a2 )
  {
    WPP_IFR_SF_LLd(this->m_Globals, (unsigned __int8)Settings, v12, 0x31u, traceGuid, DxState, _a2, _a3);
    return -1073741101;
  }
  if ( DxState <= 3 )
  {
LABEL_80:
    if ( v4->IdleCaps == IdleUsbSelectiveSuspend )
    {
      inited = FxPowerPolicyMachine::InitUsbSS(&this->m_PowerPolicyMachine);
      v34 = inited;
      if ( inited < 0 )
      {
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x33u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, inited);
        return v34;
      }
      Set = v54;
    }
    goto LABEL_12;
  }
  if ( v4->IdleCaps == IdleUsbSelectiveSuspend )
  {
    WPP_IFR_SF_DD(
      this->m_Globals,
      (unsigned __int8)Settings,
      0xCu,
      0x32u,
      (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      DxState,
      -1073741101);
    return -1073741101;
  }
LABEL_12:
  IdleTimeout = v4->IdleTimeout;
  if ( !IdleTimeout )
    IdleTimeout = 5000;
  UserControlOfIdleSettings = v4->UserControlOfIdleSettings;
  if ( UserControlOfIdleSettings == IdleAllowUserControl )
  {
    result = FxPkgPnp::UpdateWmiInstanceForS0Idle(this, AddInstance);
    if ( result < 0 )
      return result;
    if ( v4->Enabled == WdfUseDefault )
    {
      if ( Set || KeGetCurrentIrql() )
      {
        enabled = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled;
      }
      else
      {
        valueName.Buffer = (wchar_t *)useWdfTimerForPofxName_buffer;
        wcscpy((wchar_t *)useWdfTimerForPofxName_buffer, L"IdleInWorkingState");
        *(_QWORD *)&valueName.Length = 2490404LL;
        FxPkgPnp::ReadRegistryS0Idle(this, &valueName, &enabled);
      }
    }
    v6 = 1;
  }
  else if ( UserControlOfIdleSettings == IdleDoNotAllowUserControl )
  {
    FxPkgPnp::UpdateWmiInstanceForS0Idle(this, RemoveInstance);
  }
  if ( !Set )
  {
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set = 1;
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Overridable = v6;
  }
  if ( v4->Size <= 0x1C )
    goto LABEL_82;
  if ( !Set )
  {
    if ( (unsigned int)(v4->IdleTimeoutType - 1) <= 1 )
    {
      p_m_TimeoutMgmt = &m_Owner->m_IdleSettings.m_TimeoutMgmt;
      m_Globals = this->m_Globals;
      if ( !FxLibraryGlobals.PoxRegisterDevice
        || (updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(
                        &m_Owner->m_IdleSettings.m_TimeoutMgmt,
                        IdleTimeoutSystemManaged)) == IdleTimeoutStatusFlagsUpdated
        || (v35 = updated - 1) == 0 )
      {
        v24 = this->m_Globals;
        if ( (p_m_TimeoutMgmt->m_IdleTimeoutStatus & 4) != 0 )
        {
          directedTransitions = m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported;
        }
        else
        {
          directedTransitions = FxLibraryGlobals.WdfDirectedPowerTransitionEnabled;
          if ( v24->WdfBindInfo->Version.Minor >= 0x1F )
            directedTransitions = 1;
        }
        WdfBindInfo = v24->WdfBindInfo;
        v26 = FxLibraryGlobals.UseWdfTimerForPofx;
        m_IdleTimeoutStatus = p_m_TimeoutMgmt->m_IdleTimeoutStatus;
        dfxChildrenOptional = 0;
        if ( WdfBindInfo->Version.Minor >= 0x21 )
          v26 = 1;
        useWdfTimerForPofx = v26;
        if ( (m_IdleTimeoutStatus & 4) != 0 )
        {
          v43 = dfxChildrenOptional;
          if ( (m_Owner->m_IdleSettings.m_TimeoutMgmt.m_PoFxDeviceFlags & 6) == 6 )
            v43 = 1;
          dfxChildrenOptional = v43;
        }
        if ( KeGetCurrentIrql() )
        {
          WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x34u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids);
        }
        else
        {
          v62[0] = *(_OWORD *)L"WdfDirectedPowerTransitionEnable";
          v62[1] = *(_OWORD *)L"tedPowerTransitionEnable";
          v63 = aWdfdirectedpow_0[32];
          v62[2] = *(_OWORD *)L"TransitionEnable";
          v62[3] = *(_OWORD *)L"onEnable";
          valueName.Buffer = (wchar_t *)v62;
          *(_QWORD *)&valueName.Length = 4325440LL;
          FxPkgPnp::ReadRegistryS0Idle(this, &valueName, &directedTransitions);
          wcscpy(childrenOptionalName_buffer, L"WdfDirectedPowerTransitionChildrenOptional");
          *(_QWORD *)&childrenOptionalName.Length = 5636180LL;
          childrenOptionalName.Buffer = childrenOptionalName_buffer;
          FxPkgPnp::ReadRegistryS0Idle(this, &childrenOptionalName, &dfxChildrenOptional);
          *(_DWORD *)&useWdfTimerForPofxName_buffer[40] = *(_DWORD *)L"x";
          *(_OWORD *)useWdfTimerForPofxName_buffer = *(_OWORD *)L"WdfUseWdfTimerForPofx";
          *(_QWORD *)&useWdfTimerForPofxName_buffer[32] = *(_QWORD *)L"rPofx";
          *(_OWORD *)&useWdfTimerForPofxName_buffer[16] = *(_OWORD *)L"fTimerForPofx";
          *(_QWORD *)&useWdfTimerForPofxName.Length = 2883626LL;
          useWdfTimerForPofxName.Buffer = (wchar_t *)useWdfTimerForPofxName_buffer;
          FxPkgPnp::ReadRegistryS0Idle(this, &useWdfTimerForPofxName, &useWdfTimerForPofx);
        }
        v28 = dfxChildrenOptional == 0;
        m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported = directedTransitions;
        m_PoFxDeviceFlags = m_Owner->m_IdleSettings.m_TimeoutMgmt.m_PoFxDeviceFlags;
        if ( v28 )
          v30 = m_PoFxDeviceFlags & 0xFFFFFFFFFFFFFFF9uLL;
        else
          v30 = m_PoFxDeviceFlags | 6;
        Set = v54;
        m_Owner->m_IdleSettings.m_TimeoutMgmt.m_PoFxDeviceFlags = v30;
        m_Owner->m_IdleSettings.m_TimeoutMgmt.m_UseWdfTimerForPofx = useWdfTimerForPofx;
        goto LABEL_26;
      }
      v36 = v35 - 1;
      if ( v36 )
      {
        if ( v36 != 1 )
          return -1073741595;
        v37 = -1073741808;
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v23);
        WPP_IFR_SF_qqd(
          m_Globals,
          2u,
          0xCu,
          0xBu,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(const void **)(v39 + 144),
          -1073741808);
      }
      else
      {
        v37 = -1073741808;
        v40 = (const void *)FxObject::GetObjectHandleUnchecked(v23);
        WPP_IFR_SF_qqd(
          m_Globals,
          v42,
          0xCu,
          0xAu,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          v40,
          *(const void **)(v41 + 144),
          -1073741808);
      }
      FxVerifierDbgBreakPoint(m_Globals);
      return v37;
    }
LABEL_82:
    p_m_TimeoutMgmt = &m_Owner->m_IdleSettings.m_TimeoutMgmt;
    goto LABEL_26;
  }
  p_m_TimeoutMgmt = &m_Owner->m_IdleSettings.m_TimeoutMgmt;
  Settings = (_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *)(m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2);
  if ( (unsigned int)(v4->IdleTimeoutType - 1) <= 1 != ((m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0)
    && FxLibraryGlobals.PoxRegisterDevice )
  {
    v44 = "should";
    if ( !(_DWORD)Settings )
      v44 = "should not";
    WPP_IFR_SF_sd(
      this->m_Globals,
      m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2,
      0xCu,
      0x35u,
      (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      v44,
      -1073741808);
    FxVerifierDbgBreakPoint(this->m_Globals);
    return -1073741808;
  }
LABEL_26:
  if ( v4->IdleCaps != IdleCannotWakeFromS0 || v4->Size <= 0x18 )
    goto LABEL_27;
  PowerUpIdleDeviceOnSystemWake = v4->PowerUpIdleDeviceOnSystemWake;
  if ( PowerUpIdleDeviceOnSystemWake )
  {
    if ( PowerUpIdleDeviceOnSystemWake != WdfTrue )
      goto LABEL_27;
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 1;
    v32 = this->m_Globals;
    if ( !v32->FxVerboseOn )
      goto LABEL_27;
    v45 = 54;
    goto LABEL_116;
  }
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 0;
  v32 = this->m_Globals;
  if ( v32->FxVerboseOn )
  {
    v45 = 55;
LABEL_116:
    WPP_IFR_SF_(v32, 5u, 0xCu, v45, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids);
  }
LABEL_27:
  v17 = this->m_PowerPolicyMachine.m_Owner;
  if ( !v17->m_IdleSettings.UsbSSCapabilityKnown )
  {
    v18 = v4->IdleCaps;
    if ( v18 == IdleUsbSelectiveSuspend )
    {
      for ( i = 0LL; i < 2; ++i )
        *(&this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.UsbSSCapable + i) = 1;
    }
    else if ( v18 == IdleCanWakeFromS0 )
    {
      v17->m_IdleSettings.UsbSSCapabilityKnown = 1;
    }
  }
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.WakeFromS0Capable = v52;
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.DxState = DxState;
  if ( (p_m_TimeoutMgmt->m_IdleTimeoutStatus & 2) == 0 || m_Owner->m_IdleSettings.m_TimeoutMgmt.m_UseWdfTimerForPofx )
  {
    this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)(-10000LL * IdleTimeout);
  }
  else
  {
    if ( !Set )
      this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)-1LL;
    if ( v4->IdleTimeoutType == SystemManagedIdleTimeoutWithHint )
      this->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_NextIdleTimeoutHint = IdleTimeout;
  }
  if ( v4->Size > 0x1C )
  {
    ExcludeD3Cold = v4->ExcludeD3Cold;
    if ( ExcludeD3Cold != 2 )
    {
      if ( ExcludeD3Cold )
      {
        if ( ExcludeD3Cold != 1 )
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x38u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, ExcludeD3Cold);
        LOBYTE(Settings) = 0;
      }
      else
      {
        LOBYTE(Settings) = 1;
      }
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.D3ColdCapabilityKnown = 1;
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.D3ColdSupported = (unsigned __int8)Settings;
      SetD3ColdSupport = this->m_D3ColdInterface.SetD3ColdSupport;
      if ( SetD3ColdSupport )
        ((void (__fastcall *)(void *, _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *, __int64))SetD3ColdSupport)(
          this->m_D3ColdInterface.Context,
          Settings,
          1LL);
    }
  }
  FxPkgPnp::PowerPolicySetS0IdleState(this, enabled);
  return 0;
}
