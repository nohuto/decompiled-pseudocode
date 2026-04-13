/*
 * XREFs of ?_AfterComplete@?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeOfferedState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x180022970
 * Callers:
 *     ?_Run@?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeOfferedState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXW4AsyncStage@23@J@Z @ 0x180022570 (-_Run@-$AsyncOperation@U-$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation.c)
 *     ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeOfferedState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x18002268C (-_AfterExecute@-$AsyncOperation@U-$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<enum ContentManagement::SVUpgradeOfferedState>,Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeOfferedState>,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeOfferedState,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterComplete(
        __int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 256);
  if ( v2 )
    (**v2)(v2, 1LL);
  *(_QWORD *)(a1 + 256) = 0LL;
  if ( GetCurrentThreadId() != *(_DWORD *)(a1 + 320) )
    SHTaskPoolAllowThreadReuse();
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 264));
  if ( *(int *)(a1 + 160) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 0xFFFFFFFF) == 1 )
  {
    _InterlockedOr(v5, 0);
    v3 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeOfferedState>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(a1 + 8);
}
