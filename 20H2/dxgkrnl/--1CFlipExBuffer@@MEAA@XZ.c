/*
 * XREFs of ??1CFlipExBuffer@@MEAA@XZ @ 0x1C000EC14
 * Callers:
 *     ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C000EBD0 (--_GCFlipExBuffer@@MEAAPEAXI@Z.c)
 *     ??_GCCompositionSwapchainBuffer@@MEAAPEAXI@Z @ 0x1C00662B0 (--_GCCompositionSwapchainBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C0011ADC (--1CCompositionBuffer@@UEAA@XZ.c)
 *     ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x1C0011B78 (-ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C0011BA0 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C001D444 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C016C534 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipExBuffer::~CFlipExBuffer(CFlipExBuffer *this)
{
  bool v1; // zf
  void *v3; // rcx
  void *v4; // rcx

  v1 = *((_DWORD *)this + 88) == 0;
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  if ( !v1 )
    CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, 0LL);
  if ( *((_QWORD *)this + 40) && *((_QWORD *)this + 39) )
    DxgkImmediateSignalSynchronizationObjectByReference();
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  CFlipExBuffer::ReleaseHDR10MetaData(this);
  v3 = (void *)*((_QWORD *)this + 37);
  if ( v3 )
    ObfDereferenceObject(v3);
  v4 = (void *)*((_QWORD *)this + 39);
  if ( v4 )
    ObfDereferenceObject(v4);
  CCompositionBuffer::~CCompositionBuffer(this);
}
