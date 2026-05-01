/*
 * XREFs of sub_180019380 @ 0x180019380
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014F44 @ 0x180014F44 (sub_180014F44.c)
 *     sub_180019324 @ 0x180019324 (sub_180019324.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180019380(__int64 a1, char a2)
{
  unsigned int v4; // edx
  HSTRING *v5; // rcx

  *(_QWORD *)a1 = off_180049DA0;
  *(_QWORD *)(a1 + 8) = off_180049D80;
  v4 = *(_DWORD *)(a1 + 40);
  ++*(_DWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 16) = off_180049D48;
  v5 = *(HSTRING **)(a1 + 56);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  sub_180014F44(v5, v4);
  sub_180019324(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 104LL);
  return a1;
}
