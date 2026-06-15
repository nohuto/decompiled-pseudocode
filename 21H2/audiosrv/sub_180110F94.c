/*
 * XREFs of sub_180110F94 @ 0x180110F94
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_58 @ 0x1801118A7 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_58.c)
 * Callees:
 *     sub_180112CEC @ 0x180112CEC (sub_180112CEC.c)
 */

__int64 __fastcall sub_180110F94(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return sub_180112CEC(*(_QWORD *)a1, **(_QWORD **)(a1 + 8), **(_QWORD **)(a1 + 16), 1, *(_QWORD *)(a1 + 24));
  }
  return result;
}
