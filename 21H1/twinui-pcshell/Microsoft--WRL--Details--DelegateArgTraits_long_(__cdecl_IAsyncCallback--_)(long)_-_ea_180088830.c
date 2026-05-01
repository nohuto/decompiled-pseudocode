/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ff18a7cb999efe7aba419e7d47fa9918___1_long_::Invoke @ 0x180088830
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1499a186909557a83ff0f6afb6d3c526_::operator() @ 0x1800150A0 (_lambda_1499a186909557a83ff0f6afb6d3c526_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801258C4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_ff18a7cb999efe7aba419e7d47fa9918___1_long_::Invoke(
        CAppViewManager **a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  CAppViewManager **v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 3;
  v4[1] = a1 + 2;
  v4[0] = a1 + 3;
  v4[2] = a1 + 4;
  v2 = lambda_1499a186909557a83ff0f6afb6d3c526_::operator()(v4);
  if ( (v2 & 0x80000000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 88LL))(*v1, v2);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v2);
  }
  return v2;
}
