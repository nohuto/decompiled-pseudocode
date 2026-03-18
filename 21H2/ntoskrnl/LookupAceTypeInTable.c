/*
 * XREFs of LookupAceTypeInTable @ 0x1406774E8
 * Callers:
 *     LocalGetAclForString @ 0x140675DA8 (LocalGetAclForString.c)
 *     LocalConvertAclToString @ 0x140676B80 (LocalConvertAclToString.c)
 * Callees:
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 */

wchar_t **__fastcall LookupAceTypeInTable(wchar_t *Str1, int a2, int a3)
{
  __int64 v3; // rbx
  const wchar_t **v4; // rdi
  unsigned int v5; // esi

  v3 = 0LL;
  v4 = (const wchar_t **)&unk_140C034B8;
  v5 = 0;
  while ( (a3 & (_DWORD)v4[1]) != a3
       || !(Str1 ? wcsnicmp(Str1, *(v4 - 1), *(unsigned int *)v4) == 0 : a2 == *((_DWORD *)v4 + 1)) )
  {
    ++v5;
    v4 += 3;
    if ( v5 >= 0x11 )
      return (wchar_t **)v3;
  }
  return &(&off_140C034B0)[3 * v5];
}
