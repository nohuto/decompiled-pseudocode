/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003B104
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18003A52C (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x18003AFAC (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlGetUILanguageInfo @ 0x1800EED40 (RtlGetUILanguageInfo.c)
 *     RtlpRefreshCachedUILanguage @ 0x180105D80 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1801070A8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     _MuiRegAllocArray @ 0x18003B244 (_MuiRegAllocArray.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByLangId(__int64 a1, unsigned __int16 a2, char a3, _WORD *a4)
{
  unsigned int v4; // ebp
  __int64 result; // rax
  unsigned int InstalledLanguageIndexByName; // ebx
  char v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  const WCHAR *v15; // rax
  __int64 v16; // rdi
  int v17; // [rsp+20h] [rbp-38h] BYREF
  const WCHAR *v18; // [rsp+28h] [rbp-30h]

  v4 = a2;
  result = 3221225524LL;
  InstalledLanguageIndexByName = -1073741772;
  v10 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a2 != 4096 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    v12 = 0LL;
    if ( !*(_WORD *)(v11 + 6) )
    {
LABEL_13:
      v15 = (const WCHAR *)MuiRegAllocArray(v12, 85LL);
      v16 = (__int64)v15;
      if ( v15 )
      {
        v18 = v15;
        v17 = 11141120;
        if ( a3 && RtlLCIDToCultureName(v4, (__int64)&v17) )
          InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(a1, v18, 0, a4);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16);
        if ( v10 && InstalledLanguageIndexByName == -1073741772 )
          return 3221225659LL;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return InstalledLanguageIndexByName;
    }
    v13 = *(_QWORD *)(v11 + 16);
    while ( 1 )
    {
      v14 = 28LL * (int)v12;
      if ( *(_WORD *)(v14 + v13 + 4) == (_WORD)v4 )
      {
        if ( (*(_WORD *)(v14 + v13) & 0x1020) == 0x20 )
        {
          if ( a4 )
            *a4 = v12;
          return 0LL;
        }
        if ( (*(_WORD *)(v14 + v13) & 0x1000) != 0 )
          v10 = 1;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (int)v12 >= *(unsigned __int16 *)(v11 + 6) )
        goto LABEL_13;
    }
  }
  return result;
}
