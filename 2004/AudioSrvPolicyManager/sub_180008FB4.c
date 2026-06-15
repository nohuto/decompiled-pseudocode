/*
 * XREFs of sub_180008FB4 @ 0x180008FB4
 * Callers:
 *     sub_18003B137 @ 0x18003B137 (sub_18003B137.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA @ 0x18003BB0F (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA.c)
 *     unknown_libname_9 @ 0x18003BFC4 (unknown_libname_9.c)
 *     unknown_libname_15 @ 0x18003C4FD (unknown_libname_15.c)
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

BOOL __fastcall sub_180008FB4(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return sub_180039D98(v1);
  return result;
}
