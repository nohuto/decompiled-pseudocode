/*
 * XREFs of sub_180066D48 @ 0x180066D48
 * Callers:
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_2 @ 0x18012A310 (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_18012A310.c)
 *     sub_18012B0C2 @ 0x18012B0C2 (sub_18012B0C2.c)
 *     sub_18012B0E6 @ 0x18012B0E6 (sub_18012B0E6.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_20 @ 0x18012B16A (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012B16A.c)
 *     sub_18012B182 @ 0x18012B182 (sub_18012B182.c)
 *     sub_18012B28A @ 0x18012B28A (sub_18012B28A.c)
 *     sub_18012B3C2 @ 0x18012B3C2 (sub_18012B3C2.c)
 *     ?dtor$0@?0??_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z@4HA @ 0x18012B41C (-dtor$0@-0--_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@st.c)
 *     ?dtor$1@?0??_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z@4HA @ 0x18012B428 (-dtor$1@-0--_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@st.c)
 *     ?dtor$0@?0???0_Pad@std@@QEAA@XZ@4HA @ 0x18012CAD4 (-dtor$0@-0---0_Pad@std@@QEAA@XZ@4HA.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA_3 @ 0x18012CFE4 (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@st_ea_18012CFE4.c)
 * Callees:
 *     sub_180066B2C @ 0x180066B2C (sub_180066B2C.c)
 */

__int64 __fastcall sub_180066D48(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return sub_180066B2C(*(_QWORD *)a1, 0);
  return result;
}
