/*
 * XREFs of sub_1800740C0 @ 0x1800740C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CD9A8 @ 0x1800CD9A8 (sub_1800CD9A8.c)
 */

__int64 __fastcall sub_1800740C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 result; // rax

  v2 = a1 + 8;
  v3 = a2 + 1;
  *a2 = off_18014B2E0;
  sub_1800CD9A8(a2 + 1, a1 + 8);
  result = *(_QWORD *)(v2 + 8);
  v3[1] = result;
  return result;
}
