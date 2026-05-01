/*
 * XREFs of ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801C45C8
 * Callers:
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B4FD0 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x1800C29B0 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801C457C (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18033C468 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 * Callees:
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008D902 (WINRT_WindowsGetStringRawBuffer.c)
 */

PCWSTR *__fastcall winrt::hstring::operator std::basic_string_view<unsigned short>(HSTRING *a1, PCWSTR *a2)
{
  UINT32 length; // [rsp+30h] [rbp+8h] BYREF

  *a2 = WINRT_WindowsGetStringRawBuffer(*a1, &length);
  a2[1] = (PCWSTR)length;
  return a2;
}
