/*
 * XREFs of ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18016A204
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2008 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CVirtualMonitorCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18016B68C (--0CVirtualMonitorCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x18018556C (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CCaptureRenderTarget *__fastcall CCaptureRenderTarget::CCaptureRenderTarget(
        CCaptureRenderTarget *this,
        struct CComposition *a2,
        int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  CCaptureRenderTarget *result; // rax
  const char *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  if ( a3 )
  {
    *((_QWORD *)this + 9) = &CCaptureRenderTarget::`vbtable'{for `IVisualTreeClient'};
    *((_QWORD *)this + 265) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 268) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 267) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
    *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 268) + 4LL) + 2144) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  }
  v9 = 26;
  v8 = "DWM Rendertarget (capture)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v8);
  *(_QWORD *)this = &CCaptureRenderTarget::`vftable'{for `COffScreenRenderTarget'};
  *((_QWORD *)this + 8) = &CCaptureRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 235) = &CCaptureRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CCaptureRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CCaptureRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  v4 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v4 + 68) = v4 - 2024;
  v5 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v5 + 68) = v5 - 2040;
  v6 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  result = this;
  *(_DWORD *)((char *)this + v6 + 68) = v6 - 2064;
  *((_QWORD *)this + 236) = 0LL;
  *((_QWORD *)this + 240) = 0LL;
  *((_QWORD *)this + 241) = 0LL;
  *((_QWORD *)this + 242) = 0LL;
  *((_QWORD *)this + 244) = 0LL;
  *((_QWORD *)this + 246) = 0LL;
  *((_QWORD *)this + 247) = 0LL;
  *((_QWORD *)this + 248) = 0LL;
  *((_QWORD *)this + 249) = 0LL;
  *((_QWORD *)this + 250) = 0LL;
  *((_QWORD *)this + 251) = 0LL;
  *((_QWORD *)this + 252) = 0LL;
  *((_QWORD *)this + 253) = 0LL;
  *((_QWORD *)this + 254) = 0LL;
  *((_QWORD *)this + 255) = 0LL;
  *((_QWORD *)this + 256) = 0LL;
  *((_QWORD *)this + 257) = 0LL;
  *((_QWORD *)this + 258) = 0LL;
  *((_QWORD *)this + 259) = 0LL;
  *((_BYTE *)this + 1913) = 1;
  *((_BYTE *)this + 128) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 486) = -1;
  *((_DWORD *)this + 442) = 0;
  return result;
}
