/*
 * XREFs of ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x180090238
 * Callers:
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1800900A8 (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18019D554 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x1800902CC (-HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x180090520 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BCAF0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 */

__int64 __fastcall CWICBitmapWrapper::Create(struct IWICBitmapSource *a1, struct ID2DBitmapCacheSource **a2)
{
  CWICBitmapWrapper *v4; // rax
  __int64 v5; // rcx
  CWICBitmapWrapper *v6; // rbx
  CWICBitmapWrapper *v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi

  *a2 = 0LL;
  v4 = (CWICBitmapWrapper *)operator new(0x128uLL);
  v6 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x128uLL);
    v7 = CWICBitmapWrapper::CWICBitmapWrapper(v6);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    CMILCOMBase::InternalAddRef(v7);
    v8 = CWICBitmapWrapper::HrInit(v7, a1);
    v10 = v8;
    if ( v8 >= 0 )
    {
      *a2 = (CWICBitmapWrapper *)((char *)v7 + 232);
      return v10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1Bu, 0LL);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x19u, 0LL);
  }
  if ( v7 )
    CRenderTargetBitmap::Release(v7);
  return v10;
}
