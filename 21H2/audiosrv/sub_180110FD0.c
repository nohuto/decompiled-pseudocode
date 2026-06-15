/*
 * XREFs of sub_180110FD0 @ 0x180110FD0
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_57 @ 0x18011189B (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_57.c)
 * Callees:
 *     sub_18011105C @ 0x18011105C (sub_18011105C.c)
 */

__int64 __fastcall sub_180110FD0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return sub_18011105C();
  }
  return result;
}
