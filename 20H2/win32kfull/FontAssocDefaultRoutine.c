/*
 * XREFs of FontAssocDefaultRoutine @ 0x1C0296F80
 * Callers:
 *     <none>
 * Callees:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C001FD10 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0061F00 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     cCapString @ 0x1C0066558 (cCapString.c)
 */

__int64 __fastcall FontAssocDefaultRoutine(wchar_t *Str1, __int64 a2, char *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r14

  if ( _wcsicmp(Str1, L"AssocSystemFont") )
  {
    if ( _wcsicmp(Str1, L"FontPackage") )
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = 664LL * v5;
        if ( !_wcsicmp(Str1, (const wchar_t *)((char *)&FontAssocDefaultTable + v6 + 8)) )
          break;
        if ( ++v5 >= 7 )
          return 0LL;
      }
      if ( *(_WORD *)a3 && (int)StringCchCopyW((char *)&FontAssocDefaultTable + v6 + 58, 33LL, a3) >= 0 )
        *((_DWORD *)&FontAssocDefaultTable + 166 * v5) = 1;
    }
    else
    {
      cCapString(word_1C0339C00, (WCHAR *)a3, 32);
    }
  }
  else
  {
    bAppendSysDirectory(&gawcSystemDBCSFontPath, (const unsigned __int16 *)a3);
  }
  return 0LL;
}
