/*
 * XREFs of _wcslen @ 0x4B2FA770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

size_t __cdecl wcslen(const wchar_t *String)
{
  const wchar_t *v1; // eax

  v1 = String;
  while ( *v1++ )
    ;
  return v1 - String - 1;
}
