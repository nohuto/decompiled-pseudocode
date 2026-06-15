/*
 * XREFs of sub_1800F0804 @ 0x1800F0804
 * Callers:
 *     sub_1800F05E0 @ 0x1800F05E0 (sub_1800F05E0.c)
 *     sub_1800F16AC @ 0x1800F16AC (sub_1800F16AC.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800F070C @ 0x1800F070C (sub_1800F070C.c)
 */

void **__fastcall sub_1800F0804(void **a1, void **a2)
{
  void *v3; // rax
  void *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      sub_1800F070C((__int64)v4);
      sub_18006A148(v4);
    }
  }
  return a1;
}
