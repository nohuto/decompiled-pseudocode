/*
 * XREFs of sub_1800C29AC @ 0x1800C29AC
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_18 @ 0x18007A1D3 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_18.c)
 * Callees:
 *     sub_180036FA0 @ 0x180036FA0 (sub_180036FA0.c)
 */

__int64 __fastcall sub_1800C29AC(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_180036FA0(result);
  }
  return result;
}
