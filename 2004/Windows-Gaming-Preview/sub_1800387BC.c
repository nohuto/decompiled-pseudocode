/*
 * XREFs of sub_1800387BC @ 0x1800387BC
 * Callers:
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_3 @ 0x180046A72 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_3.c)
 *     unknown_libname_23 @ 0x180046A84 (unknown_libname_23.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA @ 0x180046AF0 (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA.c)
 *     sub_180046B80 @ 0x180046B80 (sub_180046B80.c)
 *     unknown_libname_24 @ 0x180046BA4 (unknown_libname_24.c)
 *     sub_180046D13 @ 0x180046D13 (sub_180046D13.c)
 *     sub_180046D4E @ 0x180046D4E (sub_180046D4E.c)
 *     sub_180046D84 @ 0x180046D84 (sub_180046D84.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800387BC(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *a1 = 0LL;
  }
}
