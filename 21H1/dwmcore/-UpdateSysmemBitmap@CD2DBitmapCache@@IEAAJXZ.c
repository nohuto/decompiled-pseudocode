/*
 * XREFs of ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180028248
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18003387C (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 * Callees:
 *     ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800282C4 (-Update@CSecondarySysmemBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800339A0 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateSysmemBitmap(CD2DBitmapCache *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // ecx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 5) + 40LL;
  v3 = 0;
  v7 = 0LL;
  if ( !(unsigned __int8)CSecondaryBitmap::IsRegionValid(v2, 0LL, &v7) )
  {
    v4 = CSecondarySysmemBitmap::Update(*((_QWORD *)this + 5), &v7, *((_QWORD *)this + 3));
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x13Cu, 0LL);
  }
  return v3;
}
