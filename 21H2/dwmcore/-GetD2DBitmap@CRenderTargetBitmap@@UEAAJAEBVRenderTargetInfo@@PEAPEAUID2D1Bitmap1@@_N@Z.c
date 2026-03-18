/*
 * XREFs of ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180018E9C
 * Callers:
 *     ?GetD2DBitmap@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18010BCD0 (-GetD2DBitmap@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18010CE10 (-GetD2DBitmap@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18010D1B0 (-GetD2DBitmap@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@.c)
 *     ?GetD2DBitmap@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802A3750 (-GetD2DBitmap@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802A3770 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID.c)
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802A56EC (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@.c)
 * Callees:
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180018F24 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z @ 0x180018FD4 (-ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetD2DBitmap(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  CD2DBitmapCache *v4; // r14
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // r8
  unsigned int v12; // ebx
  int CachedBitmap; // eax
  unsigned int v14; // ecx
  int v16; // eax
  unsigned int v17; // ecx

  *a3 = 0LL;
  v4 = (CRenderTargetBitmap *)((char *)this - 240);
  v9 = CRenderTargetBitmap::ValidateRenderTargetInfo((CRenderTargetBitmap *)((char *)this - 240), a2);
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xA3u, 0LL);
  }
  else if ( *((_BYTE *)this - 96) )
  {
    LOBYTE(v11) = a4;
    v16 = (*(__int64 (__fastcall **)(char *, struct ID2D1Bitmap1 **, __int64))(*((_QWORD *)this - 15) + 72LL))(
            (char *)this - 120,
            a3,
            v11);
    v12 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xADu, 0LL);
  }
  else
  {
    CachedBitmap = CD2DBitmapCache::GetCachedBitmap(v4, a2, a3, a4);
    v12 = CachedBitmap;
    if ( CachedBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, CachedBitmap, 0xA9u, 0LL);
  }
  return v12;
}
