/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAV2@AEBV2@@Z @ 0x180048B9C
 * Callers:
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x18001AEB8 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180048060 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x18025B400 (-IntersectWithRect@CRectanglesShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?GetUnOccludedWorldShape@CRegionShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x18025DA70 (-GetUnOccludedWorldShape@CRegionShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z @ 0x180048AF4 (-_Calculate_growth@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@AEAAXQEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K1@Z @ 0x180048B2C (-_Change_array@-$vector@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
        __int64 *a1,
        __int128 *a2,
        _OWORD *a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rax
  __int128 *v6; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  SIZE_T v10; // rcx
  unsigned __int64 v11; // r9
  _OWORD *v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // r10
  __int128 *v15; // rdx
  __int128 *v16; // rcx
  _OWORD *v17; // r8
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  unsigned __int64 v21; // rcx

  v3 = (unsigned __int64)a2 - *a1;
  v5 = (a1[1] - *a1) >> 4;
  v6 = a2;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v5 + 1;
  v9 = std::vector<tagRECT>::_Calculate_growth(a1, v5 + 1);
  v10 = 16 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v13 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (__int64)v12;
  *(_OWORD *)((char *)v12 + v13) = *a3;
  v15 = (__int128 *)a1[1];
  v16 = (__int128 *)*a1;
  if ( v6 == v15 )
  {
    v17 = v12;
    while ( v16 != v15 )
    {
      v19 = *v16++;
      *v17++ = v19;
    }
  }
  else
  {
    if ( v16 != v6 )
    {
      do
      {
        v20 = *v16++;
        *v12++ = v20;
      }
      while ( v16 != v6 );
      v15 = (__int128 *)a1[1];
    }
    if ( v6 != v15 )
    {
      v21 = v14 + v13 - (_QWORD)v6;
      do
      {
        *(__int128 *)((char *)v6 + v21 + 16) = *v6;
        ++v6;
      }
      while ( v6 != v15 );
    }
  }
  std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Change_array(
    a1,
    v14,
    v8,
    v9);
  return v13 + *a1;
}
