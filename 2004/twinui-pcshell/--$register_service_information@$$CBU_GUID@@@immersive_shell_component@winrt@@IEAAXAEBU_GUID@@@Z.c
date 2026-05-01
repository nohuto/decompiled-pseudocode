/*
 * XREFs of ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x180461EB4
 * Callers:
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800C6FF8 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@details@winrt@@QEAA@XZ @ 0x1800DC2EC (--0-$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@w.c)
 *     ??0?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@winrt@@QEAA@XZ @ 0x180462090 (--0-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18008E2D8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x1804671B0 (-register_service_information@immersive_shell_component@winrt@@IEAAXU-$array_view@$$CBUservice_d.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::immersive_shell_component::register_service_information<_GUID const>(__int64 a1, __int128 *a2)
{
  __int128 *v2; // [rsp+20h] [rbp-48h] BYREF
  int v3; // [rsp+28h] [rbp-40h]
  __int128 v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]

  v4 = *a2;
  v5 = 0LL;
  v6 = 0;
  v2 = &v4;
  v3 = 1;
  winrt::immersive_shell_component::register_service_information(a1, &v2);
  `eh vector destructor iterator'(
    (char *)&v4,
    32LL,
    1LL,
    (void (*)(void *))winrt::immersive_shell_component::service_description::~service_description);
}
