/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___ @ 0x180316CCC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e4dd877b4e6f860e5033763c4d7cce33___::Run @ 0x18031B730 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e4dd877b4e6f860e5033763c4d7cce33___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801E64B0 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     CreateAsyncCallbackWithLambda__lambda_1e52c7d2e1e6d5a227d45010f0b86b73___ @ 0x180315738 (CreateAsyncCallbackWithLambda__lambda_1e52c7d2e1e6d5a227d45010f0b86b73___.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInspectable *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::WeakRef *)(a1 + 48), &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v11 = *a2;
    *a2 = 0LL;
    CreateAsyncCallbackWithLambda__lambda_1e52c7d2e1e6d5a227d45010f0b86b73_(&v12, &v11);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v12 )
    {
      v7 = ((__int64 (__fastcall *)(struct IInspectable *))v10->lpVtbl->GetIids)(v10);
      v4 = v7;
      if ( v7 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        goto LABEL_11;
      }
      v5 = (unsigned int)v7;
      v6 = 81LL;
    }
    else
    {
      v4 = -2147024882;
      v5 = 2147942414LL;
      v6 = 80LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
      (const char *)v5);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v4;
}
