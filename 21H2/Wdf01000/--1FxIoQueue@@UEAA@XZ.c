/*
 * XREFs of ??1FxIoQueue@@UEAA@XZ @ 0x1C0081978
 * Callers:
 *     ??_EFxIoQueue@@UEAAPEAXI@Z @ 0x1C00819E0 (--_EFxIoQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0006180 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x1C00347AC (--1FxCallbackSpinLock@@UEAA@XZ.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C00673F4 (--1FxCallbackMutexLock@@UEAA@XZ.c)
 */

void __fastcall FxIoQueue::~FxIoQueue(FxIoQueue *this)
{
  bool v1; // zf
  unsigned int v3; // edx
  unsigned int v4; // edx

  v1 = this->m_PkgIo == 0LL;
  this->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxIoQueue::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxIoQueue::`vftable'{for `IFxHasCallbacks'};
  if ( !v1 )
    this->m_PkgIo = 0LL;
  FxCallbackMutexLock::~FxCallbackMutexLock(&this->m_CallbackMutexLock);
  FxCallbackSpinLock::~FxCallbackSpinLock(&this->m_CallbackSpinLock, v3);
  FxNonPagedObject::~FxNonPagedObject(this, v4);
}
