/*
 * XREFs of _iswalpha @ 0x4B2F85E0
 * Callers:
 *     <none>
 * Callees:
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
