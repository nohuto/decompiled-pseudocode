/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UITabProxyWindowFactoryInternal@Shell@Internal@Windows@@@winrt@@AEAAXXZ @ 0x1800CEF3C
 * Callers:
 *     ??1?$com_ptr@UIStream@@@winrt@@QEAA@XZ @ 0x1800C787C (--1-$com_ptr@UIStream@@@winrt@@QEAA@XZ.c)
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800C7BC0 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?GetTabProxyWindowFactory@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAPEAUITabProxyWindowFactoryInternal@345@@Z @ 0x1800CA5F0 (-GetTabProxyWindowFactory@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAPEA.c)
 *     ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800CF7D8 (--1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJ_KPEAPEAUITabProxyWindowInternal@345@@Z @ 0x1800CFAD0 (-CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?SetTestTabProxyWindowFactoryInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUITestTabProxyWindowFactoryInternal@345@@Z @ 0x1800D0250 (-SetTestTabProxyWindowFactoryInternal@TabProxyWindowFactory@implementation@Shell@Internal@Window.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800DF240 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
