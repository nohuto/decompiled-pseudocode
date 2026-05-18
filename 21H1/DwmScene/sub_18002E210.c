/*
 * XREFs of sub_18002E210 @ 0x18002E210
 * Callers:
 *     sub_180030200 @ 0x180030200 (sub_180030200.c)
 *     sub_180030E0C @ 0x180030E0C (sub_180030E0C.c)
 *     sub_180120FC2 @ 0x180120FC2 (sub_180120FC2.c)
 *     unknown_libname_119 @ 0x1801210E2 (unknown_libname_119.c)
 *     ?dtor$0@?0??set@?$task_completion_event@E@Concurrency@@QEBA_NE@Z@4HA @ 0x180121166 (-dtor$0@-0--set@-$task_completion_event@E@Concurrency@@QEBA_NE@Z@4HA.c)
 *     sub_18012927B @ 0x18012927B (sub_18012927B.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_6 @ 0x180129287 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_180129287.c)
 *     unknown_libname_147 @ 0x180129293 (unknown_libname_147.c)
 *     unknown_libname_76 @ 0x18012929F (unknown_libname_76.c)
 *     sub_180129764 @ 0x180129764 (sub_180129764.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA_6 @ 0x180129770 (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@st_ea_180129770.c)
 *     sub_18012977C @ 0x18012977C (sub_18012977C.c)
 *     sub_1801299EC @ 0x1801299EC (sub_1801299EC.c)
 *     sub_180129F61 @ 0x180129F61 (sub_180129F61.c)
 *     sub_180129FC1 @ 0x180129FC1 (sub_180129FC1.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18002E210(__int64 *a1)
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
        JUMPOUT(0x18002E26CLL);
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
