/*
 * XREFs of __lfind @ 0x4B2F6E30
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     @_guard_check_icall@4 @ 0x4B2F4CAB (@_guard_check_icall@4.c)
 */

void *__cdecl _lfind(
        const void *Key,
        const void *Base,
        unsigned int *NumOfElements,
        unsigned int SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  int v5; // esi
  char *v6; // edi

  v5 = 0;
  if ( !Key || !NumOfElements || (v6 = (char *)Base) == 0 && *NumOfElements || !SizeOfElements || !CompareFunction )
  {
    _invalid_parameter();
    return 0;
  }
  if ( !*NumOfElements )
    return 0;
  while ( CompareFunction(Key, v6) )
  {
    v6 += SizeOfElements;
    if ( ++v5 >= *NumOfElements )
      return 0;
  }
  return v6;
}
