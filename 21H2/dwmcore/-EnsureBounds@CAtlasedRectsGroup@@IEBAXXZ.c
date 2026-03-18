/*
 * XREFs of ?EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ @ 0x1800D3948
 * Callers:
 *     ?GetBounds@CAtlasedRectsGroup@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D3910 (-GetBounds@CAtlasedRectsGroup@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBounds@CAtlasedRectsMesh@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D3B98 (-GetBounds@CAtlasedRectsMesh@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CAtlasedRectsGroup::EnsureBounds(CAtlasedRectsGroup *this)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 112) )
  {
    *((_DWORD *)this + 27) = 0;
    v2 = 0LL;
    *((_DWORD *)this + 26) = 0;
    *((_DWORD *)this + 25) = 0;
    for ( *((_DWORD *)this + 24) = 0; (unsigned int)v2 < *((_DWORD *)this + 20); v2 = (unsigned int)(v2 + 1) )
    {
      v3 = *((_QWORD *)this + 11);
      v4 = 0LL;
      CAtlasedRectsMesh::GetBounds(*(_QWORD *)(v3 + 8 * v2), &v4);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 24, (float *)&v4);
    }
    *((_BYTE *)this + 112) = 0;
  }
}
