/*
 * XREFs of ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C000F168
 * Callers:
 *     imp_WdfDeviceAssignS0IdleSettings @ 0x1C000E9A0 (imp_WdfDeviceAssignS0IdleSettings.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C000EA8C (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C000EAC8 (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_DD @ 0x1C0037298 (WPP_IFR_SF_DD.c)
 *     WPP_IFR_SF_sd @ 0x1C003CE0C (WPP_IFR_SF_sd.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C003DAB4 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C00813D0 (-PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA-AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POW.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C00818D4 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     WPP_IFR_SF_LLd @ 0x1C0082E50 (WPP_IFR_SF_LLd.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C00848A8 (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C0085E20 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 *     ?UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00881F8 (-UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall FxPkgPnp::PowerPolicySetS0IdleSettings(FxPkgPnp *this, _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings)
{
  unsigned __int8 MaximumLength_high; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 v6; // r12
  _DEVICE_POWER_STATE v7; // esi
  bool v8; // zf
  int v9; // edx
  _FX_DRIVER_GLOBALS *v10; // rcx
  _WDF_TRI_STATE v11; // eax
  unsigned __int8 Set; // r13
  int result; // eax
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps; // eax
  unsigned __int8 v15; // r8
  _DEVICE_POWER_STATE _a2; // eax
  unsigned __int8 v17; // dl
  unsigned int v18; // r8d
  int inited; // eax
  int v20; // r14d
  _DEVICE_POWER_STATE DxState; // eax
  unsigned int IdleTimeout; // r15d
  _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings; // eax
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  unsigned __int8 MaximumLength; // cl
  _WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake; // ecx
  int v28; // edx
  const char *v29; // rcx
  _FX_DRIVER_GLOBALS *v30; // rcx
  unsigned __int16 v31; // r9
  FxPowerPolicyOwnerSettings *v32; // rcx
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES v33; // eax
  __int64 i; // rcx
  _WDF_TRI_STATE ExcludeD3Cold; // ecx
  unsigned __int8 v36; // dl
  void (__fastcall *SetD3ColdSupport)(void *, unsigned __int8); // rax
  const _GUID *traceGuid; // [rsp+28h] [rbp-E0h]
  int enabled; // [rsp+40h] [rbp-C8h]
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE *v41; // [rsp+58h] [rbp-B0h]
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-A8h] BYREF
  _UNICODE_STRING v43; // [rsp+70h] [rbp-98h] BYREF
  _UNICODE_STRING v44; // [rsp+80h] [rbp-88h] BYREF
  _OWORD v45[2]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE valueName_buffer[64]; // [rsp+B0h] [rbp-58h] OVERLAPPED BYREF
  _WORD childrenOptionalName_buffer[44]; // [rsp+F0h] [rbp-18h] OVERLAPPED BYREF
  int v48; // [rsp+148h] [rbp+40h]
  wchar_t v49; // [rsp+14Ch] [rbp+44h]
  _OWORD v50[4]; // [rsp+158h] [rbp+50h] BYREF
  wchar_t v51; // [rsp+198h] [rbp+90h]

  MaximumLength_high = 0;
  m_Globals = this->m_Globals;
  v6 = 0;
  HIBYTE(valueName.Length) = 0;
  v7 = PowerDeviceD3;
  v8 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, unk_1C00A9FD2, 0x1Fu) == 0;
  v11 = Settings->Enabled;
  if ( !v8 )
    v9 = 1;
  *(_DWORD *)(&valueName.MaximumLength + 1) = v9;
  LOBYTE(valueName.MaximumLength) = v9;
  if ( v11 == WdfTrue )
  {
    LOBYTE(valueName.Length) = 1;
  }
  else if ( v11 == WdfUseDefault )
  {
    LOBYTE(valueName.Length) = 1;
    if ( KeGetCurrentIrql() )
    {
      WPP_IFR_SF_(v10, 3u, 0xCu, 0x2Fu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids);
    }
    else
    {
      childrenOptionalName_buffer[0] = aWdfdefaultidle[28];
      *(_OWORD *)&valueName_buffer[8] = *(_OWORD *)L"WdfDefaultIdleInWorkingState";
      valueName.Buffer = (wchar_t *)3801144;
      *(_OWORD *)&valueName_buffer[24] = *(_OWORD *)L"ltIdleInWorkingState";
      v41 = &valueName_buffer[8];
      *(_OWORD *)&valueName_buffer[40] = *(_OWORD *)L"WorkingState";
      *(_QWORD *)&valueName_buffer[56] = *(_QWORD *)L"tate";
      FxPkgPnp::ReadRegistryS0Idle(this, (const _UNICODE_STRING *)&valueName.Buffer, (unsigned __int8 *)&valueName);
    }
  }
  else
  {
    LOBYTE(valueName.Length) = 0;
  }
  Set = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set;
  if ( !this->m_CapsQueried && !KeGetCurrentIrql() )
  {
    result = FxPkgPnp::QueryForCapabilities(this);
    if ( result < 0 )
      return result;
  }
  IdleCaps = Settings->IdleCaps;
  v15 = 1;
  if ( IdleCaps == IdleCannotWakeFromS0 )
  {
    DxState = Settings->DxState;
    HIBYTE(valueName.Length) = 0;
    if ( DxState == PowerDeviceMaximum )
      DxState = PowerDeviceD3;
    v7 = DxState;
    goto LABEL_34;
  }
  if ( (unsigned int)(IdleCaps - 2) <= 1 )
  {
    v7 = Settings->DxState;
    HIBYTE(valueName.Length) = 1;
    _a2 = FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(this, PowerSystemWorking);
    if ( v7 == PowerDeviceMaximum )
    {
      v7 = _a2;
      if ( (unsigned int)(_a2 - 2) > 2 )
      {
LABEL_19:
        WPP_IFR_SF_DD(this->m_Globals, v17, 0xCu, 0x30u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a2, -1073741101);
        return -1073741101;
      }
      if ( _a2 > PowerDeviceD2 )
      {
        if ( Settings->IdleCaps == IdleUsbSelectiveSuspend )
          goto LABEL_19;
        goto LABEL_33;
      }
    }
    else
    {
      if ( v7 > _a2 )
      {
        WPP_IFR_SF_LLd(this->m_Globals, v17, v18, 0x31u, traceGuid, v7, _a2, enabled);
        return -1073741101;
      }
      if ( v7 > PowerDeviceD2 )
      {
        if ( Settings->IdleCaps == IdleUsbSelectiveSuspend )
        {
          WPP_IFR_SF_DD(this->m_Globals, v17, 0xCu, 0x32u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v7, -1073741101);
          return -1073741101;
        }
LABEL_33:
        v15 = 1;
        goto LABEL_34;
      }
    }
    if ( Settings->IdleCaps == IdleUsbSelectiveSuspend )
    {
      inited = FxPowerPolicyMachine::InitUsbSS(&this->m_PowerPolicyMachine);
      v20 = inited;
      if ( inited < 0 )
      {
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x33u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, inited);
        return v20;
      }
      MaximumLength_high = 0;
    }
    goto LABEL_33;
  }
LABEL_34:
  IdleTimeout = Settings->IdleTimeout;
  if ( !IdleTimeout )
    IdleTimeout = 5000;
  UserControlOfIdleSettings = Settings->UserControlOfIdleSettings;
  if ( UserControlOfIdleSettings == IdleAllowUserControl )
  {
    result = FxPkgPnp::UpdateWmiInstanceForS0Idle(this, AddInstance);
    if ( result < 0 )
      return result;
    if ( Settings->Enabled == WdfUseDefault )
    {
      if ( Set || KeGetCurrentIrql() )
      {
        LOBYTE(valueName.Length) = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled;
      }
      else
      {
        *(_DWORD *)valueName_buffer = *(_DWORD *)L"te";
        *(_WORD *)&valueName_buffer[4] = aIdleinworkings[18];
        ValueName.Buffer = (wchar_t *)v45;
        v45[0] = *(_OWORD *)L"IdleInWorkingState";
        *(_QWORD *)&ValueName.Length = 2490404LL;
        v45[1] = *(_OWORD *)L"rkingState";
        FxPkgPnp::ReadRegistryS0Idle(this, &ValueName, (unsigned __int8 *)&valueName);
      }
    }
    v15 = 1;
    v6 = 1;
  }
  else if ( UserControlOfIdleSettings == IdleDoNotAllowUserControl )
  {
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    v6 = 0;
    WmiInstance = m_Owner->m_IdleSettings.WmiInstance;
    if ( WmiInstance )
    {
      FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_IdleSettings.WmiInstance);
      v15 = 1;
    }
  }
  if ( !Set )
  {
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set = 1;
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Overridable = v6;
  }
  if ( Settings->Size <= 0x1C )
    goto LABEL_57;
  if ( !Set )
  {
    if ( (unsigned int)(Settings->IdleTimeoutType - 1) <= 1 )
    {
      result = IdleTimeoutManagement::UseSystemManagedIdleTimeout(
                 &this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt,
                 this->m_Globals);
      if ( result < 0 )
        return result;
      HIBYTE(valueName.MaximumLength) = 0;
      if ( KeGetCurrentIrql() )
      {
        WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x34u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids);
        MaximumLength = *((_BYTE *)&valueName.MaximumLength + 2);
      }
      else
      {
        v50[0] = *(_OWORD *)L"WdfDirectedPowerTransitionEnable";
        v50[1] = *(_OWORD *)L"tedPowerTransitionEnable";
        v51 = aWdfdirectedpow_0[32];
        v50[2] = *(_OWORD *)L"TransitionEnable";
        v50[3] = *(_OWORD *)L"onEnable";
        v43.Buffer = (wchar_t *)v50;
        *(_QWORD *)&v43.Length = 4325440LL;
        FxPkgPnp::ReadRegistryS0Idle(this, &v43, (unsigned __int8 *)&valueName.MaximumLength);
        *(_OWORD *)&childrenOptionalName_buffer[4] = *(_OWORD *)L"WdfDirectedPowerTransitionChildrenOptional";
        v48 = *(_DWORD *)L"al";
        *(_OWORD *)&childrenOptionalName_buffer[20] = *(_OWORD *)L"TransitionChildrenOptional";
        *(_OWORD *)&childrenOptionalName_buffer[12] = *(_OWORD *)L"tedPowerTransitionChildrenOptional";
        v49 = aWdfdirectedpow[42];
        *(_OWORD *)&childrenOptionalName_buffer[36] = *(_OWORD *)L"enOptional";
        *(_OWORD *)&childrenOptionalName_buffer[28] = *(_OWORD *)L"onChildrenOptional";
        *(_QWORD *)&v44.Length = 5636180LL;
        v44.Buffer = &childrenOptionalName_buffer[4];
        FxPkgPnp::ReadRegistryS0Idle(this, &v44, (unsigned __int8 *)&valueName.MaximumLength + 1);
        MaximumLength_high = HIBYTE(valueName.MaximumLength);
        MaximumLength = valueName.MaximumLength;
      }
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported = MaximumLength;
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsChildrenOptional = MaximumLength_high;
    }
LABEL_57:
    if ( Settings->IdleCaps == IdleCannotWakeFromS0 )
    {
      if ( Settings->Size <= 0x18 )
        PowerUpIdleDeviceOnSystemWake = WdfUseDefault;
      else
        PowerUpIdleDeviceOnSystemWake = Settings->PowerUpIdleDeviceOnSystemWake;
      if ( PowerUpIdleDeviceOnSystemWake )
      {
        if ( PowerUpIdleDeviceOnSystemWake != WdfTrue )
          goto LABEL_73;
        this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 1;
        v30 = this->m_Globals;
        if ( !v30->FxVerboseOn )
          goto LABEL_73;
        v31 = 54;
        goto LABEL_72;
      }
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 0;
      v30 = this->m_Globals;
      if ( v30->FxVerboseOn )
      {
        v31 = 55;
LABEL_72:
        WPP_IFR_SF_(v30, 5u, 0xCu, v31, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids);
      }
    }
LABEL_73:
    v32 = this->m_PowerPolicyMachine.m_Owner;
    if ( !v32->m_IdleSettings.UsbSSCapabilityKnown )
    {
      v33 = Settings->IdleCaps;
      if ( v33 == IdleUsbSelectiveSuspend )
      {
        for ( i = 0LL; i < 2; ++i )
          *(&this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.UsbSSCapable + i) = 1;
      }
      else if ( v33 == IdleCanWakeFromS0 )
      {
        v32->m_IdleSettings.UsbSSCapabilityKnown = 1;
      }
    }
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.WakeFromS0Capable = HIBYTE(valueName.Length);
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.DxState = v7;
    if ( (this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
    {
      if ( !Set )
        this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)-1LL;
      if ( Settings->IdleTimeoutType == SystemManagedIdleTimeoutWithHint )
        this->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_NextIdleTimeoutHint = IdleTimeout;
    }
    else
    {
      this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)(-10000LL * IdleTimeout);
    }
    if ( Settings->Size > 0x1C )
    {
      ExcludeD3Cold = Settings->ExcludeD3Cold;
      if ( ExcludeD3Cold != WdfUseDefault )
      {
        if ( ExcludeD3Cold )
        {
          if ( ExcludeD3Cold != WdfTrue )
            WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x38u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, ExcludeD3Cold);
          v36 = 0;
        }
        else
        {
          v36 = 1;
        }
        this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.D3ColdCapabilityKnown = 1;
        this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.D3ColdSupported = v36;
        SetD3ColdSupport = this->m_D3ColdInterface.SetD3ColdSupport;
        if ( SetD3ColdSupport )
          ((void (__fastcall *)(void *))SetD3ColdSupport)(this->m_D3ColdInterface.Context);
      }
    }
    FxPkgPnp::PowerPolicySetS0IdleState(this, valueName.Length, v15);
    return 0;
  }
  v28 = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2;
  if ( (unsigned int)(Settings->IdleTimeoutType - 1) <= 1 == (v28 != 0)
    || !WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject )
  {
    goto LABEL_57;
  }
  v29 = "should";
  if ( !v28 )
    v29 = "should not";
  WPP_IFR_SF_sd(this->m_Globals, v28, 0xCu, 0x35u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v29, -1073741808);
  FxVerifierDbgBreakPoint(this->m_Globals);
  return -1073741808;
}
