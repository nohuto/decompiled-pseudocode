/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_c60ae2f85eb05575e9492a119d604231___ @ 0x180316130
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_b62b7423e3f7d115cab3cf876a54b413___ @ 0x18031739C (CreationThreadDispatcher--RunSync__lambda_b62b7423e3f7d115cab3cf876a54b413___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800786E8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_c60ae2f85eb05575e9492a119d604231_(_QWORD *a1, _QWORD *a2)
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
    *v6 = off_1805C9110;
    v6[1] = off_1805C90C8;
  }
  result = a1;
  *a1 = v4;
  return result;
}
