/*
 * XREFs of _Xp_movx @ 0x1800BB6A8
 * Callers:
 *     _Dtento @ 0x1800BBB14 (_Dtento.c)
 *     _LDtento @ 0x1800BC5AC (_LDtento.c)
 * Callees:
 *     memcpy_0 @ 0x1800CFDA8 (memcpy_0.c)
 */

void *__fastcall Xp_movx(void *a1, int a2, const void *a3)
{
  memcpy_0(a1, a3, 8LL * a2);
  return a1;
}
