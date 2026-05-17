/*
 * XREFs of _RtlpMuiRegGetString@16 @ 0x4B36B86B
 * Callers:
 *     _RtlpGetDefaultLanguageBaseOrParent@28 @ 0x4B354076 (_RtlpGetDefaultLanguageBaseOrParent@28.c)
 *     _RtlpMuiRegGetInstalledLanguageInfoByIndex@24 @ 0x4B36B74B (_RtlpMuiRegGetInstalledLanguageInfoByIndex@24.c)
 * Callees:
 *     _RtlStringCchCopyW@12 @ 0x4B3475EA (_RtlStringCchCopyW@12.c)
 */

int __fastcall RtlpMuiRegGetString(int a1, __int16 a2, _WORD *a3, int a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // esi

  if ( !a1 || !a3 || !a4 )
    return -1073741811;
  v4 = *(_DWORD *)(a1 + 24);
  if ( v4
    && (v5 = *(_DWORD *)(v4 + 12)) != 0
    && (v6 = *(_DWORD *)(v4 + 16)) != 0
    && a2 >= 0
    && a2 < (int)*(unsigned __int16 *)(v4 + 6) )
  {
    return RtlStringCchCopyW(a3, a4, v6 + 2 * *(__int16 *)(v5 + 2 * a2));
  }
  else
  {
    return -1073741275;
  }
}
