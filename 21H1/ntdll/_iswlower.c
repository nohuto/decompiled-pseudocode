/*
 * XREFs of _iswlower @ 0x4B2F8660
 * Callers:
 *     <none>
 * Callees:
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 */

int __cdecl iswlower(wint_t C)
{
  return iswctype(C, 2u);
}
