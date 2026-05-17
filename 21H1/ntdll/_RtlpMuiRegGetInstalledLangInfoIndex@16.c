/*
 * XREFs of _RtlpMuiRegGetInstalledLangInfoIndex@16 @ 0x4B2AB64D
 * Callers:
 *     _LdrpConvertLangFallbackListToMultiSz@28 @ 0x4B2D3319 (_LdrpConvertLangFallbackListToMultiSz@28.c)
 *     __RtlpMuiRegValidateLIPLanguage@8 @ 0x4B36CDB5 (__RtlpMuiRegValidateLIPLanguage@8.c)
 *     __RtlpMuiRegValidatePartialLanguage@8 @ 0x4B36CFBA (__RtlpMuiRegValidatePartialLanguage@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpMuiRegGetInstalledLangInfoIndex(int a1, int a2, __int16 a3, _WORD *a4)
{
  int v6; // edi
  __int16 v7; // cx
  int v8; // edx
  int v9; // edx
  int v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // [esp+10h] [ebp-4h]

  if ( !a1 || !a2 )
    return -1073741811;
  if ( a2 == 1 )
  {
    if ( !a3 )
      return -1073741811;
    v6 = *(unsigned __int16 *)(a1 + 6);
    v7 = 0;
    if ( *(_WORD *)(a1 + 6) )
    {
      v14 = *(_DWORD *)(a1 + 12);
      v8 = 0;
      while ( 1 )
      {
        v9 = 28 * v8;
        if ( *(unsigned __int16 *)(v9 + v14 + 4) == a3 && (*(_WORD *)(v9 + v14) & 0x1020) == 0x20 )
          break;
        v8 = ++v7;
        if ( v7 >= v6 )
          return -1073741823;
      }
      goto LABEL_28;
    }
    return -1073741823;
  }
  if ( a2 == 3 )
  {
    if ( a3 < 0 )
      return -1073741811;
    v10 = *(unsigned __int16 *)(a1 + 6);
    v7 = 0;
    if ( *(_WORD *)(a1 + 6) )
    {
      v11 = *(_DWORD *)(a1 + 12);
      v12 = 0;
      while ( 1 )
      {
        v13 = 28 * v12;
        if ( *(_WORD *)(v13 + v11 + 6) == a3 && (*(_WORD *)(v13 + v11) & 0x1020) == 0x20 )
          break;
        v12 = ++v7;
        if ( v7 >= v10 )
          return -1073741823;
      }
LABEL_28:
      if ( a4 )
        *a4 = v7;
      return 0;
    }
    return -1073741823;
  }
  if ( a2 != 2 )
    return -1073741823;
  if ( a3 >= 0 && a3 < (int)*(unsigned __int16 *)(a1 + 6) )
  {
    if ( (*(_WORD *)(28 * a3 + *(_DWORD *)(a1 + 12)) & 0x1020) == 0x20 )
    {
      if ( a4 )
        *a4 = a3;
      return 0;
    }
    return -1073741823;
  }
  return -1073741811;
}
