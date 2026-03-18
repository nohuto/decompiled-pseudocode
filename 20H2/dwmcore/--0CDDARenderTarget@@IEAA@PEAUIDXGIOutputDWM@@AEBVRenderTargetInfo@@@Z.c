/*
 * XREFs of ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1800E9998
 * Callers:
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1800E9B88 (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV-$TMilRect_@HUtagRECT@@UM.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800330FC (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18004B4A0 (--0COcclusionContext@@QEAA@XZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x18006B420 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

CDDARenderTarget *__fastcall CDDARenderTarget::CDDARenderTarget(
        CDDARenderTarget *this,
        struct IDXGIOutputDWM *a2,
        const struct RenderTargetInfo *a3)
{
  struct CComposition *v4; // rdx
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  bool IsHDR; // al
  BOOL v12; // edx
  bool v13; // cf
  CDDARenderTarget *result; // rax

  *((_QWORD *)this + 9) = &CDDARenderTarget::`vbtable'{for `IVisualTreeClient'};
  v4 = g_pComposition;
  *((_QWORD *)this + 241) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 244) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 243) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 244) + 4LL) + 1952) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, v4);
  *((_QWORD *)this + 8) = &CDDARenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 17) = &CDDARenderTarget::`vftable'{for `IDDATarget'};
  v7 = *((_QWORD *)this + 9);
  *(_QWORD *)this = &CDDARenderTarget::`vftable'{for `CRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(v7 + 4) + 72) = &CDDARenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CDDARenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CDDARenderTarget::`vftable'{for `IRenderTarget'};
  v8 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v8 + 68) = v8 - 1832;
  v9 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v9 + 68) = v9 - 1848;
  v10 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  *(_DWORD *)((char *)this + v10 + 68) = v10 - 1872;
  *((_QWORD *)this + 18) = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 1;
  *(_QWORD *)((char *)this + 188) = 0LL;
  *((_DWORD *)this + 49) = DisplayId::None;
  *((_DWORD *)this + 66) = 0;
  *(_OWORD *)((char *)this + 268) = *(_OWORD *)a3;
  *(_QWORD *)((char *)this + 284) = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 37) = 0LL;
  COcclusionContext::COcclusionContext((CDDARenderTarget *)((char *)this + 304));
  *((_WORD *)this + 944) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_BYTE *)this + 288) = 0;
  IsHDR = RenderTargetInfo::IsHDR((CDDARenderTarget *)((char *)this + 268));
  v12 = IsHDR;
  v13 = IsHDR;
  result = this;
  *((_DWORD *)this + 22) = v13 ? 10 : 87;
  *((_DWORD *)this + 24) = v12;
  *((_DWORD *)this + 23) = 3;
  return result;
}
