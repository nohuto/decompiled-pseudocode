/*
 * XREFs of sub_18000D370 @ 0x18000D370
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CDD4 @ 0x18000CDD4 (sub_18000CDD4.c)
 *     sub_18000E230 @ 0x18000E230 (sub_18000E230.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000D370(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  *(_QWORD *)a1 = off_180048E50;
  *(_QWORD *)(a1 + 8) = off_180048E30;
  *(_QWORD *)(a1 + 16) = off_180048DF8;
  *(_QWORD *)(a1 + 24) = off_180048DB0;
  v4 = *(_QWORD *)(a1 + 88);
  v5 = *(unsigned int *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  ++*(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 88) = 0LL;
  sub_18000E230(v4, v5);
  sub_18000CDD4(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 136LL);
  return a1;
}
