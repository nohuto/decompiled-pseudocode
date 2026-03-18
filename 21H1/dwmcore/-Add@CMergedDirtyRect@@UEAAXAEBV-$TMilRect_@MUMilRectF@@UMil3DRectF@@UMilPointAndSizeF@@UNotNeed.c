/*
 * XREFs of ?Add@CMergedDirtyRect@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800680D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x1800682A0 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x180075148 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AA870 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMergedDirtyRect::Add(__int64 a1, float *a2)
{
  __int64 result; // rax
  float v5; // xmm6_4
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // r10d
  _BYTE *v9; // r11
  float *v10; // r9
  __int64 v11; // rax
  unsigned int v12; // r10d
  double v13; // xmm0_8
  float v14; // xmm4_4
  float v15; // xmm4_4
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  if ( g_pComposition )
    result = *((_QWORD *)g_pComposition + 44);
  if ( *(_QWORD *)(a1 + 88) != result )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    result = 0LL;
    if ( g_pComposition )
      result = *((_QWORD *)g_pComposition + 44);
    *(_QWORD *)(a1 + 88) = result;
  }
  if ( a2[2] > *a2 && a2[3] > a2[1] )
  {
    v5 = FLOAT_3_4028235e38;
    v6 = -1;
    v7 = -1;
    CMergedRectBase<4>::Optimize(a1, 0LL);
    v8 = 0;
    v9 = (_BYTE *)(a1 + 72);
    v10 = (float *)(a1 + 8);
    do
    {
      if ( *v9 )
      {
        if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v10)
          && !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a2)
          && v10[2] > *a2
          && a2[2] > *v10
          && v10[3] > a2[1]
          && a2[3] > v10[1] )
        {
          v11 = v8;
          goto LABEL_20;
        }
        if ( *(_DWORD *)(a1 + 80) == 4 )
        {
          v16 = *(_OWORD *)v10;
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v16, a2);
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v16);
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(16LL * v12 + a1 + 8);
          v13 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a2);
          v15 = v14 - *(float *)&v13;
          if ( v5 > v15 )
          {
            v5 = v15;
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
      v10 += 4;
    }
    while ( v8 < 4 );
    if ( v7 != -1 )
    {
      result = 2LL * v7;
      *(_OWORD *)(a1 + 16LL * v7 + 8) = *(_OWORD *)a2;
      *(_BYTE *)(v7 + a1 + 72) = 1;
      ++*(_DWORD *)(a1 + 76);
      ++*(_DWORD *)(a1 + 80);
      return result;
    }
    v11 = v6;
LABEL_20:
    result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(16 * v11 + a1 + 8, a2);
    ++*(_DWORD *)(a1 + 76);
  }
  return result;
}
