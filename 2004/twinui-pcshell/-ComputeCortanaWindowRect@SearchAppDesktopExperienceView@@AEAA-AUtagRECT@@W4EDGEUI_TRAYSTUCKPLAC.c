/*
 * XREFs of ?ComputeCortanaWindowRect@SearchAppDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1_N@Z @ 0x18001BA50
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18001AAD0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001BD54 (-IsBiDiLocale@@YAHK@Z.c)
 */

_DWORD *__fastcall SearchAppDesktopExperienceView::ComputeCortanaWindowRect(
        __int64 a1,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int *a7,
        char a8)
{
  int v10; // r8d
  LANGID ThreadUILanguage; // ax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  _DWORD *result; // rax
  _DWORD *v16; // rcx
  int v17; // eax
  LANGID v18; // ax
  int v19; // ecx

  if ( !a3 )
  {
    v16 = a6;
    v17 = a6[2];
    goto LABEL_18;
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
      goto LABEL_9;
    }
    v16 = a6;
    v17 = *a6 - a4;
LABEL_18:
    v14 = v16[1];
    *a2 = v17;
    goto LABEL_9;
  }
  v18 = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(v18) )
    v19 = a7[2] - a4;
  else
    v19 = *a7;
  *a2 = v19;
  v14 = a6[3];
LABEL_9:
  a2[1] = v14;
  result = a2;
  a2[2] = a4 + *a2;
  a2[3] = a5 + a2[1];
  return result;
}
