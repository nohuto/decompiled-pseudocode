/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390__&__1_long_::Invoke @ 0x18029DA50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801258C4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390_____1_long_::Invoke(
        __int64 a1,
        signed int a2)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, signed int))(**(_QWORD **)(a1 + 16) + 192LL))(
    *(_QWORD *)(a1 + 16),
    *(unsigned int *)(a1 + 24),
    *(unsigned int *)(a1 + 28),
    0LL,
    a2);
  if ( a2 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(a2);
  return (unsigned int)a2;
}
