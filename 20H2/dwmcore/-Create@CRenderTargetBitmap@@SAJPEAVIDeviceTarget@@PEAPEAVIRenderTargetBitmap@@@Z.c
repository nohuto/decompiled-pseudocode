/*
 * XREFs of ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18004FA2C
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006BC74 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18023BFB8 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 * Callees:
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x18002E694 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z @ 0x18004DB84 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18006C61C (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 */

__int64 __fastcall CRenderTargetBitmap::Create(struct IDeviceTarget *a1, struct IRenderTargetBitmap **a2)
{
  unsigned int v3; // edi
  CRenderTargetBitmap *v5; // rax
  unsigned int v6; // ecx
  CRenderTargetBitmap *v7; // rbx
  CRenderTargetBitmap *v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v9 = 0LL;
  v5 = (CRenderTargetBitmap *)DefaultHeap::Alloc(0x100uLL);
  if ( v5 )
    v5 = CRenderTargetBitmap::CRenderTargetBitmap(v5, 0);
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((__int64 *)&v9, (__int64)v5);
  v7 = v9;
  if ( v9 )
  {
    CRenderTargetBitmap::Initialize(v9, a1);
    *a2 = (struct IRenderTargetBitmap *)(((unsigned __int64)v7 + 120) & -(__int64)(v7 != 0LL));
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x16u, 0LL);
  }
  return v3;
}
