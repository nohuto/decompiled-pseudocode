/*
 * XREFs of ??1CFlipExBuffer@@MEAA@XZ @ 0x1C00044C4
 * Callers:
 *     ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C00043F0 (--_GCFlipExBuffer@@MEAAPEAXI@Z.c)
 *     ??_GCCompositionSwapchainBuffer@@UEAAPEAXI@Z @ 0x1C0082E50 (--_GCCompositionSwapchainBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C0004434 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C0004478 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x1C000449C (-ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ.c)
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C0007EF8 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C0008C84 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C019AB18 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipExBuffer::~CFlipExBuffer(CFlipExBuffer *this)
{
  bool v1; // zf
  void *v3; // rcx
  void *v4; // rcx

  v1 = *((_DWORD *)this + 96) == 0;
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  if ( !v1 )
    CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, 0LL);
  if ( *((_QWORD *)this + 44) && *((_QWORD *)this + 43) )
    DxgkImmediateSignalSynchronizationObjectByReference();
  CFlipExBuffer::DisableCascadedSignaling(this);
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  CFlipExBuffer::ReleaseHDR10MetaData(this);
  v3 = (void *)*((_QWORD *)this + 41);
  if ( v3 )
    ObfDereferenceObject(v3);
  v4 = (void *)*((_QWORD *)this + 43);
  if ( v4 )
    ObfDereferenceObject(v4);
  CCompositionBuffer::~CCompositionBuffer(this);
}
