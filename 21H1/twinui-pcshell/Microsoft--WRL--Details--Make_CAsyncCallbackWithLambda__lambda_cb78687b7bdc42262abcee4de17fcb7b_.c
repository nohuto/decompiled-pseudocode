/*
 * XREFs of Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b_____lambda_cb78687b7bdc42262abcee4de17fcb7b___ @ 0x1802F4BB0
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___ @ 0x1802F5900 (CreationThreadDispatcher--RunSync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18015534C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b_____lambda_cb78687b7bdc42262abcee4de17fcb7b___(
        __int64 *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  volatile int *v6; // rdx

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v4);
    v5[6] = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
    *((_BYTE *)v5 + 56) = *(_BYTE *)(a2 + 8);
    *v5 = off_18059C2A0;
    v5[1] = off_18059C1D8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
