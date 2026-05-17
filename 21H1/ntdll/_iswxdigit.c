/*
 * XREFs of _iswxdigit @ 0x4B2F86C0
 * Callers:
 *     <none>
 * Callees:
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 */

int __cdecl iswxdigit(wint_t C)
{
  return iswctype(C, 0x80u);
}
