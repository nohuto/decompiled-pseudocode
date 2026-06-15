/*
 * XREFs of sub_180008764 @ 0x180008764
 * Callers:
 *     sub_18003B1A2 @ 0x18003B1A2 (sub_18003B1A2.c)
 *     sub_18003BBFE @ 0x18003BBFE (sub_18003BBFE.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_0 @ 0x18003C141 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18003C141.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_3 @ 0x18003CCA0 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_3.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall sub_180008764(__int64 a1)
{
  RPC_STATUS result; // eax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    return RpcRevertToSelf();
  }
  return result;
}
