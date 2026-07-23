/*
 * XREFs of DownLevelGetParentLanguageName @ 0x1405BE458
 * Callers:
 *     LdrpGetParentLangId @ 0x140227A8C (LdrpGetParentLangId.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14037FF3C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x1403D25F0 (bsearch.c)
 */

__int64 __fastcall DownLevelGetParentLanguageName(const void *a1, char *a2)
{
  _BYTE *v3; // rax
  __int64 v4; // rbx
  char *v5; // r8

  if ( !a1 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v3 = bsearch(a1, &off_140001150, 0x1B4uLL, 8uLL, (int (__cdecl *)(const void *, const void *))CompareLangName);
  if ( !v3 )
    return 0LL;
  v4 = -1LL;
  v5 = (char *)(&off_140001EF0)[2 * dword_140001EFC[4 * word_14001F710[(v3 - (_BYTE *)&off_140001150) >> 3]]];
  do
    ++v4;
  while ( *(_WORD *)&v5[2 * v4] );
  if ( (int)StringCchCopyNW(a2, 85LL, v5, v4 + 1) >= 0 )
    return (unsigned int)(v4 + 1);
  else
    return 0LL;
}
