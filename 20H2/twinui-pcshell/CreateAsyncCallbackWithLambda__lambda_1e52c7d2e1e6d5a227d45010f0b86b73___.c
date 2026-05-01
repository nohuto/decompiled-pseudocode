/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_1e52c7d2e1e6d5a227d45010f0b86b73___ @ 0x180315738
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___ @ 0x180316CCC (CreationThreadDispatcher--RunSync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180073D48 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_1e52c7d2e1e6d5a227d45010f0b86b73_(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    v6[6] = *a2;
    *a2 = 0LL;
    v4 = v6;
    *v6 = off_1805C8108;
    v6[1] = off_1805C80C0;
  }
  result = a1;
  *a1 = v4;
  return result;
}
