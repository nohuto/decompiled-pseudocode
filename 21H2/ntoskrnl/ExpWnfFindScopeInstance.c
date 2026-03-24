/*
 * XREFs of ExpWnfFindScopeInstance @ 0x14061043C
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x14060F4B4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDeleteScopeById @ 0x1406135B8 (ExpWnfDeleteScopeById.c)
 * Callees:
 *     memcmp @ 0x1403D29E0 (memcmp.c)
 */

_QWORD *__fastcall ExpWnfFindScopeInstance(_QWORD **a1, const void *a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  size_t v5; // rbp

  v3 = *a1;
  v5 = a3;
  if ( *a1 == a1 )
    return 0LL;
  while ( (_DWORD)v5 != *((_DWORD *)v3 - 3) || memcmp(a2, (const void *)*(v3 - 1), v5) )
  {
    v3 = (_QWORD *)*v3;
    if ( v3 == a1 )
      return 0LL;
  }
  return v3 - 4;
}
