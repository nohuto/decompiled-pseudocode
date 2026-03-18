/*
 * XREFs of BmlCompareSourceModesWithConstraint @ 0x1C01B281C
 * Callers:
 *     BmlCompareSourceModes @ 0x1C01B26E0 (BmlCompareSourceModes.c)
 * Callees:
 *     BmlDoesSourceModeObeyConstraint @ 0x1C01B28C0 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlCompareRegionsWithPivot @ 0x1C01B2A10 (BmlCompareRegionsWithPivot.c)
 *     ??$BmlCompareValues@_N@@YA?AW4BML_COMPARISON_RESULT@@_N0@Z @ 0x1C01E9110 (--$BmlCompareValues@_N@@YA-AW4BML_COMPARISON_RESULT@@_N0@Z.c)
 */

__int64 __fastcall BmlCompareSourceModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  struct _D3DKMDT_2DREGION *v8; // rbx
  __int64 cy; // rcx
  __int64 v10; // rdx

  v8 = *(struct _D3DKMDT_2DREGION **)(120LL * a2 + a1 + 16);
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2, a3) )
    WdLogSingleEntry0(1LL);
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2, a4) )
    WdLogSingleEntry0(1LL);
  cy = v8[14].cy;
  v10 = 0LL;
  if ( !(_DWORD)cy
    || (*(_QWORD *)v8 & 0x8000000100LL) == 0
    || (LOBYTE(v10) = *(_DWORD *)(a4 + 96) == (_DWORD)cy,
        LOBYTE(cy) = *(_DWORD *)(a3 + 96) == (_DWORD)cy,
        LODWORD(v10) = BmlCompareValues<bool>(cy, v10),
        !(_DWORD)v10) )
  {
    if ( (v8->cx & 0x100LL) != 0 )
      LODWORD(v10) = BmlCompareRegionsWithPivot(
                       (struct _D3DKMDT_2DREGION *)(a3 + 76),
                       (struct _D3DKMDT_2DREGION *)(a4 + 76),
                       v8 + 12);
  }
  return (unsigned int)v10;
}
