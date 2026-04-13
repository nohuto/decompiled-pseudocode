/*
 * XREFs of ?OnStart@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?RevertOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001ED10
 * Callers:
 *     <none>
 * Callees:
 *     ?TryTransitionToError@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAA_NJW4CancelTransitionPolicy@23@PEAX@Z @ 0x18001F1C8 (-TryTransitionToError@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details.c)
 *     ?_AfterExecute@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?CommitOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x18001F604 (-_AfterExecute@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::RevertOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::OnStart(
        __int64 a1)
{
  int v2; // edi
  __int64 v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 248) + 8LL))(
         *(_QWORD *)(a1 + 248),
         0LL,
         0LL,
         a1 + 272);
  if ( v2 < 0 )
    goto LABEL_13;
  v3 = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  v5 = *(unsigned int *)(a1 + 300);
  v6 = *(unsigned int *)(a1 + 296);
  *(_DWORD *)(a1 + 304) = CurrentThreadId;
  v2 = SHTaskPoolQueueTask(v6, v5, CurrentThreadId, 0LL, (a1 + 192) & -(__int64)(a1 != 8), 0LL);
  if ( v2 < 0 )
  {
    if ( *(_DWORD *)(a1 + 240) )
    {
      Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TryTransitionToError(
        a1,
        (unsigned int)v2);
      v2 = 0;
    }
    else
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 248)) != 1 )
        goto LABEL_12;
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(v3 + 256) + 8LL))(
             *(_QWORD *)(v3 + 256),
             1LL,
             (unsigned int)v2,
             v3 + 280);
      if ( v7 >= 0 && *(_BYTE *)(v3 + 289) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 272), 0xFFFFFFFF) != 1 )
          goto LABEL_12;
        v8 = *(unsigned int *)(v3 + 276);
      }
      else
      {
        v8 = (unsigned int)v7;
      }
      Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::CommitOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
        a1 - 8,
        v8);
    }
LABEL_12:
    if ( v2 < 0 )
LABEL_13:
      Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TryTransitionToError(
        a1,
        (unsigned int)v2);
  }
  return (unsigned int)v2;
}
