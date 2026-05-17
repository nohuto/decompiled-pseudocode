/*
 * XREFs of _LdrFindResourceDirectory_U@16 @ 0x4B33F160
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 */

int __stdcall LdrFindResourceDirectory_U(int a1, int a2, unsigned int a3, int **a4)
{
  return LdrpSearchResourceSection_U(a1, a2, a3, 2, a4);
}
