/*
 * XREFs of ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C0020408
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C0020104 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C0020390 (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022D70 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C00291B8 (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C008CE30 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxPoxInterface::CreateDevicePowerRequirementMachine(FxPoxInterface *this)
{
  FxPkgPnp *m_PkgPnp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v4; // rax
  FX_POOL **v5; // rax
  FxEventQueue *v6; // rax
  _FX_DRIVER_GLOBALS *v7; // rdx
  FxDevicePwrRequirementMachine *v8; // rdi
  int _a3; // ebx
  FxPkgPnp *v11; // rax
  _FX_DRIVER_GLOBALS *v12; // rbp
  const void *_a1; // rax
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  unsigned __int8 v16; // r11
  __int64 v17; // rdx
  const void *_a2; // rcx
  FxPkgPnp *v19; // rax
  __int64 v20; // r10
  unsigned int v21; // edx
  const void *ObjectHandleUnchecked; // rax
  __int64 v23; // rdx
  __int64 v24; // r10
  __m128i v25; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_PkgPnp = this->m_PkgPnp;
  v25.m128i_i64[0] = 0LL;
  v25.m128i_i64[1] = 64LL;
  m_Globals = m_PkgPnp->m_Globals;
  if ( m_Globals->FxPoolTrackingOn )
    v4 = retaddr;
  else
    v4 = 0LL;
  v5 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v25, 0xC8uLL, m_Globals->Tag, v4);
  if ( !v5
    || (FxDevicePwrRequirementMachine::FxDevicePwrRequirementMachine((FxDevicePwrRequirementMachine *)v5, this),
        (v8 = (FxDevicePwrRequirementMachine *)v6) == 0LL) )
  {
    _a3 = -1073741670;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qqd(
      *(_FX_DRIVER_GLOBALS **)(v24 + 16),
      2u,
      0xCu,
      0xAu,
      WPP_PoxInterface_cpp_Traceguids,
      ObjectHandleUnchecked,
      *(const void **)(v23 + 144),
      -1073741670);
    return (unsigned int)_a3;
  }
  _a3 = FxEventQueue::Initialize(v6, v7);
  if ( _a3 < 0 )
  {
    v19 = this->m_PkgPnp;
    v12 = v19->m_Globals;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v19->m_DeviceBase);
    _a2 = *(const void **)(v20 + 144);
    goto LABEL_12;
  }
  _a3 = FxThreadedEventQueue::Init(
          v8,
          this->m_PkgPnp,
          (void (__fastcall *)(FxPkgPnp *, FxPostProcessInfo *, void *))FxDevicePwrRequirementMachine::_ProcessEventInner,
          0LL);
  if ( _a3 < 0 )
  {
    v11 = this->m_PkgPnp;
    v12 = v11->m_Globals;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v11->m_DeviceBase);
    _a2 = *(const void **)(v17 + 144);
LABEL_12:
    WPP_IFR_SF_qqd(v12, v16, v14, v15, WPP_PoxInterface_cpp_Traceguids, _a1, _a2, _a3);
    FxWakeInterruptMachine::`scalar deleting destructor'(v8, v21);
    return (unsigned int)_a3;
  }
  this->m_DevicePowerRequirementMachine = v8;
  return 0;
}
