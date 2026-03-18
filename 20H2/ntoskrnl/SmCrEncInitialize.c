/*
 * XREFs of SmCrEncInitialize @ 0x1406F0468
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403381E4 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

void *__fastcall SmCrEncInitialize(_DWORD *a1)
{
  void *result; // rax

  memset(a1, 0, 0x90uLL);
  a1[2] = 1;
  result = memset(a1 + 16, 0, 0x50uLL);
  a1[14] = 88;
  a1[15] = 1;
  return result;
}
