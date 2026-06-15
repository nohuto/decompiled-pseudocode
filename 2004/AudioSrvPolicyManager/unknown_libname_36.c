/*
 * XREFs of unknown_libname_36 @ 0x18000A1D0
 * Callers:
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_1 @ 0x18003C473 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_1.c)
 *     sub_18003C485 @ 0x18003C485 (sub_18003C485.c)
 *     sub_18003C5EC @ 0x18003C5EC (sub_18003C5EC.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_6 @ 0x18003C610 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_6.c)
 *     sub_18003C622 @ 0x18003C622 (sub_18003C622.c)
 *     sub_18003C646 @ 0x18003C646 (sub_18003C646.c)
 *     unknown_libname_17 @ 0x18003C66A (unknown_libname_17.c)
 *     sub_18003C68E @ 0x18003C68E (sub_18003C68E.c)
 *     sub_18003C6B2 @ 0x18003C6B2 (sub_18003C6B2.c)
 *     sub_18003C76E @ 0x18003C76E (sub_18003C76E.c)
 *     ?dtor$0@?0???0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA @ 0x18003C8A3 (-dtor$0@-0---0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_36(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
