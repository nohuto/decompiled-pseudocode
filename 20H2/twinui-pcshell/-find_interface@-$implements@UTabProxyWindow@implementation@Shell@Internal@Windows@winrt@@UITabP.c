/*
 * XREFs of ?find_interface@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D1D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *a2 - winrt::impl::guid_storage<Windows::Internal::Shell::ITabProxyWindowInternal>::value;
  if ( *a2 == winrt::impl::guid_storage<Windows::Internal::Shell::ITabProxyWindowInternal>::value )
    v2 = a2[1] + 0x641875991B2B6A60LL;
  return (a1 - 8) & -(__int64)(v2 == 0);
}
