/*
 * XREFs of ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ACFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058390 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x18006B5B0 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18006BAF8 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006BB30 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006BE00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

char __fastcall CMergedRectBase<4>::Add(__int64 a1, float *a2)
{
  char result; // al
  float v5; // xmm6_4
  unsigned int v6; // r14d
  unsigned int v7; // esi
  unsigned int v8; // r9d
  _BYTE *v9; // r10
  __int128 *v10; // rbp
  float *v11; // rdx
  float *v12; // rcx
  __int64 v13; // r11
  double v14; // xmm0_8
  float v15; // xmm4_4
  float v16; // xmm4_4
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF

  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a2);
  if ( !result )
  {
    v5 = FLOAT_3_4028235e38;
    v6 = -1;
    v7 = -1;
    CMergedRectBase<4>::Optimize(a1, 0);
    v8 = 0;
    v9 = (_BYTE *)(a1 + 72);
    v10 = (__int128 *)(a1 + 8);
    do
    {
      if ( *v9 )
      {
        if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
               (float *)(16LL * v8 + a1 + 8),
               a2) )
        {
          goto LABEL_13;
        }
        if ( *(_DWORD *)(a1 + 80) == 4 )
        {
          v17 = *v10;
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v17, v11);
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v17);
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v13);
          v14 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)a2);
          v16 = v15 - *(float *)&v14;
          if ( v5 > v16 )
          {
            v5 = v16;
            v6 = v8;
          }
        }
      }
      else
      {
        v7 = v8;
      }
      ++v8;
      ++v9;
      ++v10;
    }
    while ( v8 < 4 );
    if ( v7 != -1 )
    {
      result = 2 * v7;
      *(_OWORD *)(a1 + 16LL * v7 + 8) = *(_OWORD *)a2;
      *(_BYTE *)(v7 + a1 + 72) = 1;
      ++*(_DWORD *)(a1 + 76);
      ++*(_DWORD *)(a1 + 80);
      return result;
    }
    v11 = a2;
    v12 = (float *)(16LL * v6 + a1 + 8);
LABEL_13:
    result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v12, v11);
    ++*(_DWORD *)(a1 + 76);
  }
  return result;
}
