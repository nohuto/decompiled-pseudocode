/*
 * XREFs of ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x18002B4D4
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18002B328 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 * Callees:
 *     ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x18002B5B0 (-Initialize@CSecondaryD2DBitmap@@MEAAJXZ.c)
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x18002B6A8 (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 *     ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x18002B6E8 (--0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        int a6,
        int a7,
        CSecondaryD2DBitmap *a8)
{
  CSecondaryD2DBitmap *v8; // rsi
  void *v13; // rax
  unsigned int v14; // ecx
  CRenderTargetBitmap *v15; // rdi
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx

  v8 = a8;
  a8 = 0LL;
  *(_QWORD *)v8 = 0LL;
  v13 = DefaultHeap::Alloc(0x1C0uLL);
  if ( v13 )
    v13 = (void *)CSecondaryD2DBitmap::CSecondaryD2DBitmap(v13, a1, a2, a3, a4, a5, a6, a7);
  wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=(&a8, v13);
  v15 = a8;
  if ( a8 )
  {
    v16 = CSecondaryD2DBitmap::Initialize(a8);
    v18 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x24u, 0LL);
      CRenderTargetBitmap::Release(v15);
    }
    else
    {
      *(_QWORD *)v8 = v15;
    }
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x22u, 0LL);
  }
  return v18;
}
