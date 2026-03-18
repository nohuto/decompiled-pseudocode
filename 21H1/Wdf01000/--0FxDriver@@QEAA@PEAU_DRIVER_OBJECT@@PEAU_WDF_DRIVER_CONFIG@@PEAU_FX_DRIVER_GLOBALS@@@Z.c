/*
 * XREFs of ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00538C8
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C004BE30 (imp_WdfDriverCreate.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0014338 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C001D440 (memmove.c)
 *     ??0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004D218 (--0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxDriver::FxDriver(
        FxDriver *this,
        _DRIVER_OBJECT *ArgDriverObject,
        _WDF_DRIVER_CONFIG *DriverConfig,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  size_t Size; // r8

  FxNonPagedObject::FxNonPagedObject(this, 0x1001u, 0x168u, FxDriverGlobals);
  this->m_DriverObject.m_DriverObject = ArgDriverObject;
  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)FxDriver::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDriver::`vftable'{for `IFxHasCallbacks'};
  this->m_DriverDeviceAdd.m_CallbackLock = 0LL;
  this->m_DriverDeviceAdd.Method = 0LL;
  FxCallbackMutexLock::FxCallbackMutexLock(&this->m_CallbackMutexLock, FxDriverGlobals);
  this->m_DriverUnload.Method = 0LL;
  RtlInitUnicodeString(&this->m_RegistryPath, 0LL);
  this->m_ExecutionLevel = WdfExecutionLevelDispatch;
  this->m_SynchronizationScope = WdfSynchronizationScopeNone;
  Size = 32LL;
  this->m_CallbackLockPtr = 0LL;
  this->m_CallbackLockObjectPtr = 0LL;
  this->m_DisposeList = 0LL;
  *(_OWORD *)&this->m_Config.Size = 0LL;
  *(_OWORD *)&this->m_Config.EvtDriverUnload = 0LL;
  this->m_Config.Size = 32;
  this->m_Config.EvtDriverDeviceAdd = 0LL;
  if ( DriverConfig->Size <= 0x20 )
    Size = DriverConfig->Size;
  memmove(&this->m_Config, DriverConfig, Size);
  this->m_DebuggerConnected = 0;
}
