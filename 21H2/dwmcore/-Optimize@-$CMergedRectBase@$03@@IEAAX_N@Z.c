/*
 * XREFs of ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x180085884
 * Callers:
 *     ?GetRects@?$CMergedRectBase@$03@@UEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180081CC0 (-GetRects@-$CMergedRectBase@$03@@UEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085350 (-Add@-$CMergedRectBase@$03@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180085994 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800B34A0 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x1800DE248 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 */

void __fastcall CMergedRectBase<4>::Optimize(__int64 a1, char a2)
{
  unsigned int v3; // r11d
  _BYTE *i; // rax
  float v5; // xmm4_4
  __int64 v6; // rdi
  char v7; // r10
  float v8; // xmm2_4
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r11d
  double v12; // xmm0_8
  unsigned int v13; // eax
  unsigned int v14; // r8d
  _BYTE *v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rdx

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
        if ( *(_BYTE *)(v6 + a1 + 72) )
        {
          v12 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(16LL * (unsigned int)v6 + a1 + 8);
          if ( *(float *)&v12 > v5 )
            v5 = *(float *)&v12;
          v13 = v6;
          v14 = v6 + 1;
          if ( *(float *)&v12 <= v8 )
            v13 = v11;
          v3 = v13;
          if ( v14 < 4 )
          {
            v15 = (_BYTE *)(v14 + a1 + 72);
            while ( 1 )
            {
              if ( *v15 != v7 )
              {
                v16 = v14;
                if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                        v10,
                                        16LL * v14 + a1 + 8) )
                  break;
              }
              ++v14;
              ++v15;
              if ( v14 >= 4 )
                goto LABEL_14;
            }
            TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v10, v17);
            *(_BYTE *)(v16 + a1 + 72) = 0;
            v7 = 1;
            --*(_DWORD *)(a1 + 80);
          }
        }
LABEL_14:
        v9 = v6 + 1;
        v6 = 0LL;
        if ( !v7 )
          v6 = v9;
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
      CMergedRectBase<4>::SwapExisting(a1, 0LL, v3);
  }
}
