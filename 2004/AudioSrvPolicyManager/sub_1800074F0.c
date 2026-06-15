/*
 * XREFs of sub_1800074F0 @ 0x1800074F0
 * Callers:
 *     sub_18003B1B4 @ 0x18003B1B4 (sub_18003B1B4.c)
 *     sub_18003B1C6 @ 0x18003B1C6 (sub_18003B1C6.c)
 *     sub_18003CB89 @ 0x18003CB89 (sub_18003CB89.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_7 @ 0x18003CBD1 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_7.c)
 *     sub_18003CC8E @ 0x18003CC8E (sub_18003CC8E.c)
 *     unknown_libname_28 @ 0x18003CCC4 (unknown_libname_28.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall sub_1800074F0(HKEY *a1)
{
  HKEY v1; // rcx
  LSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return RegCloseKey(v1);
  return result;
}
