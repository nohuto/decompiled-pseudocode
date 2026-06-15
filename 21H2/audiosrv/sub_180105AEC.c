/*
 * XREFs of sub_180105AEC @ 0x180105AEC
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_50 @ 0x180105F0D (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_50.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010B9A0 @ 0x18010B9A0 (sub_18010B9A0.c)
 */

__int64 __fastcall sub_180105AEC(_QWORD *a1)
{
  __int64 result; // rax

  result = sub_18010B9A0();
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
