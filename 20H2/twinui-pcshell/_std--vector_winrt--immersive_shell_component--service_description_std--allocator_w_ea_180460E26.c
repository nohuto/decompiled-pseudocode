/*
 * XREFs of _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$81 @ 0x180460E26
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008DA74 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@0AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x180460A80 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 */

void __fastcall __noreturn std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch_81(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx

  v2 = a2[14];
  v3 = a2[15];
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(
    (__int64 *)(v3 + 32LL * a2[17]),
    *(__int64 **)(v2 + 8));
  *(_QWORD *)(v2 + 8) = v3;
  throw;
}
