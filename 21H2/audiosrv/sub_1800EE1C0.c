/*
 * XREFs of sub_1800EE1C0 @ 0x1800EE1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800EE1C0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  *a2 = off_18014A9F8;
  a2[1] = a1[1];
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[2] = a1[2];
  a2[3] = a1[3];
  result = a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  return result;
}
