/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_5e207e7830d56b01c82df609d184aaac___ @ 0x180322A6C
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_95ea086e3b8fa056e55a3a293b600f83___ @ 0x180322ED8 (CreationThreadDispatcher--RunSync__lambda_95ea086e3b8fa056e55a3a293b600f83___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180073D48 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_b572b7b401bca0583e7d35bf745a8e03_::_lambda_b572b7b401bca0583e7d35bf745a8e03_ @ 0x1802F98E8 (_lambda_b572b7b401bca0583e7d35bf745a8e03_--_lambda_b572b7b401bca0583e7d35bf745a8e03_.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_5e207e7830d56b01c82df609d184aaac_(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    lambda_b572b7b401bca0583e7d35bf745a8e03_::_lambda_b572b7b401bca0583e7d35bf745a8e03_(v6 + 6, a2);
    v4 = v6;
    *v6 = off_1805C99F8;
    v6[1] = off_1805C98D0;
  }
  result = a1;
  *a1 = v4;
  return result;
}
