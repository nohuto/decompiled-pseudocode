/*
 * XREFs of _wcscat @ 0x4B2FA610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcscat(wchar_t *Destination, const wchar_t *Source)
{
  wchar_t *result; // eax
  wchar_t *i; // edx
  const wchar_t *v4; // esi
  int v5; // edx
  wchar_t v6; // cx

  result = Destination;
  for ( i = Destination; *i; ++i )
    ;
  v4 = Source;
  v5 = (char *)i - (char *)Source;
  do
  {
    v6 = *v4;
    *(const wchar_t *)((char *)v4 + v5) = *v4;
    ++v4;
  }
  while ( v6 );
  return result;
}
