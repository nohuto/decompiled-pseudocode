/*
 * XREFs of sub_180061478 @ 0x180061478
 * Callers:
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_2 @ 0x1801249F8 (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_1801249F8.c)
 *     sub_1801257AA @ 0x1801257AA (sub_1801257AA.c)
 *     sub_1801257CE @ 0x1801257CE (sub_1801257CE.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_19 @ 0x180125852 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180125852.c)
 *     sub_18012586A @ 0x18012586A (sub_18012586A.c)
 *     sub_180125972 @ 0x180125972 (sub_180125972.c)
 *     sub_180125AAA @ 0x180125AAA (sub_180125AAA.c)
 *     ?dtor$0@?0??_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z@4HA @ 0x180125B04 (-dtor$0@-0--_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@st.c)
 *     ?dtor$1@?0??_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z@4HA @ 0x180125B10 (-dtor$1@-0--_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@st.c)
 *     ?dtor$0@?0???0_Pad@std@@QEAA@XZ@4HA @ 0x1801271BC (-dtor$0@-0---0_Pad@std@@QEAA@XZ@4HA.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA_3 @ 0x1801276CC (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@st_ea_1801276CC.c)
 * Callees:
 *     sub_18006125C @ 0x18006125C (sub_18006125C.c)
 */

__int64 __fastcall sub_180061478(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return sub_18006125C(*(_QWORD *)a1, 0);
  return result;
}
