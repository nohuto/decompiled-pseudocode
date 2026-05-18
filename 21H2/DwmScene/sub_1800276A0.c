/*
 * XREFs of sub_1800276A0 @ 0x1800276A0
 * Callers:
 *     sub_18012635A @ 0x18012635A (sub_18012635A.c)
 *     sub_18012636D @ 0x18012636D (sub_18012636D.c)
 *     sub_18012D890 @ 0x18012D890 (sub_18012D890.c)
 *     ?dtor$6@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_2 @ 0x18012F261 (-dtor$6@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_2.c)
 * Callees:
 *     sub_180025928 @ 0x180025928 (sub_180025928.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800276A0(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  __int64 *v4; // rcx

  v2 = *a1;
  v3 = *(__int64 **)(v2 + 8);
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      sub_180025928((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
      v4 = v3;
      v3 = (__int64 *)*v3;
      j_j__o_free(v4);
    }
    while ( !*((_BYTE *)v3 + 25) );
    v2 = *a1;
  }
  return j_j__o_free(v2);
}
