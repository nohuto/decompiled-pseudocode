/*
 * XREFs of sub_180109B18 @ 0x180109B18
 * Callers:
 *     sub_1801059D0 @ 0x1801059D0 (sub_1801059D0.c)
 *     sub_180109C50 @ 0x180109C50 (sub_180109C50.c)
 *     sub_18010C820 @ 0x18010C820 (sub_18010C820.c)
 * Callees:
 *     sub_180109AB0 @ 0x180109AB0 (sub_180109AB0.c)
 */

__int64 (__fastcall **__fastcall sub_180109B18(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax

  *a1 = off_180149720;
  sub_180109AB0((__int64)(a1 + 9));
  result = off_18014ADD0;
  a1[1] = off_18014ADD0;
  return result;
}
