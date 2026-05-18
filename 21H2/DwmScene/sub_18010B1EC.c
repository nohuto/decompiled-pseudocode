/*
 * XREFs of sub_18010B1EC @ 0x18010B1EC
 * Callers:
 *     sub_1800E2104 @ 0x1800E2104 (sub_1800E2104.c)
 *     sub_1800E2214 @ 0x1800E2214 (sub_1800E2214.c)
 *     sub_1800E231C @ 0x1800E231C (sub_1800E231C.c)
 *     sub_1800E2640 @ 0x1800E2640 (sub_1800E2640.c)
 *     sub_1800E278C @ 0x1800E278C (sub_1800E278C.c)
 *     sub_1800E2990 @ 0x1800E2990 (sub_1800E2990.c)
 *     sub_1800E2A48 @ 0x1800E2A48 (sub_1800E2A48.c)
 *     sub_1800E2A7C @ 0x1800E2A7C (sub_1800E2A7C.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_11 @ 0x18012DCA9 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_11.c)
 * Callees:
 *     _Mtx_destroy_in_situ @ 0x18012527C (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010B1EC(__int64 a1)
{
  volatile signed __int32 *v2; // rbx

  Mtx_destroy_in_situ((_Mtx_t)(a1 + 48));
  v2 = *(volatile signed __int32 **)(a1 + 40);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return sub_180012A18((__int64 *)a1);
}
