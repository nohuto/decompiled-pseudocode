/*
 * XREFs of ?SetTestTabProxyWindowFactoryInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUITestTabProxyWindowFactoryInternal@345@@Z @ 0x1800D1D30
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UITabProxyWindowFactoryInternal@Shell@Internal@Windows@@@winrt@@AEAAXXZ @ 0x1800D0A1C (-unconditional_release_ref@-$com_ptr@UITabProxyWindowFactoryInternal@Shell@Internal@Windows@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::SetTestTabProxyWindowFactoryInternal(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *this,
        struct Windows::Internal::Shell::ITestTabProxyWindowFactoryInternal *a2)
{
  _QWORD *v3; // rdi

  v3 = (_QWORD *)((char *)this + 80);
  if ( *((struct Windows::Internal::Shell::ITestTabProxyWindowFactoryInternal **)this + 10) != a2 )
  {
    if ( *v3 )
      winrt::com_ptr<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::unconditional_release_ref((__int64 *)this + 10);
    *v3 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ITestTabProxyWindowFactoryInternal *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return 0LL;
}
