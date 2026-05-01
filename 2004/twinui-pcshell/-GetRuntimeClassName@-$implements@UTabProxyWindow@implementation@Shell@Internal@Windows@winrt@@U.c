/*
 * XREFs of ?GetRuntimeClassName@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800CFD60
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801E7C64 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::GetRuntimeClassName(
        __int64 a1,
        __int64 a2)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = 38LL;
  v4[0] = L"{c9b8fa8b-63d2-54a5-a095-d4e4668ae79b}";
  winrt::hstring::hstring(a2, v4);
  return a2;
}
