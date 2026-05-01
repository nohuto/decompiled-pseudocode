/*
 * XREFs of ?ComputeCortanaWindowRect@SearchAppDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1_N@Z @ 0x180012560
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800130D0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180012934 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon@@@details@wil@@QEAA_NXZ @ 0x180097694 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top.c)
 */

int *__fastcall SearchAppDesktopExperienceView::ComputeCortanaWindowRect(
        __int64 a1,
        int *a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int *a7,
        char a8)
{
  int v10; // r8d
  LANGID ThreadUILanguage; // ax
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // rax
  LANGID v16; // ax
  int v17; // ecx

  if ( !a3 )
  {
    v15 = a6;
    v12 = a6[2];
    goto LABEL_21;
  }
  v10 = a3 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
    {
      ThreadUILanguage = GetThreadUILanguage();
      if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
        v12 = a7[2] - a4;
      else
        v12 = *a7;
      *a2 = v12;
      if ( a8 )
        v13 = a6[3];
      else
        v13 = a6[1];
      v14 = v13 - a5;
      goto LABEL_22;
    }
    v15 = a6;
    v12 = *a6 - a4;
LABEL_21:
    v14 = v15[1];
    *a2 = v12;
LABEL_22:
    a2[1] = v14;
    goto LABEL_23;
  }
  v16 = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(v16) )
    v17 = a7[2] - a4;
  else
    v17 = *a7;
  *a2 = v17;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon>::GetImpl'::`2'::impl)
    && a8 )
  {
    v14 = a6[1];
  }
  else
  {
    v14 = a6[3];
  }
  a2[1] = v14;
  v12 = *a2;
LABEL_23:
  a2[2] = v12 + a4;
  a2[3] = v14 + a5;
  return a2;
}
