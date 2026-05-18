/*
 * XREFs of sub_1801212B8 @ 0x1801212B8
 * Callers:
 *     sub_180130FD0 @ 0x180130FD0 (sub_180130FD0.c)
 * Callees:
 *     sub_18008A568 @ 0x18008A568 (sub_18008A568.c)
 *     sub_180121378 @ 0x180121378 (sub_180121378.c)
 */

void __fastcall sub_1801212B8(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 *v3; // rcx
  unsigned __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_180121378(a1 + 1);
  v2 = a1[4];
  v3 = (unsigned __int64 *)a1[3];
  v4[0] = a1[1];
  sub_18008A568(v3, v2, v4);
}
