/*
 * XREFs of _RtlpMuiRegGetInstalledLanguageInfoByIndex@24 @ 0x4B36B74B
 * Callers:
 *     _RtlpGetDefaultLanguageBaseOrParent@28 @ 0x4B354076 (_RtlpGetDefaultLanguageBaseOrParent@28.c)
 * Callees:
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlStringCchCopyW@12 @ 0x4B3475EA (_RtlStringCchCopyW@12.c)
 *     _RtlpMuiRegGetString@16 @ 0x4B36B86B (_RtlpMuiRegGetString@16.c)
 */

int __fastcall RtlpMuiRegGetInstalledLanguageInfoByIndex(int a1, __int16 a2, LCID *a3, _WORD *a4, int a5, _DWORD *a6)
{
  int v6; // eax
  unsigned __int16 *v7; // edx
  int v9; // [esp+10h] [ebp-CCh]
  _UNICODE_STRING String; // [esp+1Ch] [ebp-C0h] BYREF
  char v11; // [esp+24h] [ebp-B8h] BYREF

  if ( !a1 || !a3 || !a4 || !a5 || !a6 )
    return -1073741811;
  v6 = *(_DWORD *)(a1 + 20);
  if ( !v6 )
    return -1073741275;
  v9 = *(_DWORD *)(v6 + 12);
  if ( !v9 || a2 < 0 || a2 >= (int)*(unsigned __int16 *)(v6 + 6) )
    return -1073741275;
  v7 = (unsigned __int16 *)(v9 + 28 * a2);
  *a3 = v7[2];
  *a6 = *v7;
  if ( (__int16)v7[3] > 0 )
    return RtlpMuiRegGetString(a4, a5);
  *(_DWORD *)&String.Length = 11141120;
  String.Buffer = (wchar_t *)&v11;
  if ( RtlLCIDToCultureName(*a3, &String) )
    return RtlStringCchCopyW(a4, a5, (int)String.Buffer);
  else
    return -1073741275;
}
