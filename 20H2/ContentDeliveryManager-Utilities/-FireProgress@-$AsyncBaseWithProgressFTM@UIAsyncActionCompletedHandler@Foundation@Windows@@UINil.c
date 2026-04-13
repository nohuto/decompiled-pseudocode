/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x18001EE84
 * Callers:
 *     ?SetProgress@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x18001E6E0 (-SetProgress@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18000769C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180007798 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     ??1?$AutoStubBias@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@@@QEAA@XZ @ 0x18001EC0C (--1-$AutoStubBias@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler@_.c)
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x18001EC74 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ??$CopyLocal@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UINilDelegate@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001F8B8 (--$CopyLocal@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@Internal@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireProgress(
        volatile signed __int32 *a1,
        unsigned int a2)
{
  unsigned int v4; // r14d
  signed __int32 v5; // edx
  int (__fastcall *v6)(volatile signed __int32 *, GUID *, IUnknown **); // rbx
  IUnknown *v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // rax
  struct IRpcOptions *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rcx
  struct IUnknown *v13; // rcx
  IUnknown *v14; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h]
  volatile signed __int32 *v18; // [rsp+48h] [rbp-28h]
  GUID v19; // [rsp+50h] [rbp-20h] BYREF
  LPSTREAM ppstm[2]; // [rsp+60h] [rbp-10h] BYREF
  struct IUnknown *v21; // [rsp+A0h] [rbp+30h] BYREF
  IUnknown *v22; // [rsp+B0h] [rbp+40h] BYREF
  struct IRpcOptions *v23; // [rsp+B8h] [rbp+48h] BYREF

  v17 = -2LL;
  v4 = 0;
  v18 = a1;
  if ( a1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
  v22 = 0LL;
  v5 = *((_DWORD *)a1 + 38);
  if ( v5 > 0 )
  {
    do
    {
      if ( v5 == _InterlockedCompareExchange(a1 + 38, v5 + 1, v5) )
        break;
      v5 = *((_DWORD *)a1 + 38);
    }
    while ( v5 > 0 );
    if ( v5 > 0 )
    {
      v6 = **(int (__fastcall ***)(volatile signed __int32 *, GUID *, IUnknown **))a1;
      v7 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
      }
      if ( v6(a1, &GUID_00000000_0000_0000_c000_000000000046, &v22) >= 0 )
      {
        v21 = 0LL;
        v8 = (__int64 *)(a1 + 34);
        if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal<Windows::Internal::INilDelegate>(
                    a1 + 34,
                    &v21) >= 0 )
        {
          if ( Microsoft::WRL::gCausality )
          {
            v9 = *(_QWORD *)Microsoft::WRL::gCausality;
            v19 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, volatile signed __int32 *, int))(v9 + 72))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              &v19,
              a1,
              1);
          }
          v23 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v21, &v23);
          v10 = v23;
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(ppstm, (__int64)v23, v22, (__int64)v21);
          v11 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v21->lpVtbl[1].QueryInterface)(
                  v21,
                  v22,
                  a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v11,
                 (__int64)v21);
          if ( Microsoft::WRL::gCausality )
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              1LL);
          AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>::~AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>((int *)ppstm);
          if ( v10 )
            ((void (__fastcall *)(struct IRpcOptions *))v10->lpVtbl->Release)(v10);
        }
        if ( _InterlockedExchangeAdd(a1 + 38, 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v16, 0);
          v12 = *v8;
          *v8 = 0LL;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v13 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
        }
      }
    }
  }
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(IUnknown *))v14->lpVtbl->Release)(v14);
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
