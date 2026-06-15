/*
 * XREFs of sub_1800712C0 @ 0x1800712C0
 * Callers:
 *     sub_1800F0AF8 @ 0x1800F0AF8 (sub_1800F0AF8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800712C0(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  a1[1] = a2;
  *a1 = off_18014AA28;
  result = a1;
  a1[7] = a1;
  return result;
}
