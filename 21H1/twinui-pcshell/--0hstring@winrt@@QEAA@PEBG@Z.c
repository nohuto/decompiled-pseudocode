/*
 * XREFs of ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1801C41EC
 * Callers:
 *     ?GetRuntimeClassName@?$WindowTabHost_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@implementation@Shell@Internal@Windows@winrt@@UEBA?AUhstring@6@XZ @ 0x1800B7ED0 (-GetRuntimeClassName@-$WindowTabHost_base@UWindowTabHost@implementation@Shell@Internal@Windows@w.c)
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800C1B68 (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x1801C50F8 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801D0124 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?GetStoreAppPFN@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801D7200 (-GetStoreAppPFN@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?TryGetInstalledPackage@CortanaAvailability@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x1801E2938 (-TryGetInstalledPackage@CortanaAvailability@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 * Callees:
 *     WINRT_WindowsCreateString @ 0x18008E061 (WINRT_WindowsCreateString.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18018E8E8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
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
