/*
 * XREFs of RtlpMuiRegGetInstalledLangInfoIndex @ 0x18007AAD8
 * Callers:
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003681C (LdrpConvertLangFallbackListToMultiSz.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x1801077EC (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x180107A2C (_RtlpMuiRegValidatePartialLanguage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetInstalledLangInfoIndex(__int64 a1, int a2, __int16 a3, __int16 *a4)
{
  int v6; // edx
  __int16 v7; // cx
  __int64 v8; // r11
  int v9; // ebx
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rbx
  __int64 v13; // r11

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a2 == 1 )
  {
    if ( !a3 )
      return 3221225485LL;
    v6 = *(unsigned __int16 *)(a1 + 6);
    v7 = 0;
    if ( *(_WORD *)(a1 + 6) )
    {
      v8 = *(_QWORD *)(a1 + 16);
      v9 = a3;
      while ( 1 )
      {
        v10 = 28LL * v7;
        if ( *(unsigned __int16 *)(v10 + v8 + 4) == v9 && (*(_WORD *)(v10 + v8) & 0x1020) == 0x20 )
          break;
        if ( ++v7 >= v6 )
          return 3221225473LL;
      }
      goto LABEL_28;
    }
    return 3221225473LL;
  }
  if ( a2 == 3 )
  {
    if ( a3 < 0 )
      return 3221225485LL;
    v11 = *(unsigned __int16 *)(a1 + 6);
    v7 = 0;
    if ( *(_WORD *)(a1 + 6) )
    {
      v12 = *(_QWORD *)(a1 + 16);
      while ( 1 )
      {
        v13 = 28LL * v7;
        if ( *(_WORD *)(v13 + v12 + 6) == a3 && (*(_WORD *)(v13 + v12) & 0x1020) == 0x20 )
          break;
        if ( ++v7 >= v11 )
          return 3221225473LL;
      }
LABEL_28:
      if ( a4 )
        *a4 = v7;
      return 0LL;
    }
    return 3221225473LL;
  }
  if ( a2 != 2 )
    return 3221225473LL;
  if ( a3 >= 0 && a3 < (int)*(unsigned __int16 *)(a1 + 6) )
  {
    if ( (*(_WORD *)(28LL * a3 + *(_QWORD *)(a1 + 16)) & 0x1020) == 0x20 )
    {
      if ( a4 )
        *a4 = a3;
      return 0LL;
    }
    return 3221225473LL;
  }
  return 3221225485LL;
}
