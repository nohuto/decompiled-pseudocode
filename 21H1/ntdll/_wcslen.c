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
  size_t result; // rax

  v1 = String;
  while ( *v1++ )
    ;
  LODWORD(result) = v1 - String - 1;
  return result;
}
