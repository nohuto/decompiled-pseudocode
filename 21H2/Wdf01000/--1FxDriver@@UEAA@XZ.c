/*
 * XREFs of ??1FxDriver@@UEAA@XZ @ 0x1C0069CE8
 * Callers:
 *     ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C0069DC0 (--_EFxDriver@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0006180 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?IsDisposed@FxObject@@QEAAEXZ @ 0x1C002BB80 (-IsDisposed@FxObject@@QEAAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C00673F4 (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDriver::~FxDriver(FxDriver *this)
{
  const void *_a2; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  wchar_t *Buffer; // rcx
  FxDisposeList *m_DisposeList; // rcx
  unsigned int v6; // edx

  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)FxDriver::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDriver::`vftable'{for `IFxHasCallbacks'};
  if ( !FxObject::IsDisposed(this) )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(this->m_Globals, 1u, 0x11u, 0xAu, WPP_FxDriver_cpp_Traceguids, this, _a2);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, ObjectHandleUnchecked, (unsigned __int64)this);
  }
  Buffer = this->m_RegistryPath.Buffer;
  if ( Buffer )
  {
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    this->m_ServiceName = 0LL;
  }
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    m_DisposeList->DeleteObject(m_DisposeList);
  FxCallbackMutexLock::~FxCallbackMutexLock(&this->m_CallbackMutexLock);
  FxNonPagedObject::~FxNonPagedObject(this, v6);
}
