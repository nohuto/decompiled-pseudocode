/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180262230
 * Callers:
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802622E4 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@.c)
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802623B8 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 * Callees:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x1800466E0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180073BD4 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?CreateSubResourceBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x1802462BC (-CreateSubResourceBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x180262500 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::EnsureD2DBitmap(struct CD2DBitmap **this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  _QWORD *v6; // rsi
  CD2DBitmap *v7; // rcx
  int SubResourceBitmap; // eax
  __int64 v9; // rcx

  v2 = CDxHandleBitmapRealization::EnsureD2DBitmap((CDxHandleBitmapRealization *)this);
  v5 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v2, 0xB4u, 0LL);
  }
  else
  {
    v6 = this + 46;
    if ( !this[46] )
    {
      v7 = this[43];
      *v6 = 0LL;
      SubResourceBitmap = CD2DBitmap::CreateSubResourceBitmap(v7, v3, this + 46);
      v5 = SubResourceBitmap;
      if ( SubResourceBitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, SubResourceBitmap, 0xBEu, 0LL);
      else
        CD2DBitmapCache::InitializeCache(
          (CD2DBitmapCache *)(this + 47),
          (struct ID2DBitmapCacheSource *)((*v6 + 96LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*v6 >> 64)));
    }
  }
  if ( v5 < 0 )
    CDxHandleStereoBitmapRealization::ReleaseD2DBitmap((CDxHandleStereoBitmapRealization *)this);
  return (unsigned int)v5;
}
