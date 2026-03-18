/*
 * XREFs of ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18003387C
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x1800335F0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 * Callees:
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180028248 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18002853C (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180031184 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800339A0 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateCachedBitmap(__int64 **this, __int64 a2, CSecondaryD2DBitmap *a3)
{
  unsigned int v6; // ebx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int updated; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  CRenderTargetBitmap *v16; // rcx
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  v17 = 0LL;
  if ( !(unsigned __int8)CSecondaryBitmap::IsRegionValid((char *)a3 + 248, a2, &v17) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*this[3] + 40))(this[3]) )
    {
      v8 = CSecondaryD2DBitmap::Update(a3, (const struct MilRectU *)&v17, this[3]);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x107u, 0LL);
    }
    else
    {
      v10 = CD2DBitmapCache::EnsureSysmemBitmap((CD2DBitmapCache *)this);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x10Bu, 0LL);
      }
      else if ( (unsigned __int8)CSecondaryBitmap::IsRegionValid(this[5] + 5, a2, 0LL)
             || (updated = CD2DBitmapCache::UpdateSysmemBitmap((CD2DBitmapCache *)this), v6 = updated, updated >= 0) )
      {
        v14 = CSecondaryD2DBitmap::Update(
                a3,
                (const struct MilRectU *)&v17,
                (__int64 *)((unsigned __int64)(this[5] + 2) & -(__int64)(this[5] != 0LL)));
        v6 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x113u, 0LL);
        }
        else if ( *((_BYTE *)this + 72) )
        {
          v16 = (CRenderTargetBitmap *)this[5];
          this[5] = 0LL;
          if ( v16 )
            CRenderTargetBitmap::Release(v16);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, updated, 0x10Fu, 0LL);
      }
    }
  }
  return v6;
}
