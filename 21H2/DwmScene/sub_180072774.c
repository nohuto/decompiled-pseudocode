/*
 * XREFs of sub_180072774 @ 0x180072774
 * Callers:
 *     sub_180077A20 @ 0x180077A20 (sub_180077A20.c)
 *     sub_18007B4CC @ 0x18007B4CC (sub_18007B4CC.c)
 *     sub_1800D47C4 @ 0x1800D47C4 (sub_1800D47C4.c)
 *     sub_1800D4850 @ 0x1800D4850 (sub_1800D4850.c)
 * Callees:
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 *     sub_180072990 @ 0x180072990 (sub_180072990.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180072774(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rbx

  v4 = *a1;
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_180072990(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_18006B3C4(v6 + 4, 0);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
