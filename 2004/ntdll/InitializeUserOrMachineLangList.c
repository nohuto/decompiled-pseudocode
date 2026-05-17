/*
 * XREFs of InitializeUserOrMachineLangList @ 0x180075814
 * Callers:
 *     InitializeTEBUserLangList @ 0x180038670 (InitializeTEBUserLangList.c)
 *     RtlpInitializeUserList @ 0x18003F0AC (RtlpInitializeUserList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180075640 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     RtlpSetProcUserMachineLangList @ 0x180038514 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x1800389BC (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18003E724 (RtlpMuiRegLoadPreferredUILanguages.c)
 */

__int64 __fastcall InitializeUserOrMachineLangList(__int64 a1, unsigned int a2, __int64 *a3, int a4, char a5)
{
  int v8; // edx
  __int64 LanguageList; // rax
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  if ( a3 && a1 && a2 <= 1 && (unsigned int)(a4 - 2) <= 1 )
  {
    if ( a5 && a4 == 3 )
    {
      v8 = RtlpSetProcUserMachineLangList(a1, a2);
      if ( v8 >= 0 )
      {
        if ( a2 == 1 )
        {
          *a3 = *(_QWORD *)(a1 + 64);
        }
        else if ( !a2 )
        {
          *a3 = *(_QWORD *)(a1 + 56);
        }
      }
      return (unsigned int)v8;
    }
    v8 = RtlpMuiRegLoadPreferredUILanguages(a1, a2, a2, a4, &v11, a3);
    if ( !*a3 )
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, a2 != 1, a1);
      *a3 = LanguageList;
      if ( !LanguageList )
        return (unsigned int)-1073741801;
      v8 = 0;
    }
    if ( v8 && v8 != -1073741801 && v11 )
      return 0;
    return (unsigned int)v8;
  }
  return 3221225485LL;
}
