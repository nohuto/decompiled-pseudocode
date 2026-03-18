/*
 * XREFs of ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x180260764
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x1800CDF8C (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x1801C3064 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BCAF0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     ??0CColorKeyBitmapRealization@@QEAA@XZ @ 0x1802605F0 (--0CColorKeyBitmapRealization@@QEAA@XZ.c)
 *     ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x180260C18 (-Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::Create(
        struct IBitmapRealization *a1,
        const struct CColorKey *a2,
        struct IBitmapRealization **a3)
{
  CColorKeyBitmapRealization *v6; // rax
  __int64 v7; // rcx
  CColorKeyBitmapRealization *v8; // rbx
  CColorKeyBitmapRealization *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi

  *a3 = 0LL;
  v6 = (CColorKeyBitmapRealization *)operator new(0xA8uLL);
  v8 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0xA8uLL);
    v9 = CColorKeyBitmapRealization::CColorKeyBitmapRealization(v8);
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    CMILCOMBase::InternalAddRef(v9);
    v10 = CColorKeyBitmapRealization::Initialize(v9, a1, a2);
    v12 = v10;
    if ( v10 >= 0 )
    {
      *a3 = (CColorKeyBitmapRealization *)((char *)v9 + *(int *)(*((_QWORD *)v9 + 2) + 16LL) + 16);
      return v12;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x19u, 0LL);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  if ( v9 )
    CRenderTargetBitmap::Release(v9);
  return v12;
}
