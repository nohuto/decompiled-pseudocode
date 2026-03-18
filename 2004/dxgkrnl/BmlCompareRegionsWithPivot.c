/*
 * XREFs of BmlCompareRegionsWithPivot @ 0x1C01362C8
 * Callers:
 *     BmlCompareSourceModesWithConstraint @ 0x1C0135C7C (BmlCompareSourceModesWithConstraint.c)
 *     BmlCompareTargetModes @ 0x1C0137E44 (BmlCompareTargetModes.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C0137F8C (BmlCompareTargetModesWithConstraint.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C02EBA28 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x1C000B034 (--$DIFF@H@@YAHHH@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C01363A0 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C01694DC (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 */

__int64 __fastcall BmlCompareRegionsWithPivot(
        struct _D3DKMDT_2DREGION *a1,
        struct _D3DKMDT_2DREGION *a2,
        struct _D3DKMDT_2DREGION *a3)
{
  unsigned __int64 v6; // r10
  signed __int64 v7; // r8
  __int128 v8; // rax
  signed __int64 v9; // rax
  int ScaledAspectRatio; // edi
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // eax

  v6 = a3->cx * (unsigned __int64)a3->cy;
  v7 = abs64(a1->cx * (unsigned __int64)a1->cy - v6);
  v8 = (__int64)(a2->cx * (unsigned __int64)a2->cy - v6);
  v9 = (*((_QWORD *)&v8 + 1) ^ v8) - *((_QWORD *)&v8 + 1);
  if ( v7 == v9 )
  {
    ScaledAspectRatio = BmlGetScaledAspectRatio(a3);
    v12 = BmlGetScaledAspectRatio(a1);
    v13 = DIFF<int>(v12, ScaledAspectRatio);
    v14 = BmlGetScaledAspectRatio(a2);
    v15 = DIFF<int>(v14, ScaledAspectRatio);
    return BmlCompareValues<int>(v15, v13);
  }
  else if ( v7 >= v9 )
  {
    return (unsigned int)(v9 >= v7) - 1;
  }
  else
  {
    return 1LL;
  }
}
