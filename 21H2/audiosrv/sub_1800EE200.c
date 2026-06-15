/*
 * XREFs of sub_1800EE200 @ 0x1800EE200
 * Callers:
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 *     sub_1800EC88C @ 0x1800EC88C (sub_1800EC88C.c)
 * Callees:
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 */

__int64 *__fastcall sub_1800EE200(__int64 **a1)
{
  __int64 *result; // rax

  sub_1800CD58C(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
