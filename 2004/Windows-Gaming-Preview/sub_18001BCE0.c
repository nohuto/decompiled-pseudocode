/*
 * XREFs of sub_18001BCE0 @ 0x18001BCE0
 * Callers:
 *     sub_18004666B @ 0x18004666B (sub_18004666B.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA @ 0x18004667D (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA @ 0x18004668F (-dtor$0@-0--_Getcat@-$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18001BCE0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    if ( v2 != a1 )
      result = j_j__o_free(v2, 40LL);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
