/*
 * XREFs of ?OnStart@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180070140
 * Callers:
 *     <none>
 * Callees:
 *     ?TryTransitionToError@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAA_NJW4CancelTransitionPolicy@23@PEAX@Z @ 0x18001F1C8 (-TryTransitionToError@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details.c)
 *     ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x1800708B0 (-_AfterExecute@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerI.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::OnStart(
        __int64 a1)
{
  signed __int32 v2; // edi
  signed __int32 v3; // r8d
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 248) + 8LL))(
         *(_QWORD *)(a1 + 248),
         0LL,
         0LL,
         a1 + 272);
  if ( v2 < 0 )
    goto LABEL_13;
  v4 = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  v6 = *(unsigned int *)(a1 + 324);
  v7 = *(unsigned int *)(a1 + 320);
  *(_DWORD *)(a1 + 328) = CurrentThreadId;
  v2 = SHTaskPoolQueueTask(v7, v6, CurrentThreadId, 0LL, (a1 + 192) & -(__int64)(a1 != 8), 0LL);
  if ( v2 < 0 )
  {
    if ( *(_DWORD *)(a1 + 240) )
    {
      Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TryTransitionToError(
        a1,
        v2,
        v3);
      v2 = 0;
    }
    else
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 248)) != 1 )
        goto LABEL_12;
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(v4 + 256) + 8LL))(
             *(_QWORD *)(v4 + 256),
             1LL,
             (unsigned int)v2,
             v4 + 280);
      if ( v8 >= 0 && *(_BYTE *)(v4 + 289) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 272), 0xFFFFFFFF) != 1 )
          goto LABEL_12;
        v9 = *(unsigned int *)(v4 + 276);
      }
      else
      {
        v9 = (unsigned int)v8;
      }
      Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
        a1 - 8,
        v9);
    }
LABEL_12:
    if ( v2 < 0 )
LABEL_13:
      Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TryTransitionToError(
        a1,
        v2,
        v3);
  }
  return (unsigned int)v2;
}
