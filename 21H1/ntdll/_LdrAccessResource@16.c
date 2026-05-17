/*
 * XREFs of _LdrAccessResource@16 @ 0x4B308B00
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpAccessResourceData@16 @ 0x4B2BD414 (_LdrpAccessResourceData@16.c)
 */

int __stdcall LdrAccessResource(int a1, unsigned int a2, int a3, int a4)
{
  return LdrpAccessResourceData(a1, a2, a3, a4);
}
