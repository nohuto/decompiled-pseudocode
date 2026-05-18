/*
 * XREFs of sub_18010591C @ 0x18010591C
 * Callers:
 *     sub_1800DC834 @ 0x1800DC834 (sub_1800DC834.c)
 *     sub_1800DC944 @ 0x1800DC944 (sub_1800DC944.c)
 *     sub_1800DCA4C @ 0x1800DCA4C (sub_1800DCA4C.c)
 *     sub_1800DCD70 @ 0x1800DCD70 (sub_1800DCD70.c)
 *     sub_1800DCEBC @ 0x1800DCEBC (sub_1800DCEBC.c)
 *     sub_1800DD0C0 @ 0x1800DD0C0 (sub_1800DD0C0.c)
 *     sub_1800DD178 @ 0x1800DD178 (sub_1800DD178.c)
 *     sub_1800DD1AC @ 0x1800DD1AC (sub_1800DD1AC.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_11 @ 0x180128391 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_11.c)
 * Callees:
 *     _Mtx_destroy_in_situ @ 0x18011F9AC (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010591C(__int64 a1)
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
  return sub_180012938((__int64 *)a1);
}
