/*
 * XREFs of sub_18002E880 @ 0x18002E880
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CDD4 @ 0x18000CDD4 (sub_18000CDD4.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002E880(__int64 a1, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)a1 = &off_18004D568;
  *(_QWORD *)(a1 + 8) = off_18004D548;
  ++*(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 16) = off_18004D510;
  *(_QWORD *)(a1 + 24) = off_18004D4C8;
  v4 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( v4 )
    _o_free(v4);
  sub_18000CDD4(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 136LL);
  return a1;
}
