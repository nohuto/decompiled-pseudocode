/*
 * XREFs of sub_1C0002C20 @ 0x1C0002C20
 * Callers:
 *     sub_1C0001F40 @ 0x1C0001F40 (sub_1C0001F40.c)
 *     sub_1C0002B50 @ 0x1C0002B50 (sub_1C0002B50.c)
 * Callees:
 *     sub_1C0001940 @ 0x1C0001940 (sub_1C0001940.c)
 */

char __fastcall sub_1C0002C20(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *i; // rdi
  char result; // al

  v1 = *(_QWORD **)(a1 + 32);
  for ( i = (_QWORD *)(a1 + 32); v1 != i; v1 = (_QWORD *)*v1 )
    result = sub_1C0001940((__int64)(v1 - 10));
  return result;
}
