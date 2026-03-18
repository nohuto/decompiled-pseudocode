/*
 * XREFs of ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1802631D4
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x18008DB84 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x1801C5984 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     ??0CColorKeyBitmapRealization@@QEAA@XZ @ 0x180263060 (--0CColorKeyBitmapRealization@@QEAA@XZ.c)
 *     ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x180263688 (-Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
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
