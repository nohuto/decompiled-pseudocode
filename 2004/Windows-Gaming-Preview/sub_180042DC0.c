/*
 * XREFs of sub_180042DC0 @ 0x180042DC0
 * Callers:
 *     sub_180046EFF @ 0x180046EFF (sub_180046EFF.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_10 @ 0x180046F11 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_10.c)
 * Callees:
 *     j__o_free @ 0x1800450E0 (j__o_free.c)
 */

__int64 __fastcall sub_180042DC0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return j__o_free(v1);
  return result;
}
