/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_e52983e0dc7e1746f799001ed96c8eb0___ @ 0x1803161B4
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_a024861b188cf4ada81763f84c86531a___ @ 0x180317298 (CreationThreadDispatcher--RunSync__lambda_a024861b188cf4ada81763f84c86531a___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800786E8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_e52983e0dc7e1746f799001ed96c8eb0_(_QWORD *a1, _QWORD *a2)
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
    *v6 = off_1805C9330;
    v6[1] = off_1805C92E8;
  }
  result = a1;
  *a1 = v4;
  return result;
}
