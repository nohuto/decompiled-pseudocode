/*
 * XREFs of ?GetRuntimeClassName@?$implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowFactoryInternal@345@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800CA510
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801E7C64 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::GetRuntimeClassName(
        __int64 a1,
        __int64 a2)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = 38LL;
  v4[0] = L"{6de544dd-b06d-52ce-b099-f7206deb8cc2}";
  winrt::hstring::hstring(a2, v4);
  return a2;
}
