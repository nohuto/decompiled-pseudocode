/*
 * XREFs of ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C001FFCC
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C001FF10 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?ReadRegistrySleepstudyEnabled@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C002008C (-ReadRegistrySleepstudyEnabled@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1C0089D80 (-SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z.c)
 *     ?MxSubscribeWnfStateChange@MxWnf@@SAJPEAPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAU_WNF_STATE_NAME@@P6AJPEAU2@PEAX@Z33@Z @ 0x1C0091C6C (-MxSubscribeWnfStateChange@MxWnf@@SAJPEAPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAU_WNF_STATE_NAME@@P.c)
 */

void __fastcall FxPkgPnp::SleepStudyEvaluateParticipation(FxPkgPnp *this)
{
  bool v1; // zf
  _SLEEP_STUDY_INTERFACE *Pool2; // rax
  int (__fastcall *v4)(_MX_WNF_SUBSCRIPTION_CONTEXT *, void *); // r8
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v6; // r9
  signed int _a2; // edi
  const void *_a1; // rax
  void *OutputBufferLength; // [rsp+20h] [rbp-19h]
  unsigned __int8 explicitlyEnabledForDevice; // [rsp+40h] [rbp+7h] BYREF
  _POWER_PLATFORM_INFORMATION platformInfo; // [rsp+41h] [rbp+8h] BYREF
  _UNICODE_STRING valueName; // [rsp+48h] [rbp+Fh] BYREF
  _WNF_STATE_NAME wnfStateName; // [rsp+58h] [rbp+1Fh] BYREF
  wchar_t valueName_buffer[16]; // [rsp+60h] [rbp+27h] BYREF

  v1 = this->m_PowerPolicyMachine.m_Owner == 0LL;
  wnfStateName = WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED;
  valueName.Buffer = valueName_buffer;
  platformInfo.AoAc = 0;
  explicitlyEnabledForDevice = 0;
  wcscpy(valueName_buffer, L"SleepstudyState");
  *(_QWORD *)&valueName.Length = 2097182LL;
  if ( v1 )
    goto LABEL_4;
  if ( FxLibraryGlobals.SleepStudyDisabled == 1 )
    goto LABEL_4;
  FxPkgPnp::ReadRegistrySleepstudyEnabled(this, &valueName, &explicitlyEnabledForDevice);
  if ( !explicitlyEnabledForDevice )
    goto LABEL_4;
  if ( ZwPowerInformation(PlatformInformation, 0LL, 0, &platformInfo, 1u) < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v6 = 16;
    goto LABEL_13;
  }
  if ( !platformInfo.AoAc )
  {
LABEL_4:
    this->m_SleepStudyTrackReferences = 0;
    return;
  }
  Pool2 = (_SLEEP_STUDY_INTERFACE *)ExAllocatePool2(64LL, 32LL, 1397970260LL);
  if ( !Pool2 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v6 = 17;
LABEL_13:
    WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, v6, WPP_FxPkgPnpKM_cpp_Traceguids, ObjectHandleUnchecked);
    goto LABEL_4;
  }
  this->m_SleepStudy = Pool2;
  _a2 = MxWnf::MxSubscribeWnfStateChange(&Pool2->WnfContext, &wnfStateName, v4, this, OutputBufferLength);
  if ( _a2 < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x12u, WPP_FxPkgPnpKM_cpp_Traceguids, _a1, _a2);
    goto LABEL_4;
  }
  FxPkgPnp::SleepStudyEvaluateDripsConstraint(this, 1u);
}
