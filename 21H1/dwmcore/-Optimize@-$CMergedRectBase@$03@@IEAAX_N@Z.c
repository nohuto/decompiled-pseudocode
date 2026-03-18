/*
 * XREFs of ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x1800682A0
 * Callers:
 *     ?Add@CMergedDirtyRect@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800680D0 (-Add@CMergedDirtyRect@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetRects@?$CMergedRectBase@$03@@UEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800BB1C0 (-GetRects@-$CMergedRectBase@$03@@UEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B0E70 (-Add@-$CMergedRectBase@$03@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AA870 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AC3B0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x1800BB25C (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 */

void __fastcall CMergedRectBase<4>::Optimize(__int64 a1, char a2)
{
  __int64 v2; // r10
  unsigned int v3; // r9d
  _BYTE *i; // rax
  float v5; // xmm6_4
  __int64 v6; // r11
  char v7; // si
  float v8; // xmm2_4
  float *v9; // rcx
  unsigned int v10; // r9d
  float v11; // xmm1_4
  unsigned int v12; // eax
  unsigned int v13; // r8d
  _BYTE *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // eax

  v2 = a1;
  if ( a2 || (*(_BYTE *)(a1 + 76) & 0xF) == 0 )
  {
    v3 = 0;
    *(_DWORD *)(a1 + 76) = 1;
    if ( *(_DWORD *)(a1 + 80) > 1u )
    {
      v5 = 0.0;
      v6 = 0LL;
      do
      {
        v7 = 0;
        v8 = v5;
        if ( *(_BYTE *)(v2 + v6 + 72) )
        {
          if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)(16LL * (unsigned int)v6
                                                                                              + v2
                                                                                              + 8)) )
            v11 = 0.0;
          else
            v11 = (float)(v9[3] - v9[1]) * (float)(v9[2] - *v9);
          if ( v11 > v5 )
            v5 = v11;
          v12 = v6;
          v13 = v6 + 1;
          if ( v11 <= v8 )
            v12 = v10;
          v3 = v12;
          if ( v13 < 4 )
          {
            v14 = (_BYTE *)(v13 + v2 + 72);
            while ( 1 )
            {
              if ( *v14 )
              {
                v15 = v13;
                if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                        v9,
                                        16LL * v13 + v2 + 8) )
                  break;
              }
              ++v13;
              ++v14;
              if ( v13 >= 4 )
                goto LABEL_23;
            }
            TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v9, v16);
            *(_BYTE *)(v15 + v2 + 72) = 0;
            v7 = 1;
            --*(_DWORD *)(v2 + 80);
          }
        }
LABEL_23:
        v17 = v6 + 1;
        v6 = 0LL;
        if ( !v7 )
          v6 = v17;
      }
      while ( (unsigned int)v6 < 4 );
    }
    else
    {
      if ( *(_DWORD *)(a1 + 80) != 1 )
        return;
      for ( i = (_BYTE *)(a1 + 72); !*i; ++i )
      {
        if ( ++v3 >= 4 )
          return;
      }
    }
    if ( v3 )
      CMergedRectBase<4>::SwapExisting(v2, 0LL, v3);
  }
}
