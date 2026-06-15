/*
 * XREFs of sub_1800C6238 @ 0x1800C6238
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA @ 0x18006DDFF (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA.c)
 *     sub_1800D1EC6 @ 0x1800D1EC6 (sub_1800D1EC6.c)
 *     sub_1800D2135 @ 0x1800D2135 (sub_1800D2135.c)
 * Callees:
 *     sub_180046F70 @ 0x180046F70 (sub_180046F70.c)
 */

__int64 __fastcall sub_1800C6238(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return sub_180046F70(result);
  return result;
}
