/*
 * XREFs of sub_1800EA51C @ 0x1800EA51C
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_38 @ 0x1800ED572 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_38.c)
 * Callees:
 *     sub_1800EA6C0 @ 0x1800EA6C0 (sub_1800EA6C0.c)
 */

__int64 __fastcall sub_1800EA51C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return sub_1800EA6C0();
  }
  return result;
}
