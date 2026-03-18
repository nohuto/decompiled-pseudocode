/*
 * XREFs of ?GetBounds@CAtlasedRectsMesh@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C0008
 * Callers:
 *     ?EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ @ 0x1800BFF70 (-EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AA870 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

char __fastcall CAtlasedRectsMesh::GetBounds(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // r11
  __int64 v3; // r9
  __int64 v4; // rcx
  unsigned int v5; // r10d
  char result; // al
  int v7; // r10d
  float v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  v3 = a1;
  if ( *(_BYTE *)(a1 + 128) )
  {
    *(_DWORD *)(a1 + 124) = 0;
    v4 = a1 + 112;
    v5 = 0;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 4) = 0;
    for ( *(_DWORD *)v4 = 0; v5 < *(_DWORD *)(v3 + 60); v5 = v7 + 1 )
    {
      *(_OWORD *)v8 = *(_OWORD *)(*(_QWORD *)(v3 + 88) + 16LL * v5);
      result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)v4, v8);
    }
    *(_BYTE *)(v3 + 128) = 0;
  }
  *v2 = *(_OWORD *)(v3 + 112);
  return result;
}
