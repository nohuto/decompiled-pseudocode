/*
 * XREFs of sub_1800D0B5C @ 0x1800D0B5C
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_19 @ 0x18007A5D7 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_19.c)
 * Callees:
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 */

__int64 __fastcall sub_1800D0B5C(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_18002B930(result);
  }
  return result;
}
