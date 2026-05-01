/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_6b03a5b9f901bca31a2e8874ad3128f0___ @ 0x1803157BC
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x180316888 (CreationThreadDispatcher--RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180073D48 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_69db3e9761c77a5f5df8b9f478688ffa_::_lambda_69db3e9761c77a5f5df8b9f478688ffa_ @ 0x180317150 (_lambda_69db3e9761c77a5f5df8b9f478688ffa_--_lambda_69db3e9761c77a5f5df8b9f478688ffa_.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_6b03a5b9f901bca31a2e8874ad3128f0_(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    lambda_69db3e9761c77a5f5df8b9f478688ffa_::_lambda_69db3e9761c77a5f5df8b9f478688ffa_(v6 + 6, a2);
    v4 = v6;
    *v6 = off_1805C8460;
    v6[1] = off_1805C8418;
  }
  result = a1;
  *a1 = v4;
  return result;
}
