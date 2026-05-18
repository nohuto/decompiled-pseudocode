/*
 * XREFs of sub_1800BA790 @ 0x1800BA790
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800AA0C0 @ 0x1800AA0C0 (sub_1800AA0C0.c)
 */

bool __fastcall sub_1800BA790(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  int v3; // ebx

  v2 = *a1;
  v3 = sub_1800AA0C0(*a2);
  return (int)sub_1800AA0C0(v2) > v3;
}
