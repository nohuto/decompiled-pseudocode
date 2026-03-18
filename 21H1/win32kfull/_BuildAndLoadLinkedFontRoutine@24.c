/*
 * XREFs of _BuildAndLoadLinkedFontRoutine@24 @ 0xDCCFE
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     bAddFlEntry @ 0xDCD78 (bAddFlEntry.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

int __stdcall BuildAndLoadLinkedFontRoutine(wchar_t *Str1, int a2, void *Src, size_t Size, int a5, int a6)
{
  void *v6; // edi

  if ( Size > 0x7FFFFFFE )
    return -1073741801;
  v6 = PALLOCMEM2(2 * Size + 2, 1718382187, 0);
  if ( !v6 )
    return -1073741801;
  if ( __wcsicmp(Str1, L"SystemDefaultEUDCFont") )
  {
    memmove(v6, Src, Size);
    *((_WORD *)v6 + (Size >> 1)) = 0;
    bAddFlEntry(Str1, v6, a6, -1, 0);
  }
  Win32FreePool(v6);
  return 0;
}
