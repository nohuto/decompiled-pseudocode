/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x18046435C
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800CA590 (-GetRuntimeClassName@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?GetRuntimeClassName@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabHost@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800CA5B0 (-GetRuntimeClassName@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Wi_ea_1800CA5B0.c)
 *     ?GetRuntimeClassName@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800CA5E0 (-GetRuntimeClassName@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAPEAUHSTR.c)
 *     ?GetRuntimeClassName@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800DC8D0 (-GetRuntimeClassName@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@.c)
 *     ?GetRuntimeClassName@?$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180463CB0 (-GetRuntimeClassName@-$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator.c)
 *     ?GetRuntimeClassName@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180463CD0 (-GetRuntimeClassName@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@W.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C628 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  HSTRING v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    a1 = 32LL;
  try
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    v4 = *v3;
    *v3 = 0LL;
    *a2 = v4;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
