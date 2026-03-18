/*
 * XREFs of BmlCompareMonitorRegions @ 0x1C02E70CC
 * Callers:
 *     BmlCompareTargetModes @ 0x1C00E17D8 (BmlCompareTargetModes.c)
 * Callees:
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C001972C (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00E5C4C (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     BmlCompareModeRegions @ 0x1C0157420 (BmlCompareModeRegions.c)
 */

__int64 __fastcall BmlCompareMonitorRegions(unsigned int *a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  unsigned int v6; // eax
  unsigned int v7; // r9d

  if ( a1 == a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  result = BmlCompareModeRegions(a1 + 21, a2 + 21);
  if ( !(_DWORD)result )
  {
    DMMVIDEOSIGNALMODE::DivideAndRound(a2[23], a2[24]);
    v6 = DMMVIDEOSIGNALMODE::DivideAndRound(a1[23], a1[24]);
    return BmlCompareValues<unsigned int>(v6, v7);
  }
  return result;
}
