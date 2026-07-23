/*
 * XREFs of DrvDbValidateDriverDatabaseName @ 0x14097E92C
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x140630C80 (DrvDbDispatchDriverDatabase.c)
 * Callees:
 *     wcschr @ 0x1403D4080 (wcschr.c)
 */

__int64 __fastcall DrvDbValidateDriverDatabaseName(__int64 a1, const wchar_t *a2)
{
  unsigned int v2; // edi
  wchar_t *v4; // rax
  wchar_t *v5; // rax

  v2 = 0;
  if ( *a2 != 64 || (v4 = wcschr(a2 + 1, 0x3Au)) == 0LL || (v5 = v4 + 1) == 0LL )
    v5 = (wchar_t *)a2;
  if ( v5 != a2 || wcschr(a2, 0x5Cu) || *a2 == 64 )
    return (unsigned int)-1073741773;
  return v2;
}
