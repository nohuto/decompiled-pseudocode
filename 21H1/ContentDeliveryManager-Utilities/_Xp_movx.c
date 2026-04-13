/*
 * XREFs of _Xp_movx @ 0x1800B6F98
 * Callers:
 *     _Dtento @ 0x1800B7404 (_Dtento.c)
 *     _LDtento @ 0x1800B7E9C (_LDtento.c)
 * Callees:
 *     memcpy_0 @ 0x1800CB698 (memcpy_0.c)
 */

void *__fastcall Xp_movx(void *a1, int a2, const void *a3)
{
  memcpy_0(a1, a3, 8LL * a2);
  return a1;
}
