/*
 * XREFs of ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C0085440
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087370 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0085188 (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1C0085280 (-SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z.c)
 *     ?MxSubscribeWnfStateChange@MxWnf@@SAJPEAPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAU_WNF_STATE_NAME@@P6AJPEAU2@PEAX@Z33@Z @ 0x1C0091D10 (-MxSubscribeWnfStateChange@MxWnf@@SAJPEAPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAU_WNF_STATE_NAME@@P.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall FxPkgPnp::SleepStudyEvaluateParticipation(FxPkgPnp *this)
{
  bool v1; // zf
  NTSTATUS _a2; // ebx
  PVOID PoolWithTag; // rax
  int (__fastcall *v5)(_MX_WNF_SUBSCRIPTION_CONTEXT *, void *); // r8
  const void *_a1; // rax
  const void *v7; // rax
  const void *ObjectHandleUnchecked; // rax
  void *OutputBufferLength; // [rsp+28h] [rbp-19h]
  _UNICODE_STRING valueName; // [rsp+48h] [rbp+7h] BYREF
  _WNF_STATE_NAME wnfStateName; // [rsp+58h] [rbp+17h]
  _BYTE valueName_buffer[40]; // [rsp+60h] [rbp+1Fh] OVERLAPPED BYREF

  v1 = this->m_PowerPolicyMachine.m_Owner == 0LL;
  *(_WNF_STATE_NAME *)valueName_buffer = WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED;
  wnfStateName = (_WNF_STATE_NAME)&valueName_buffer[8];
  valueName.Length = 0;
  *(_OWORD *)&valueName_buffer[8] = *(_OWORD *)L"SleepstudyState";
  valueName.Buffer = (wchar_t *)2097182;
  *(_OWORD *)&valueName_buffer[24] = *(_OWORD *)L"dyState";
  if ( v1 || FxLibraryGlobals.SleepStudyDisabled == 1 )
    goto LABEL_12;
  FxPkgPnp::ReadRegistryS0Idle(this, (_UNICODE_STRING *)&valueName.Buffer, (bool *)&valueName);
  if ( LOBYTE(valueName.Length) )
  {
    _a2 = ZwPowerInformation(PlatformInformation, 0LL, 0, (char *)&valueName.Length + 1, 1u);
    if ( _a2 < 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x10u, WPP_FxPkgPnpKM_cpp_Traceguids, ObjectHandleUnchecked);
      goto $Done_64;
    }
    if ( HIBYTE(valueName.Length) )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x20uLL, 0x53535554u);
      if ( !PoolWithTag )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x11u, WPP_FxPkgPnpKM_cpp_Traceguids, _a1);
        goto LABEL_14;
      }
      *(_OWORD *)PoolWithTag = 0LL;
      *((_OWORD *)PoolWithTag + 1) = 0LL;
      this->m_SleepStudy = (_SLEEP_STUDY_INTERFACE *)PoolWithTag;
      _a2 = MxWnf::MxSubscribeWnfStateChange(
              (_MX_WNF_SUBSCRIPTION_CONTEXT **)PoolWithTag + 1,
              (_WNF_STATE_NAME *)valueName_buffer,
              v5,
              this,
              OutputBufferLength);
      if ( _a2 < 0 )
      {
        v7 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x12u, WPP_FxPkgPnpKM_cpp_Traceguids, v7, _a2);
      }
      else
      {
        FxPkgPnp::SleepStudyEvaluateDripsConstraint(this, 1u);
      }
$Done_64:
      if ( _a2 >= 0 )
        return;
      goto LABEL_14;
    }
LABEL_12:
    _a2 = -1073741637;
    goto $Done_64;
  }
LABEL_14:
  this->m_SleepStudyTrackReferences = 0;
}
