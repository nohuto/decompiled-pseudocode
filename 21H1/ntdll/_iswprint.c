/*
 * XREFs of _iswprint @ 0x4B2F8680
 * Callers:
 *     <none>
 * Callees:
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 */

int __cdecl iswprint(wint_t C)
{
  return iswctype(C, 0x157u);
}
