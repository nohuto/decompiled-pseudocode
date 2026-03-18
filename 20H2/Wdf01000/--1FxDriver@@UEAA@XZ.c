/*
 * XREFs of ??1FxDriver@@UEAA@XZ @ 0x1C0053100
 * Callers:
 *     ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C00531D0 (--_EFxDriver@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00142D0 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C004CB40 (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     ?IsDisposed@FxObject@@QEAAEXZ @ 0x1C0051B00 (-IsDisposed@FxObject@@QEAAEXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDriver::~FxDriver(FxDriver *this)
{
  const void *_a2; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  wchar_t *Buffer; // rcx
  FxDisposeList *m_DisposeList; // rcx
  unsigned int v6; // edx
  unsigned int v7; // r8d

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
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    m_DisposeList->DeleteObject(m_DisposeList);
  FxCallbackMutexLock::~FxCallbackMutexLock(&this->m_CallbackMutexLock);
  FxNonPagedObject::~FxNonPagedObject(this, v6, v7);
}
