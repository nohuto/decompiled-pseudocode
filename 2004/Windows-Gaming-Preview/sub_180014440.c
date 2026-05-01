/*
 * XREFs of sub_180014440 @ 0x180014440
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CDD4 @ 0x18000CDD4 (sub_18000CDD4.c)
 *     sub_180014F44 @ 0x180014F44 (sub_180014F44.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180014440(__int64 a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  *(_QWORD *)a1 = &off_180049868;
  *(_QWORD *)(a1 + 8) = off_180049848;
  v4 = *(unsigned int *)(a1 + 72);
  ++*(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 16) = off_180049810;
  *(_QWORD *)(a1 + 24) = off_1800497C8;
  v5 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  sub_180014F44(v5, v4);
  sub_18000CDD4(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 136LL);
  return a1;
}
