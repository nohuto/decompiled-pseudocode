/*
 * XREFs of sub_1800C0060 @ 0x1800C0060
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800AF990 @ 0x1800AF990 (sub_1800AF990.c)
 */

bool __fastcall sub_1800C0060(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  int v3; // ebx

  v2 = *a1;
  v3 = sub_1800AF990(*a2);
  return (int)sub_1800AF990(v2) > v3;
}
