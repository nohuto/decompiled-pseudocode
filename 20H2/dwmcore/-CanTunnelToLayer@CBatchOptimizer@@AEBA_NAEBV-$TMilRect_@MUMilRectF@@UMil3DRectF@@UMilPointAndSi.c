/*
 * XREFs of ?CanTunnelToLayer@CBatchOptimizer@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x1800BC36C
 * Callers:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800BC140 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 * Callees:
 *     ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BC424 (-DoesIntersectInclusive@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NA.c)
 */

char __fastcall CBatchOptimizer::CanTunnelToLayer(__int64 a1, __int64 a2, int a3, int *a4)
{
  __int64 v4; // rdi
  int v5; // r10d
  __int64 v6; // r8
  int *i; // r11
  int v12; // r9d
  __int64 v13; // rbp
  int v14; // r9d

  v4 = *a4;
  v5 = a3 - 1;
  v6 = v5;
  if ( v5 == v4 )
    return 1;
  for ( i = (int *)(a1 + 48 + 4LL * v5); ; --i )
  {
    v12 = 0;
    v13 = 520LL * *i + a1 + 80;
    if ( *(_DWORD *)(v13 + 20) )
      break;
LABEL_7:
    --v5;
    if ( --v6 == v4 )
      return 1;
  }
  while ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(
                              a2,
                              v13 + 16LL * v12 + 200) )
  {
    v12 = v14 + 1;
    if ( v12 == *(_DWORD *)(v13 + 20) )
      goto LABEL_7;
  }
  *a4 = v5;
  return 0;
}
