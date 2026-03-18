/*
 * XREFs of _FontAssocDefaultRoutine@24 @ 0x1F78F7
 * Callers:
 *     <none>
 * Callees:
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?bAppendSysDirectory@@YGHPAGPBGI@Z @ 0xDD06C (-bAppendSysDirectory@@YGHPAGPBGI@Z.c)
 */

int __userpurge FontAssocDefaultRoutine@<eax>(
        const unsigned __int16 *a1@<ebx>,
        unsigned int a2@<edi>,
        wchar_t *Str1,
        int a4,
        WCHAR *cchDest,
        int a6,
        int a7,
        int a8)
{
  const wchar_t *v9; // edi
  unsigned int v10; // ebx
  unsigned __int16 *v13; // [esp-4h] [ebp-Ch]
  const unsigned __int16 *v15; // [esp+0h] [ebp-8h]
  unsigned int v16; // [esp+4h] [ebp-4h]
  int v17; // [esp+4h] [ebp-4h]

  if ( __wcsicmp(Str1, L"AssocSystemFont") )
  {
    if ( __wcsicmp(Str1, L"FontPackage") )
    {
      v17 = 0;
      v9 = aFontpackagedon;
      v10 = 0;
      while ( __wcsicmp(Str1, v9) )
      {
        ++v17;
        v10 += 656;
        v9 += 328;
        if ( v10 >= 0x11F0 )
          return 0;
      }
      if ( *cchDest && StringCchCopyW((size_t)cchDest, a2, a1) >= 0 )
        *(&FontAssocDefaultTable + 164 * v17) = (struct _FONT_DEFAULTASSOC *)1;
    }
    else
    {
      cCapString(word_274070, cchDest, 32);
    }
  }
  else
  {
    bAppendSysDirectory(cchDest, gawcSystemDBCSFontPath, v13, v15, v16);
  }
  return 0;
}
