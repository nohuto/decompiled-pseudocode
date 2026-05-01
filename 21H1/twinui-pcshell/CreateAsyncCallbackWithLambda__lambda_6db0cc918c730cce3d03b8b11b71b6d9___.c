/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___ @ 0x180300484
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_beeaa99da247ec9f188a411312d86a25___ @ 0x1803005E8 (CreationThreadDispatcher--RunSync__lambda_beeaa99da247ec9f188a411312d86a25___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18015534C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     _lambda_beeaa99da247ec9f188a411312d86a25_::_lambda_beeaa99da247ec9f188a411312d86a25_ @ 0x1803006E0 (_lambda_beeaa99da247ec9f188a411312d86a25_--_lambda_beeaa99da247ec9f188a411312d86a25_.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9_(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    lambda_beeaa99da247ec9f188a411312d86a25_::_lambda_beeaa99da247ec9f188a411312d86a25_(v6 + 6, a2);
    v4 = v6;
    *v6 = off_18059D320;
    v6[1] = off_18059D2D8;
  }
  result = a1;
  *a1 = v4;
  return result;
}
