/*
 * XREFs of ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x18043D8DC
 * Callers:
 *     ??$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@1Uforward_iterator_tag@1@@Z @ 0x18043D3F4 (--$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@Uservice_des.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$82 @ 0x18043D6EC (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_18043D6EC.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$84 @ 0x18043D792 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_18043D792.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@0AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x18043D3B0 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 */

__int64 *__fastcall std::_Uninitialized_move<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *,std::allocator<winrt::immersive_shell_component::service_description>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  char *v5; // r8
  __int64 v6; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a1 + 16;
    v5 = (char *)a3 - a1;
    do
    {
      *(_OWORD *)v3 = *(_OWORD *)(v4 - 16);
      v6 = *(_QWORD *)v4;
      v3 += 4;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)&v5[v4] = v6;
      *(_DWORD *)&v5[v4 + 8] = *(_DWORD *)(v4 + 8);
      v4 += 32LL;
    }
    while ( v4 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v3, v3);
  return v3;
}
