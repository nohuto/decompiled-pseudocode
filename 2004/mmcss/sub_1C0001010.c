/*
 * XREFs of sub_1C0001010 @ 0x1C0001010
 * Callers:
 *     sub_1C0001170 @ 0x1C0001170 (sub_1C0001170.c)
 *     sub_1C0001F40 @ 0x1C0001F40 (sub_1C0001F40.c)
 *     sub_1C00021A0 @ 0x1C00021A0 (sub_1C00021A0.c)
 *     sub_1C0002A80 @ 0x1C0002A80 (sub_1C0002A80.c)
 *     sub_1C0002B50 @ 0x1C0002B50 (sub_1C0002B50.c)
 * Callees:
 *     sub_1C0001B10 @ 0x1C0001B10 (sub_1C0001B10.c)
 */

__int64 __fastcall sub_1C0001010(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  _QWORD *i; // rdi
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 32);
  for ( i = (_QWORD *)(a1 + 32); v2 != i; v2 = (_QWORD *)*v2 )
    result = sub_1C0001B10(v2 - 10, a2);
  return result;
}
