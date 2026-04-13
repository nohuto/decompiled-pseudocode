/*
 * XREFs of ?InvokeFireCompletion@?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeOfferedState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180020B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<enum ContentManagement::SVUpgradeOfferedState>,Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeOfferedState>,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeOfferedState,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::InvokeFireCompletion(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = a1 - 200;
  if ( *(int *)(a1 - 200 + 152) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 152), 0xFFFFFFFF) == 1 )
  {
    _InterlockedOr(v4, 0);
    v2 = *(_QWORD *)(v1 + 136);
    *(_QWORD *)(v1 + 136) = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeOfferedState>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(v1);
}
