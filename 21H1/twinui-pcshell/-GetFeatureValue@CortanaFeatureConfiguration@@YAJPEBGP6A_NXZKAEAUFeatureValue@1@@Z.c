/*
 * XREFs of ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z @ 0x1801AFE7C
 * Callers:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180053408 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x180053478 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 * Callees:
 *     ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x18001C084 (-GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOverrideValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x1801AFF3C (-GetOverrideValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetFeatureValue(
        WCHAR *this,
        const unsigned __int16 *a2,
        bool (*a3)(void),
        __int64 a4)
{
  int v4; // esi
  int OverrideValue; // ebx
  unsigned __int8 *v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const unsigned __int16 *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v4 = (int)a3;
  LOBYTE(v12) = 0;
  OverrideValue = CortanaFeatureConfiguration::GetOverrideValue(
                    this,
                    (const unsigned __int16 *)a4,
                    (struct CortanaFeatureConfiguration::FeatureValue *)&v12,
                    (unsigned __int8 *)a4);
  if ( OverrideValue < 0 )
  {
    v9 = 369LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\internal\\shell\\inc\\CortanaFeatureConfiguration.h",
      (const char *)(unsigned int)OverrideValue);
    return (unsigned int)OverrideValue;
  }
  if ( !(_BYTE)v12 )
  {
    LOBYTE(v12) = 0;
    OverrideValue = CortanaFeatureConfiguration::GetFlightedValue(
                      (CortanaFeatureConfiguration *)this,
                      (const unsigned __int16 *)a4,
                      (struct CortanaFeatureConfiguration::FeatureValue *)&v12,
                      v8);
    if ( OverrideValue < 0 )
    {
      v9 = 377LL;
      goto LABEL_3;
    }
    if ( !(_BYTE)v12 )
      *(_DWORD *)(a4 + 4) = v4;
  }
  return 0LL;
}
