/*
 * XREFs of sub_18001DC30 @ 0x18001DC30
 * Callers:
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_2 @ 0x1800468E8 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_1800468E8.c)
 * Callees:
 *     sub_18001F108 @ 0x18001F108 (sub_18001F108.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18001DC30(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 *v5; // rsi
  __int64 v6; // rcx

  v2 = *a1;
  v3 = *(__int64 **)(v2 + 8);
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      sub_18001F108(a1, a1, v3[2]);
      v5 = v3;
      v3 = (__int64 *)*v3;
      v6 = v5[6];
      if ( v6 )
        j_j__o_free(v6, v4);
      j_j__o_free(v5, 56LL);
    }
    while ( !*((_BYTE *)v3 + 25) );
    v2 = *a1;
  }
  return j_j__o_free(v2, 56LL);
}
