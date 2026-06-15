/*
 * XREFs of sub_18000DE50 @ 0x18000DE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18000DE50(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  *a2 = off_18003EC40;
  v2 = a1[1];
  a1[1] = 0LL;
  a2[1] = v2;
  a2[2] = a1[2];
  v3 = a1[3];
  a1[3] = 0LL;
  a2[3] = v3;
  return a2;
}
