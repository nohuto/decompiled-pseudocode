/*
 * XREFs of _wcscmp @ 0x4B2FA6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl wcscmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v2; // esi
  int v3; // edx
  int v4; // eax

  v2 = String2;
  v3 = *String1 - *String2;
  if ( !v3 )
  {
    LOWORD(v4) = *String2;
    do
    {
      if ( !(_WORD)v4 )
        break;
      v4 = *++v2;
      v3 = *(const wchar_t *)((char *)v2 + (char *)String1 - (char *)String2) - v4;
    }
    while ( !v3 );
  }
  return (v3 > 0) - ((unsigned int)v3 >> 31);
}
