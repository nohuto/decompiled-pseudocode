/*
 * XREFs of ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1800C4E40
 * Callers:
 *     ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800C4DA0 (-Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006BE00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

bool __fastcall CAtlasedRectsGroup::IsEmptyDrawing(CAtlasedRectsGroup *this)
{
  __int64 v1; // r9
  CAtlasedRectsGroup *v2; // r10
  unsigned int v4; // edi
  __int64 v5; // rbx
  float *v6; // rcx
  unsigned int v7; // esi
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = this;
  if ( *((_BYTE *)this + 104) )
  {
    *((_QWORD *)this + 12) = 0LL;
    v4 = 0;
    *((_QWORD *)this + 11) = 0LL;
    if ( *((_DWORD *)this + 18) )
    {
      do
      {
        v5 = *(_QWORD *)(*((_QWORD *)v2 + 10) + 8LL * v4);
        if ( *(_BYTE *)(v5 + 128) != (_BYTE)v1 )
        {
          v6 = (float *)(v5 + 112);
          v7 = v1;
          *(_QWORD *)(v5 + 120) = v1;
          for ( *(_QWORD *)(v5 + 112) = v1; v7 < *(_DWORD *)(v5 + 60); ++v7 )
          {
            v8 = *(_OWORD *)(*(_QWORD *)(v5 + 88) + 16LL * v7);
            TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v6, (float *)&v8);
          }
          *(_BYTE *)(v5 + 128) = v1;
        }
        v9 = *(_OWORD *)(v5 + 112);
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)v2 + 22, (float *)&v9);
        ++v4;
      }
      while ( v4 < *((_DWORD *)v2 + 18) );
    }
    *((_BYTE *)v2 + 104) = v1;
  }
  if ( *((float *)v2 + 24) <= *((float *)v2 + 22)
    || *((float *)v2 + 25) <= *((float *)v2 + 23)
    || *((_QWORD *)v2 + 8) == v1 )
  {
    LOBYTE(v1) = 1;
  }
  return v1;
}
