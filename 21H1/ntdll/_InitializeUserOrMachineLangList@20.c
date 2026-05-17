/*
 * XREFs of _InitializeUserOrMachineLangList@20 @ 0x4B2E98CF
 * Callers:
 *     _InitializeTEBUserLangList@8 @ 0x4B2D3E35 (_InitializeTEBUserLangList@8.c)
 *     _RtlpInitializeUserList@4 @ 0x4B2D6661 (_RtlpInitializeUserList@4.c)
 *     _RtlpQueryDefaultUILanguage@8 @ 0x4B2E9760 (_RtlpQueryDefaultUILanguage@8.c)
 * Callees:
 *     _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC (_RtlpMuiRegLoadPreferredUILanguages@24.c)
 *     _RtlpMuiRegCreateLanguageList@12 @ 0x4B2D3232 (_RtlpMuiRegCreateLanguageList@12.c)
 *     _RtlpSetProcUserMachineLangList@8 @ 0x4B2D3D47 (_RtlpSetProcUserMachineLangList@8.c)
 */

int __fastcall InitializeUserOrMachineLangList(_DWORD *a1, unsigned int a2, int *a3, int a4, char a5)
{
  int v7; // edx
  int LanguageList; // eax
  char v10; // [esp+13h] [ebp-1h] BYREF

  v10 = 0;
  if ( a3 && a1 && a2 <= 1 && (a4 == 3 || a4 == 2) )
  {
    if ( a5 && a4 == 3 )
    {
      v7 = RtlpSetProcUserMachineLangList(a1, a2);
      if ( v7 >= 0 )
      {
        if ( a2 == 1 )
        {
          *a3 = a1[10];
        }
        else if ( !a2 )
        {
          *a3 = a1[9];
        }
      }
      return v7;
    }
    v7 = RtlpMuiRegLoadPreferredUILanguages(a1, a2, a4, &v10, a3);
    if ( !*a3 )
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, a2 != 1, (int)a1);
      *a3 = LanguageList;
      if ( !LanguageList )
        return -1073741801;
      v7 = 0;
    }
    if ( v7 && v7 != -1073741801 && v10 )
      return 0;
    return v7;
  }
  return -1073741811;
}
