/*
 * XREFs of sub_18002E2A4 @ 0x18002E2A4
 * Callers:
 *     sub_18012663B @ 0x18012663B (sub_18012663B.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA_5 @ 0x18012D9EE (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@st_ea_18012D9EE.c)
 *     sub_18012DC96 @ 0x18012DC96 (sub_18012DC96.c)
 * Callees:
 *     sub_18002C9B0 @ 0x18002C9B0 (sub_18002C9B0.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18002E2A4(__int64 *a1)
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
      sub_18002C9B0((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
      v4 = v3;
      v3 = (__int64 *)*v3;
      j_j__o_free(v4);
    }
    while ( !*((_BYTE *)v3 + 25) );
    v2 = *a1;
  }
  return j_j__o_free(v2);
}
