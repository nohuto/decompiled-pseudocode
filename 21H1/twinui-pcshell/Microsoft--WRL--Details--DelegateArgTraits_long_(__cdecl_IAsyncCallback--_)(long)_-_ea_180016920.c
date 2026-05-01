/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ff18a7cb999efe7aba419e7d47fa9918___1_long_::_scalar_deleting_destructor_ @ 0x180016920
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ff18a7cb999efe7aba419e7d47fa9918_::__lambda_ff18a7cb999efe7aba419e7d47fa9918_ @ 0x180016968 (_lambda_ff18a7cb999efe7aba419e7d47fa9918_--__lambda_ff18a7cb999efe7aba419e7d47fa9918_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_ff18a7cb999efe7aba419e7d47fa9918___1_long_::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_ff18a7cb999efe7aba419e7d47fa9918_::__lambda_ff18a7cb999efe7aba419e7d47fa9918_(a1 + 4);
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
