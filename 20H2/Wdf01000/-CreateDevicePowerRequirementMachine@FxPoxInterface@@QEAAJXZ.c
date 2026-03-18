/*
 * XREFs of ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C008BF20
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C008C114 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002F42C (WPP_IFR_SF_qid.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C0088780 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C008A4FC (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008A538 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C008C2FC (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 */

__int64 __fastcall FxPoxInterface::CreateDevicePowerRequirementMachine(FxPoxInterface *this)
{
  FX_POOL **v2; // rax
  _FX_DRIVER_GLOBALS *v3; // rdx
  FxDevicePwrRequirementMachine *v4; // rax
  FxDevicePwrRequirementMachine *v5; // rdi
  int _a3; // ebx
  const void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v11; // rdx
  __int64 v12; // r10
  unsigned __int16 v13; // r9
  void *Caller; // [rsp+48h] [rbp+0h]

  v2 = FxPoolAllocator(
         this->m_PkgPnp->m_Globals,
         &this->m_PkgPnp->m_Globals->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         0xC8uLL,
         this->m_PkgPnp->m_Globals->Tag,
         Caller);
  if ( v2 )
  {
    FxDevicePwrRequirementMachine::FxDevicePwrRequirementMachine((FxDevicePwrRequirementMachine *)v2, this);
    v5 = v4;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    _a3 = FxEventQueue::Initialize(v5, v3);
    if ( _a3 < 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
      v13 = 11;
    }
    else
    {
      _a3 = FxThreadedEventQueue::Init(
              v5,
              this->m_PkgPnp,
              (void (__fastcall *)(FxPkgPnp *, FxPostProcessInfo *, void *))FxDevicePwrRequirementMachine::_ProcessEventInner,
              0LL);
      if ( _a3 >= 0 )
      {
        this->m_DevicePowerRequirementMachine = v5;
        _a3 = 0;
        goto $exit_24;
      }
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
      v13 = 12;
    }
    WPP_IFR_SF_qid(
      *(_FX_DRIVER_GLOBALS **)(v12 + 16),
      2u,
      0xCu,
      v13,
      WPP_PoxInterface_cpp_Traceguids,
      ObjectHandleUnchecked,
      *(_QWORD *)(v11 + 144),
      _a3);
$exit_24:
    if ( _a3 >= 0 )
      return (unsigned int)_a3;
    goto LABEL_13;
  }
  _a3 = -1073741670;
  v7 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
  WPP_IFR_SF_qid(
    *(_FX_DRIVER_GLOBALS **)(v9 + 16),
    2u,
    0xCu,
    0xAu,
    WPP_PoxInterface_cpp_Traceguids,
    v7,
    *(_QWORD *)(v8 + 144),
    -1073741670);
LABEL_13:
  if ( v5 )
    FxWakeInterruptMachine::`scalar deleting destructor'(v5);
  return (unsigned int)_a3;
}
