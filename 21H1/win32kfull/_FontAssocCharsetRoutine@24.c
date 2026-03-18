/*
 * XREFs of _FontAssocCharsetRoutine@24 @ 0x1F7864
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall FontAssocCharsetRoutine(wchar_t *a1, int a2, wchar_t *Str1, int a4, int a5, int a6)
{
  int v6; // ebx
  int v8; // [esp-4h] [ebp-10h]
  char v9; // [esp+Bh] [ebp-1h]

  v6 = 0;
  if ( __wcsicmp(Str1, L"YES") )
  {
    v9 = 0;
    if ( __wcsicmp(Str1, L"CODEPAGECOMPAT") )
      return 0;
  }
  else
  {
    v9 = 1;
  }
  if ( __wcsicmp(a1, L"ANSI(00)") )
  {
    if ( __wcsicmp(a1, L"SYMBOL(02)") )
    {
      if ( !__wcsicmp(a1, L"OEM(FF)") )
        v6 = 1;
      goto LABEL_11;
    }
    v8 = 4;
  }
  else
  {
    v8 = 2;
  }
  v6 = v8;
LABEL_11:
  if ( v9 )
    fFontAssocStatus |= v6;
  else
    gForceFontAssocCodePage &= ~v6;
  return 0;
}
