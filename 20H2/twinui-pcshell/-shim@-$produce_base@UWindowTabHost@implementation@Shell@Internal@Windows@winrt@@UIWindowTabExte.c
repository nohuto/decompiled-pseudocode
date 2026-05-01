/*
 * XREFs of ?shim@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@X@impl@winrt@@QEAAAEAUWindowTabHost@implementation@Shell@Internal@Windows@3@XZ @ 0x1800D0578
 * Callers:
 *     ?IsSupported@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800CC590 (-IsSupported@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension,void>::shim(
        __int64 a1)
{
  return (a1 - 32) & -(__int64)(a1 != 0);
}
