/*
 * XREFs of _RtlpGetAlternateCodePage@12 @ 0x4B36317B
 * Callers:
 *     _RtlpConsoleFallbackNameFromLocaleName@24 @ 0x4B2D61DE (_RtlpConsoleFallbackNameFromLocaleName@24.c)
 * Callees:
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 */

int __fastcall RtlpGetAlternateCodePage(int a1, const WCHAR *a2, int *a3)
{
  int v3; // esi
  int v5; // edx
  int v6; // ebx
  _WORD *v7; // eax
  __int16 v9; // [esp+10h] [ebp-4h] BYREF

  v3 = 0;
  v9 = -1;
  if ( !a3 )
    return v3;
  *a3 = 0;
  if ( RtlpMuiRegGetInstalledLanguageIndexByName(a1, a2, 1, &v9) < 0 )
    return v3;
  v5 = 0;
  v6 = 28 * v9 + 20 + *(_DWORD *)(*(_DWORD *)(a1 + 20) + 12);
  v7 = (_WORD *)v6;
  while ( !*v7 )
  {
LABEL_7:
    ++v5;
    ++v7;
    if ( v5 >= 4 )
      goto LABEL_8;
  }
  if ( *v7 != 0xFFFF )
  {
    ++v3;
    goto LABEL_7;
  }
  v3 = -1;
LABEL_8:
  if ( v3 && v3 != -1 )
    *a3 = v6;
  return v3;
}
