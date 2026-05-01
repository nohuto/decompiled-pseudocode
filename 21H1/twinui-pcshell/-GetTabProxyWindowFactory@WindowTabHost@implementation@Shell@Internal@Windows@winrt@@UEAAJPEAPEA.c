/*
 * XREFs of ?GetTabProxyWindowFactory@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAPEAUITabProxyWindowFactoryInternal@345@@Z @ 0x1800B7FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180094AE0 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?query_interface@?$root_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800BC298 (-query_interface@-$root_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?unconditional_release_ref@?$com_ptr@UITabProxyWindowFactoryInternal@Shell@Internal@Windows@@@winrt@@AEAAXXZ @ 0x1800BC9FC (-unconditional_release_ref@-$com_ptr@UITabProxyWindowFactoryInternal@Shell@Internal@Windows@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetTabProxyWindowFactory(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal **a2)
{
  __int64 v3; // rcx
  struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal *v4; // rbx
  unsigned int v5; // eax
  struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 14);
  if ( v3 )
  {
    v7 = 0LL;
    v5 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::query_interface(
           v3 + 8,
           &winrt::impl::guid_storage<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::value,
           &v7);
    winrt::check_hresult(v5);
    v4 = v7;
  }
  else
  {
    v4 = 0LL;
  }
  v7 = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal *))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = v4;
  if ( v4 )
    winrt::com_ptr<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::unconditional_release_ref(&v7);
  return 0LL;
}
