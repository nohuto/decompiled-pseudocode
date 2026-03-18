/*
 * XREFs of ?ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z @ 0x1C0075374
 * Callers:
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C00759A4 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qDDd @ 0x1C00494B0 (WPP_IFR_SF_qDDd.c)
 */

__int64 __fastcall FxIoQueue::ConfigureConstraints(
        FxIoQueue *this,
        _WDF_OBJECT_ATTRIBUTES *ObjectAttributes,
        FxDriver *Caller)
{
  FxCallbackSpinLock *p_m_CallbackSpinLock; // r15
  FxCallbackLock *m_CallbackLockPtr; // rdi
  FxCallbackMutexLock *p_m_CallbackMutexLock; // r14
  _WDF_EXECUTION_LEVEL m_ExecutionLevel; // ecx
  bool v10; // si
  _WDF_EXECUTION_LEVEL v11; // edx
  _WDF_SYNCHRONIZATION_SCOPE m_SynchronizationScope; // ecx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v14; // r10
  __int64 result; // rax
  const void *ObjectHandleUnchecked; // rax
  unsigned int v17; // edx
  unsigned int v18; // r8d
  _WDF_EXECUTION_LEVEL ParentLevel; // [rsp+80h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE ParentScope; // [rsp+88h] [rbp+10h] BYREF

  p_m_CallbackSpinLock = &this->m_CallbackSpinLock;
  m_CallbackLockPtr = 0LL;
  ParentLevel = WdfExecutionLevelInvalid;
  ParentScope = WdfSynchronizationScopeInvalid;
  this->m_CallbackSpinLock.Initialize(&this->m_CallbackSpinLock, this);
  p_m_CallbackMutexLock = &this->m_CallbackMutexLock;
  this->m_CallbackMutexLock.Initialize(&this->m_CallbackMutexLock, this);
  if ( ObjectAttributes )
  {
    this->m_ExecutionLevel = ObjectAttributes->ExecutionLevel;
    this->m_SynchronizationScope = ObjectAttributes->SynchronizationScope;
  }
  this->m_DeviceBase->GetConstraints(&this->m_DeviceBase->IFxHasCallbacks, &ParentLevel, &ParentScope);
  m_ExecutionLevel = this->m_ExecutionLevel;
  v10 = 1;
  v11 = ParentLevel;
  if ( m_ExecutionLevel == WdfExecutionLevelInheritFromParent )
  {
    this->m_ExecutionLevel = ParentLevel;
    m_ExecutionLevel = v11;
  }
  if ( this->m_SynchronizationScope == WdfSynchronizationScopeInheritFromParent )
    this->m_SynchronizationScope = ParentScope;
  if ( m_ExecutionLevel == WdfExecutionLevelPassive )
  {
    this->m_ObjectFlags |= 0x11u;
    this->m_PassiveLevel = 1;
  }
  else
  {
    p_m_CallbackMutexLock = (FxCallbackMutexLock *)p_m_CallbackSpinLock;
  }
  this->m_CallbackLockPtr = p_m_CallbackMutexLock;
  this->m_CallbackLockObjectPtr = this;
  m_SynchronizationScope = this->m_SynchronizationScope;
  if ( m_SynchronizationScope == WdfSynchronizationScopeDevice )
  {
    if ( Caller && Caller != this->m_Globals->Driver )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qL(v14, 2u, 0xDu, 0x14u, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC000000D);
      return 3221225485LL;
    }
    if ( v11 != this->m_ExecutionLevel )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qDDd(this->m_Globals, v17, 0xDu, 0x15u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, v17, v18);
      return 3221225485LL;
    }
    this->m_CallbackLockPtr = this->m_DeviceBase->GetCallbackLockPtr(
                                &this->m_DeviceBase->IFxHasCallbacks,
                                &this->m_CallbackLockObjectPtr);
  }
  else
  {
    v10 = m_SynchronizationScope == WdfSynchronizationScopeQueue;
  }
  if ( v10 )
    m_CallbackLockPtr = this->m_CallbackLockPtr;
  this->m_IoDefault.m_CallbackLock = m_CallbackLockPtr;
  result = 0LL;
  this->m_IoStop.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoResume.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoRead.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoWrite.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoDeviceControl.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoInternalDeviceControl.m_CallbackLock = m_CallbackLockPtr;
  this->m_PurgeComplete.m_CallbackLock = m_CallbackLockPtr;
  this->m_ReadyNotify.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoCanceledOnQueue.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoCancelCallbackLockPtr = m_CallbackLockPtr;
  return result;
}
