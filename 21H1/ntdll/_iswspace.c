/*
 * XREFs of _iswspace @ 0x4B2F86A0
 * Callers:
 *     <none>
 * Callees:
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
