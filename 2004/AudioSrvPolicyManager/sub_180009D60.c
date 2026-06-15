/*
 * XREFs of sub_180009D60 @ 0x180009D60
 * Callers:
 *     sub_18003BE78 @ 0x18003BE78 (sub_18003BE78.c)
 *     sub_18003BF88 @ 0x18003BF88 (sub_18003BF88.c)
 *     sub_18003C582 @ 0x18003C582 (sub_18003C582.c)
 *     unknown_libname_16 @ 0x18003C5FE (unknown_libname_16.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_1 @ 0x18003C634 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18003C634.c)
 *     sub_18003C658 @ 0x18003C658 (sub_18003C658.c)
 *     unknown_libname_18 @ 0x18003C67C (unknown_libname_18.c)
 *     sub_18003C6A0 @ 0x18003C6A0 (sub_18003C6A0.c)
 *     sub_18003C6C4 @ 0x18003C6C4 (sub_18003C6C4.c)
 *     sub_18003CC22 @ 0x18003CC22 (sub_18003CC22.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_5 @ 0x18003CC34 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18003CC34.c)
 *     unknown_libname_27 @ 0x18003CC46 (unknown_libname_27.c)
 *     sub_18003CCD6 @ 0x18003CCD6 (sub_18003CCD6.c)
 *     sub_18003CCEC @ 0x18003CCEC (sub_18003CCEC.c)
 *     sub_18003CD02 @ 0x18003CD02 (sub_18003CD02.c)
 *     sub_18003CD18 @ 0x18003CD18 (sub_18003CD18.c)
 *     ?dtor$6@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x18003CE18 (-dtor$6@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     unknown_libname_31 @ 0x18003CE2E (unknown_libname_31.c)
 *     sub_18003CE44 @ 0x18003CE44 (sub_18003CE44.c)
 *     sub_18003CE5A @ 0x18003CE5A (sub_18003CE5A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180009D60(_QWORD *a1)
{
  volatile signed __int32 *v1; // rdx
  signed __int32 v2; // eax
  bool v3; // cc
  __int64 result; // rax

  v1 = (volatile signed __int32 *)(*a1 - 24LL);
  v2 = _InterlockedExchangeAdd(v1 + 4, 0xFFFFFFFF);
  v3 = v2 <= 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 8LL))(*(_QWORD *)v1);
  return result;
}
