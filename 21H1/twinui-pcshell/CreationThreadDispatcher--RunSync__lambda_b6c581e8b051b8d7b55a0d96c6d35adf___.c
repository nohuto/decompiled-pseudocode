/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___ @ 0x1802F5900
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e0126d03542bc92125754c73e984d3e0___::Run @ 0x1802FA460 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e0126d03542bc92125754c73e984d3e0___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801C30D0 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b_____lambda_cb78687b7bdc42262abcee4de17fcb7b___ @ 0x1802F4BB0 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 *CAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b_____lambda_cb78687b7bdc42262abcee4de17fcb7b; // rax
  volatile int *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-10h] BYREF
  char v14; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IInspectable *v16; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  v16 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::WeakRef *)(a1 + 48), &v16);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v13 = *a2;
    *a2 = 0LL;
    v14 = *((_BYTE *)a2 + 8);
    CAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b_____lambda_cb78687b7bdc42262abcee4de17fcb7b = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b_____lambda_cb78687b7bdc42262abcee4de17fcb7b___(&v17, (__int64)&v13);
    v7 = *CAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b_____lambda_cb78687b7bdc42262abcee4de17fcb7b;
    v18 = *CAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b_____lambda_cb78687b7bdc42262abcee4de17fcb7b;
    *CAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b_____lambda_cb78687b7bdc42262abcee4de17fcb7b = 0LL;
    v8 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
        v8,
        v6);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v7 )
    {
      v11 = ((__int64 (__fastcall *)(struct IInspectable *, __int64))v16->lpVtbl->GetIids)(v16, v7);
      v4 = v11;
      if ( v11 >= 0 )
      {
LABEL_12:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        goto LABEL_13;
      }
      v9 = (unsigned int)v11;
      v10 = 81LL;
    }
    else
    {
      v4 = -2147024882;
      v9 = 2147942414LL;
      v10 = 80LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
      (const char *)v9);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v4;
}
