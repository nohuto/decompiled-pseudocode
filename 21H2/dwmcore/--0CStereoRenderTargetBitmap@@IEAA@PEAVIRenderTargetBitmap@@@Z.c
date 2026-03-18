/*
 * XREFs of ??0CStereoRenderTargetBitmap@@IEAA@PEAVIRenderTargetBitmap@@@Z @ 0x1802A7410
 * Callers:
 *     ?Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802A772C (-Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap.c)
 * Callees:
 *     ??0IRenderTargetBitmap@@QEAA@XZ @ 0x1800671DC (--0IRenderTargetBitmap@@QEAA@XZ.c)
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x180067244 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 *     ??0?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIRenderTargetBitmap@@@Z @ 0x1800BAB20 (--0-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIRenderTargetBit.c)
 */

CStereoRenderTargetBitmap *__fastcall CStereoRenderTargetBitmap::CStereoRenderTargetBitmap(
        CStereoRenderTargetBitmap *this,
        struct IRenderTargetBitmap *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *((_QWORD *)this + 2) = &CStereoRenderTargetBitmap::`vbtable'{for `CRenderTargetBitmap'};
  *((_QWORD *)this + 11) = &CStereoRenderTargetBitmap::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 16) = &CStereoRenderTargetBitmap::`vbtable'{for `IRenderTargetBitmap's `CRenderTargetBitmap'};
  *((_QWORD *)this + 20) = &CStereoRenderTargetBitmap::`vbtable'{for `IStereoRenderTargetBitmap'};
  *((_QWORD *)this + 28) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 31) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 34) = &CStereoRenderTargetBitmap::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 37) = &CStereoRenderTargetBitmap::`vbtable'{for `IRenderTargetBitmap's `IStereoRenderTargetBitmap'};
  IRenderTargetBitmap::IRenderTargetBitmap((CStereoRenderTargetBitmap *)((char *)this + 288));
  CRenderTargetBitmap::CRenderTargetBitmap(this, 0LL, 0);
  *((_QWORD *)this + 19) = &IYUVSwapChainRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 20) + 4LL) + 160) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 20) + 8LL) + 160) = &ILegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 20) + 12LL) + 160) = &IYUVSwapChainRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 20) + 16LL) + 160) = &IStereoRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 20) + 20LL) + 160) = &Windows::Foundation::Collections::IMapView<_GUID,IInspectable *>::`vftable';
  *(_QWORD *)this = &CStereoRenderTargetBitmap::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 10) = &CStereoRenderTargetBitmap::`vftable'{for `CRenderTargetBitmap'};
  *((_QWORD *)this + 15) = &CStereoRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap's `CRenderTargetBitmap'};
  *((_QWORD *)this + 19) = &CStereoRenderTargetBitmap::`vftable'{for `IStereoRenderTargetBitmap'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CStereoRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CStereoRenderTargetBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CStereoRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CStereoRenderTargetBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CStereoRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 24LL) + 16) = &CStereoRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap's `IStereoRenderTargetBitmap'};
  v4 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 168;
  v5 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 184;
  v6 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 200;
  v7 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v7 + 12) = v7 - 224;
  v8 = *(int *)(*((_QWORD *)this + 2) + 20LL);
  *(_DWORD *)((char *)this + v8 + 12) = v8 - 248;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 24LL) + 12) = *(_DWORD *)(*((_QWORD *)this + 2) + 24LL)
                                                                          - 272;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
    (_QWORD *)this + 21,
    (__int64)a2);
  return this;
}
