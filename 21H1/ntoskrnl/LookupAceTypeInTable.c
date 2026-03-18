/*
 * XREFs of LookupAceTypeInTable @ 0x1406908A4
 * Callers:
 *     LocalConvertAclToString @ 0x14068FE40 (LocalConvertAclToString.c)
 *     LocalGetAclForString @ 0x1407730BC (LocalGetAclForString.c)
 * Callees:
 *     _wcsnicmp @ 0x1403CDDD0 (_wcsnicmp.c)
 */

wchar_t **__fastcall LookupAceTypeInTable(wchar_t *Str1, int a2, int a3)
{
  __int64 v3; // rdi
  const wchar_t **v4; // rsi
  unsigned int i; // ebx

  v3 = 0LL;
  v4 = (const wchar_t **)&unk_140C01ED8;
  for ( i = 0; i < 0x11; ++i )
  {
    if ( (a3 & (_DWORD)v4[1]) == a3
      && (Str1 ? wcsnicmp(Str1, *(v4 - 1), *(unsigned int *)v4) == 0 : a2 == *((_DWORD *)v4 + 1)) )
    {
      break;
    }
    v4 += 3;
  }
  if ( i < 0x11 )
    return &(&off_140C01ED0)[3 * i];
  return (wchar_t **)v3;
}
