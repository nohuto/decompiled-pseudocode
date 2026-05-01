/*
 * XREFs of ?find_interface@?$implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowFactoryInternal@345@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800CFEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *a2 - winrt::impl::guid_storage<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::value;
  if ( *a2 == winrt::impl::guid_storage<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::value )
    v2 = a2[1] + 0x3D731492DF086650LL;
  return (a1 - 8) & -(__int64)(v2 == 0);
}
