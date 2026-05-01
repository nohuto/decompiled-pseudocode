/*
 * XREFs of ?Release@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@UEAAKXZ @ 0x1800B8F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::Release(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)(a1 + 8);
  v2 = _InterlockedDecrement(v1 + 2);
  if ( !v2 )
  {
    _InterlockedExchange(v1 + 2, 1);
    if ( v1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
  }
  return v2;
}
