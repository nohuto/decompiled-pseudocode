/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_beeaa99da247ec9f188a411312d86a25___ @ 0x180322188
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b___::Run @ 0x1803227F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801E6B90 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     CreateAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___ @ 0x180322024 (CreateAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___.c)
 *     _lambda_beeaa99da247ec9f188a411312d86a25_::_lambda_beeaa99da247ec9f188a411312d86a25_ @ 0x180322280 (_lambda_beeaa99da247ec9f188a411312d86a25_--_lambda_beeaa99da247ec9f188a411312d86a25_.c)
 *     _lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_ @ 0x1803224A0 (_lambda_beeaa99da247ec9f188a411312d86a25_--__lambda_beeaa99da247ec9f188a411312d86a25_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_beeaa99da247ec9f188a411312d86a25___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IInspectable *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::WeakRef *)(a1 + 48), &v11);
  v4 = v3;
  if ( v3 >= 0 )
  {
    lambda_beeaa99da247ec9f188a411312d86a25_::_lambda_beeaa99da247ec9f188a411312d86a25_(v9, a2);
    CreateAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9_(&v12, (__int64)v9);
    lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_(v9);
    if ( v12 )
    {
      v7 = ((__int64 (__fastcall *)(struct IInspectable *))v11->lpVtbl->GetIids)(v11);
      v4 = v7;
      if ( v7 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        goto LABEL_9;
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
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v4;
}
