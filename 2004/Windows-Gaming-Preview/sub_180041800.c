/*
 * XREFs of sub_180041800 @ 0x180041800
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j__o_free @ 0x1800450E0 (j__o_free.c)
 */

__int64 __fastcall sub_180041800(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 v4; // rcx
  __int64 v5; // rdx

  *(_QWORD *)a1 = off_18004DD70;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
    j_j__o_free(v4, a2);
  j_j__o_free(*(_QWORD *)(a1 + 64), a2);
  j_j__o_free(*(_QWORD *)(a1 + 56), v5);
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (v3 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
