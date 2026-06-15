/*
 * XREFs of sub_1800D4F68 @ 0x1800D4F68
 * Callers:
 *     sub_18007A75E @ 0x18007A75E (sub_18007A75E.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_30 @ 0x1800D6BB8 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_30.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_37 @ 0x1800ED566 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_37.c)
 *     sub_1801104EE @ 0x1801104EE (sub_1801104EE.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_56 @ 0x18011051E (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_56.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 */

void __fastcall sub_1800D4F68(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    sub_18002A504(*(void ***)a1, *(void **)(a1 + 8));
}
