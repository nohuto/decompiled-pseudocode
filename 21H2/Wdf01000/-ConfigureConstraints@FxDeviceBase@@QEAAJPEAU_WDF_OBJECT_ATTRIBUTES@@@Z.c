/*
 * XREFs of ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0024550
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023D98 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C0066F20 (imp_WdfDeviceMiniportCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ??0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00257C4 (--0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxDeviceBase::ConfigureConstraints(FxDeviceBase *this, _WDF_OBJECT_ATTRIBUTES *ObjectAttributes)
{
  unsigned int v2; // ebx
  _WDF_EXECUTION_LEVEL m_ExecutionLevel; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v6; // rax
  ULONG Tag; // r8d
  FX_POOL **v8; // rax
  FxCallbackLock *v9; // r8
  FX_POOL **v11; // rax
  FxCallbackLock *v12; // rax
  const void *_a1; // rax
  __m128i v14; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+58h] [rbp+8h]
  _WDF_EXECUTION_LEVEL driverLevel; // [rsp+60h] [rbp+10h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE driverScope; // [rsp+68h] [rbp+18h] BYREF

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
  m_Globals = this->m_Globals;
  v6 = retaddr;
  v14.m128i_i64[0] = 0LL;
  v14.m128i_i64[1] = 64LL;
  Tag = m_Globals->Tag;
  if ( m_ExecutionLevel == WdfExecutionLevelPassive )
  {
    if ( !m_Globals->FxPoolTrackingOn )
      v6 = 0LL;
    v11 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v14, 0x70uLL, Tag, v6);
    if ( v11 )
    {
      FxCallbackMutexLock::FxCallbackMutexLock((FxCallbackMutexLock *)v11, this->m_Globals);
      v9 = v12;
      goto LABEL_12;
    }
  }
  else
  {
    if ( !m_Globals->FxPoolTrackingOn )
      v6 = 0LL;
    v8 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v14, 0x40uLL, Tag, v6);
    v9 = (FxCallbackLock *)v8;
    if ( v8 )
    {
      v8[1] = (FX_POOL *)this->m_Globals;
      *v8 = (FX_POOL *)FxCallbackSpinLock::`vftable';
      v8[2] = 0LL;
      *((_DWORD *)v8 + 6) = 0;
      v8[4] = 0LL;
      v8[7] = 0LL;
      *((_BYTE *)v8 + 48) = 1;
      goto LABEL_12;
    }
  }
  v9 = 0LL;
LABEL_12:
  this->m_CallbackLockPtr = v9;
  if ( v9 )
  {
    v9->Initialize(v9, this);
    this->m_CallbackLockObjectPtr = this;
  }
  else
  {
    v2 = -1073741670;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0x14u, 0xAu, WPP_FxDeviceBase_cpp_Traceguids, _a1, 0xC000009A);
  }
  return v2;
}
