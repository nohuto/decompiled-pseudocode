/*
 * XREFs of ??$CreateAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@YA?AV?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$$QEAV_lambda_70db04ee97ce611edc9e35899f670330_@@@Z @ 0x1802162F8
 * Callers:
 *     ??$RunSync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJ$$QEAV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@Z @ 0x180216730 (--$RunSync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJ$$QEAV_la.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@QEAA@$$QEAV_lambda_70db04ee97ce611edc9e35899f670330_@@@Z @ 0x180216844 (--0-$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@QEAA@$$QEAV_lambda_7.c)
 */

__int64 *__fastcall CreateAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax

  v4 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>::CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>(
           v5,
           a2);
  result = a1;
  *a1 = v4;
  return result;
}
