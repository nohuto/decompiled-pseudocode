/*
 * XREFs of sub_1800D4F8C @ 0x1800D4F8C
 * Callers:
 *     unknown_libname_13 @ 0x18007552D (unknown_libname_13.c)
 *     sub_180075552 @ 0x180075552 (sub_180075552.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_5 @ 0x180075606 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_5.c)
 *     sub_18007BD8F @ 0x18007BD8F (sub_18007BD8F.c)
 *     sub_18007C8D6 @ 0x18007C8D6 (sub_18007C8D6.c)
 *     sub_18007CA9C @ 0x18007CA9C (sub_18007CA9C.c)
 *     sub_18007CAAE @ 0x18007CAAE (sub_18007CAAE.c)
 *     sub_1800EC37F @ 0x1800EC37F (sub_1800EC37F.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall sub_1800D4F8C(HKEY *a1)
{
  HKEY v1; // rcx
  LSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return RegCloseKey(v1);
  return result;
}
