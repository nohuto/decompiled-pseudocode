/*
 * XREFs of sub_1800F0670 @ 0x1800F0670
 * Callers:
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_26 @ 0x1800F103F (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_26.c)
 *     unknown_libname_123 @ 0x1800F1057 (unknown_libname_123.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

BOOL __fastcall sub_1800F0670(__int64 **a1)
{
  __int64 *v1; // rbx
  BOOL result; // eax

  v1 = *a1;
  if ( *a1 )
  {
    sub_18000F708(*a1);
    return sub_18006A148(v1);
  }
  return result;
}
