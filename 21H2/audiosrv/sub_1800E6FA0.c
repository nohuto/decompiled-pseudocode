/*
 * XREFs of sub_1800E6FA0 @ 0x1800E6FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800E6FA0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  v2 = (_QWORD *)(a1 + 8);
  *a2 = off_18014A4A8;
  a2[1] = 0LL;
  if ( a2 + 1 != v2 )
  {
    a2[1] = *v2;
    *v2 = 0LL;
  }
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[2] = v2[1];
  a2[3] = v2[2];
  result = a2;
  v2[1] = 0LL;
  v2[2] = 0LL;
  return result;
}
