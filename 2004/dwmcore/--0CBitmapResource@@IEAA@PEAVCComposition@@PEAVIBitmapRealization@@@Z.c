/*
 * XREFs of ??0CBitmapResource@@IEAA@PEAVCComposition@@PEAVIBitmapRealization@@@Z @ 0x18003652C
 * Callers:
 *     ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x18001DB6C (-Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealization@@@Z @ 0x18004B064 (--0-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealizatio.c)
 */

CBitmapResource *__fastcall CBitmapResource::CBitmapResource(
        CBitmapResource *this,
        struct CComposition *a2,
        struct IBitmapRealization *a3)
{
  __int64 v4; // rcx

  *((_QWORD *)this + 7) = &CBitmapResource::`vbtable'{for `CImageSource'};
  *((_QWORD *)this + 13) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 12) = &ISpriteImage::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 13) + 4LL) + 104) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CImageSource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &ISpriteImage::`vftable'{for `IPixelFormat'};
  *(_QWORD *)this = &CBitmapResource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CBitmapResource::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CBitmapResource::`vftable'{for `IPixelFormat'};
  v4 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v4 + 52) = v4 - 24;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 52) = *(_DWORD *)(*((_QWORD *)this + 7) + 8LL) - 40;
  wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
    (char *)this + 64,
    a3);
  return this;
}
