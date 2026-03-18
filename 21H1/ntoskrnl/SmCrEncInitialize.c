/*
 * XREFs of SmCrEncInitialize @ 0x140655810
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402CB5FC (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
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
