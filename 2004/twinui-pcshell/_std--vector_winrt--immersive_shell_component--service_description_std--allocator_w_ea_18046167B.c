/*
 * XREFs of _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$83 @ 0x18046167B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008DF14 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@0AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x180461250 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 */

void __fastcall __noreturn std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch_83(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx

  v3 = *(_QWORD *)(a2 + 112);
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(
    *(__int64 **)(a2 + 128),
    *(__int64 **)(v3 + 8));
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(a2 + 120);
  throw;
}
