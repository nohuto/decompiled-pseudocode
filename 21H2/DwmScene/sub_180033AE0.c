/*
 * XREFs of sub_180033AE0 @ 0x180033AE0
 * Callers:
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 *     sub_1800366DC @ 0x1800366DC (sub_1800366DC.c)
 *     sub_1801268DA @ 0x1801268DA (sub_1801268DA.c)
 *     unknown_libname_121 @ 0x1801269FA (unknown_libname_121.c)
 *     ?dtor$0@?0??set@?$task_completion_event@E@Concurrency@@QEBA_NE@Z@4HA @ 0x180126A7E (-dtor$0@-0--set@-$task_completion_event@E@Concurrency@@QEBA_NE@Z@4HA.c)
 *     sub_18012EB93 @ 0x18012EB93 (sub_18012EB93.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_6 @ 0x18012EB9F (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18012EB9F.c)
 *     unknown_libname_149 @ 0x18012EBAB (unknown_libname_149.c)
 *     unknown_libname_78 @ 0x18012EBB7 (unknown_libname_78.c)
 *     sub_18012F07C @ 0x18012F07C (sub_18012F07C.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA_6 @ 0x18012F088 (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@st_ea_18012F088.c)
 *     sub_18012F094 @ 0x18012F094 (sub_18012F094.c)
 *     sub_18012F304 @ 0x18012F304 (sub_18012F304.c)
 *     sub_18012F879 @ 0x18012F879 (sub_18012F879.c)
 *     sub_18012F8D9 @ 0x18012F8D9 (sub_18012F8D9.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180033AE0(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (a1[2] - v2) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x180033B3CLL);
      }
      v2 = v4;
    }
    result = j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
