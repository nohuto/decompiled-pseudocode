/*
 * XREFs of _iswgraph @ 0x4B2F8640
 * Callers:
 *     <none>
 * Callees:
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 */

int __cdecl iswgraph(wint_t C)
{
  return iswctype(C, 0x117u);
}
