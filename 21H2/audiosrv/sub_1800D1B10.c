/*
 * XREFs of sub_1800D1B10 @ 0x1800D1B10
 * Callers:
 *     sub_1800D23B0 @ 0x1800D23B0 (sub_1800D23B0.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 */

void **__fastcall sub_1800D1B10(void **a1, void **a2)
{
  void *v3; // rax
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      sub_180033A70(v4);
  }
  return a1;
}
