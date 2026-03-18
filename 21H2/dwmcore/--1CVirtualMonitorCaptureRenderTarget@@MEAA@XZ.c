/*
 * XREFs of ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x1801C5AD0
 * Callers:
 *     ??_ECVirtualMonitorCaptureRenderTarget@@MEAAPEAXI@Z @ 0x18019FAE0 (--_ECVirtualMonitorCaptureRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVirtualMonitorCaptureRenderTarget::~CVirtualMonitorCaptureRenderTarget(
        CVirtualMonitorCaptureRenderTarget *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CResource *v6; // rcx

  *(_QWORD *)this = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `COffScreenRenderTarget'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 233) = &CCaptureRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  v2 = (__int64 *)((char *)this + 2120);
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 2064;
  v4 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v4 + 76) = v4 - 2080;
  v5 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  *(_DWORD *)((char *)this + v5 + 76) = v5 - 2104;
  if ( *v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 16LL))(*v2);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(v2);
  v6 = (CResource *)*((_QWORD *)this + 257);
  if ( v6 )
    CResource::InternalRelease(v6);
  CCaptureRenderTarget::~CCaptureRenderTarget(this);
}
