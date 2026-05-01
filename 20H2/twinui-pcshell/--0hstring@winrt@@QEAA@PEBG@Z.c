/*
 * XREFs of ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1801E727C
 * Callers:
 *     ??4hstring@winrt@@QEAAAEAU01@QEBG@Z @ 0x180097C7C (--4hstring@winrt@@QEAAAEAU01@QEBG@Z.c)
 *     ?IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z @ 0x1800A42DC (-IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?GetRuntimeClassName@?$WindowTabHost_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@implementation@Shell@Internal@Windows@winrt@@UEBA?AUhstring@6@XZ @ 0x1800CBFC0 (-GetRuntimeClassName@-$WindowTabHost_base@UWindowTabHost@implementation@Shell@Internal@Windows@w.c)
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800D58AC (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800E0920 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801F30B4 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 * Callees:
 *     WINRT_WindowsCreateString @ 0x18008E4C1 (WINRT_WindowsCreateString.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B21D8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

winrt::hstring *__fastcall winrt::hstring::hstring(winrt::hstring *this, const unsigned __int16 *a2)
{
  __int64 v2; // rax
  HRESULT v4; // eax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = (HSTRING)this;
  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  string = 0LL;
  v4 = WINRT_WindowsCreateString(a2, v2, &string);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *(_QWORD *)this = string;
  return this;
}
