/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804642D4
 * Callers:
 *     ?GetIids@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800CA480 (-GetIids@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabE.c)
 *     ?GetIids@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabHost@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800CA4A0 (-GetIids@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabH.c)
 *     ?GetIids@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800CA4D0 (-GetIids@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800DC890 (-GetIids@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAKPEA.c)
 *     ?GetIids@?$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804638B0 (-GetIids@-$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Inter.c)
 *     ?GetIids@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804638D0 (-GetIids@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@i.c)
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x18008E7D3 (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  void *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h]

  if ( !a1 )
    a1 = 32LL;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 24LL))(a1, &v8);
  v5 = v8;
  if ( v8 )
  {
    *a2 = v8;
    v6 = _Platform_CoTaskMemAlloc(16LL * v5);
    *a3 = v6;
    if ( !v6 )
      return 2147942414LL;
    memmove_0(v6, Src, 16LL * v8);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return 0LL;
}
