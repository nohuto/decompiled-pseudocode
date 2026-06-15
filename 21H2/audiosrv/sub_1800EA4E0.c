/*
 * XREFs of sub_1800EA4E0 @ 0x1800EA4E0
 * Callers:
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_7 @ 0x180076EA0 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_180076EA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800EA4E0(__int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_QWORD *)(result + 152) = 0LL;
  }
  return result;
}
