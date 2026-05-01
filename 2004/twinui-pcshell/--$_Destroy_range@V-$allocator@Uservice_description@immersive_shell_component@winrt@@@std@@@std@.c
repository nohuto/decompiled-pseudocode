/*
 * XREFs of ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@0AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x180461250
 * Callers:
 *     ??$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@1Uforward_iterator_tag@1@@Z @ 0x180461294 (--$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@Uservice_des.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$80 @ 0x180461554 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_winrt--immersi.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$82 @ 0x18046158C (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_18046158C.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$81 @ 0x1804615F6 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_1804615F6.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$84 @ 0x180461632 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_180461632.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$83 @ 0x18046167B (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_18046167B.c)
 *     ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x18046177C (--$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@V-$alloc.c)
 *     ?_Change_array@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXQEAUservice_description@immersive_shell_component@winrt@@_K1@Z @ 0x180465D20 (-_Change_array@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Userv.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x180465EFC (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18042F94C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 2;
    do
    {
      if ( *v3 )
        winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(v3);
      v3 += 4;
      result = v3 - 2;
    }
    while ( v3 - 2 != a2 );
  }
  return result;
}
