/*
 * XREFs of ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C004D808
 * Callers:
 *     imp_WdfDeviceMiniportCreate @ 0x1C004CE50 (imp_WdfDeviceMiniportCreate.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0051FCC (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ??0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004D298 (--0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxDeviceBase::ConfigureConstraints(FxDeviceBase *this, _WDF_OBJECT_ATTRIBUTES *ObjectAttributes)
{
  unsigned int v2; // edi
  _WDF_EXECUTION_LEVEL m_ExecutionLevel; // ecx
  bool v5; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FX_POOL *p_FxPoolFrameworks; // rdx
  FX_POOL **v8; // rax
  FxCallbackLock *v9; // rax
  FxCallbackLock *v10; // r8
  FX_POOL **v11; // rax
  const void *ObjectHandleUnchecked; // rax
  int v13; // r8d
  ULONG Tag; // [rsp+20h] [rbp-28h]
  void *Caller; // [rsp+48h] [rbp+0h]
  _WDF_EXECUTION_LEVEL driverLevel; // [rsp+50h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE driverScope; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  driverLevel = WdfExecutionLevelInvalid;
  driverScope = WdfSynchronizationScopeInvalid;
  if ( ObjectAttributes )
  {
    this->m_ExecutionLevel = ObjectAttributes->ExecutionLevel;
    this->m_SynchronizationScope = ObjectAttributes->SynchronizationScope;
  }
  this->m_Driver->GetConstraints(&this->m_Driver->IFxHasCallbacks, &driverLevel, &driverScope);
  m_ExecutionLevel = this->m_ExecutionLevel;
  if ( m_ExecutionLevel == WdfExecutionLevelInheritFromParent )
  {
    m_ExecutionLevel = driverLevel;
    this->m_ExecutionLevel = driverLevel;
  }
  if ( this->m_SynchronizationScope == WdfSynchronizationScopeInheritFromParent )
    this->m_SynchronizationScope = driverScope;
  v5 = m_ExecutionLevel == WdfExecutionLevelPassive;
  m_Globals = this->m_Globals;
  p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
  Tag = m_Globals->Tag;
  if ( v5 )
  {
    v8 = FxPoolAllocator(m_Globals, p_FxPoolFrameworks, ExDefaultNonPagedPoolType, 0x70uLL, Tag, Caller);
    if ( v8 )
    {
      FxCallbackMutexLock::FxCallbackMutexLock((FxCallbackMutexLock *)v8, this->m_Globals);
      v10 = v9;
      goto LABEL_13;
    }
  }
  else
  {
    v11 = FxPoolAllocator(m_Globals, p_FxPoolFrameworks, ExDefaultNonPagedPoolType, 0x40uLL, Tag, Caller);
    v10 = (FxCallbackLock *)v11;
    if ( v11 )
    {
      v11[1] = (FX_POOL *)this->m_Globals;
      *v11 = (FX_POOL *)FxCallbackSpinLock::`vftable';
      v11[2] = 0LL;
      *((_DWORD *)v11 + 6) = 0;
      v11[4] = 0LL;
      v11[7] = 0LL;
      *((_BYTE *)v11 + 48) = 1;
      goto LABEL_13;
    }
  }
  v10 = 0LL;
LABEL_13:
  this->m_CallbackLockPtr = v10;
  if ( v10 )
  {
    v10->Initialize(v10, this);
    this->m_CallbackLockObjectPtr = this;
  }
  else
  {
    v2 = -1073741670;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(
      this->m_Globals,
      2u,
      v13 + 20,
      v13 + 10,
      WPP_FxDeviceBase_cpp_Traceguids,
      ObjectHandleUnchecked,
      0xC000009A);
  }
  return v2;
}
