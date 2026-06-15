/*
 * XREFs of sub_180003BEC @ 0x180003BEC
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA @ 0x18003B0DD (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA.c)
 * Callees:
 *     sub_180003BBC @ 0x180003BBC (sub_180003BBC.c)
 */

BOOL __fastcall sub_180003BEC(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return sub_180003BBC(v1);
  return result;
}
