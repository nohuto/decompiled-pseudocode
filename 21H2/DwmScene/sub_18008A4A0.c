/*
 * XREFs of sub_18008A4A0 @ 0x18008A4A0
 * Callers:
 *     sub_18008B58C @ 0x18008B58C (sub_18008B58C.c)
 *     ?dtor$6@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_0 @ 0x18012BA3F (-dtor$6@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_0.c)
 * Callees:
 *     sub_18008A50C @ 0x18008A50C (sub_18008A50C.c)
 *     sub_18008B494 @ 0x18008B494 (sub_18008B494.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18008A4A0(__int64 *a1, __int64 a2)
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
      sub_18008A50C(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_18008B494(v6 + 4);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
