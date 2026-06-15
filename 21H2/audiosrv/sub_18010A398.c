/*
 * XREFs of sub_18010A398 @ 0x18010A398
 * Callers:
 *     sub_18010A534 @ 0x18010A534 (sub_18010A534.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_18010A184 @ 0x18010A184 (sub_18010A184.c)
 */

_QWORD *__fastcall sub_18010A398(_QWORD *a1, int *a2, int *a3, __int64 *a4)
{
  LPVOID v8; // rax
  __int64 v9; // rcx
  _QWORD *result; // rax

  v8 = sub_180055F40(0x30uLL);
  v9 = 0LL;
  if ( v8 )
    v9 = sub_18010A184((__int64)v8, a2, a3, a4);
  *a1 = v9 + 16;
  result = a1;
  a1[1] = v9;
  return result;
}
