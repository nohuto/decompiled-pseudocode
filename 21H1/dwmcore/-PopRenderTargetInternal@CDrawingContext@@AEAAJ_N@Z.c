/*
 * XREFs of ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006A748
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800300B0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006A6C4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18006BCD8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180190C9C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180033304 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18006A820 (-PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800BC434 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x1800C97C0 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopRenderTargetInternal(CDrawingContext *this, char a2)
{
  __int64 v2; // rbx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  struct IDeviceTarget **v8; // rcx
  struct IDeviceTarget *v10; // rax
  struct IDeviceTarget *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct IDeviceTarget *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 5);
  v14 = 0LL;
  wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(&v14);
  v5 = CD2DContext::PopTarget((CD2DContext *)(v2 + 16), (CDrawingContext *)((char *)this + 24), &v14);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xB7u, 0LL);
  if ( g_LockAndReadD2DTarget )
  {
    v13 = *((_QWORD *)this + 4) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 24LL))(v13, (char *)this + 24);
  }
  v8 = (struct IDeviceTarget **)((char *)this + 32);
  if ( a2 )
  {
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v8);
  }
  else
  {
    v10 = v14;
    v11 = *v8;
    v14 = 0LL;
    *v8 = v10;
    if ( v11 )
    {
      v12 = (__int64)v11 + *(int *)(*((_QWORD *)v11 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    CDrawingContext::UpdateRenderTargetInfo(this);
    --*((_DWORD *)this + 240);
  }
  *((_BYTE *)this + 5954) = 1;
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v14);
  return v7;
}
