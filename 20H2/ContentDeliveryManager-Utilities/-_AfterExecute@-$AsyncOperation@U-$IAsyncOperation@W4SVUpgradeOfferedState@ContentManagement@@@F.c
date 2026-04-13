/*
 * XREFs of ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeOfferedState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x18002226C
 * Callers:
 *     ?Complete@?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeOfferedState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXJ@Z @ 0x1800205A0 (-Complete@-$AsyncOperation@U-$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Founda.c)
 *     ?Run@?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeOfferedState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x180020770 (-Run@-$AsyncOperation@U-$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@.c)
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeOfferedState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800208A0 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundat.c)
 *     ?_Run@?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeOfferedState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXW4AsyncStage@23@J@Z @ 0x180022150 (-_Run@-$AsyncOperation@U-$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation.c)
 * Callees:
 *     ?TryTransitionToError@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAA_NJW4CancelTransitionPolicy@23@PEAX@Z @ 0x18001EDA8 (-TryTransitionToError@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details.c)
 *     ?_AfterComplete@?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeOfferedState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x180022550 (-_AfterComplete@-$AsyncOperation@U-$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@.c)
 */

char __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<enum ContentManagement::SVUpgradeOfferedState>,Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeOfferedState>,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeOfferedState,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
        volatile signed __int32 *a1,
        signed __int32 a2,
        signed __int32 a3)
{
  bool v5; // di
  signed __int32 v6; // edx
  char result; // al
  signed __int32 v8; // ecx
  signed __int32 v9; // eax
  signed __int32 v10; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v11; // [rsp+38h] [rbp+10h] BYREF

  v5 = _InterlockedExchangeAdd(a1 + 63, 0xFFFFFFFF) == 1;
  if ( _InterlockedIncrement(a1 + 61) == 1 )
    v5 = _InterlockedExchangeAdd(a1 + 63, 0xFFFFFFFF) == 1;
  if ( a2 >= 0 )
  {
    v8 = *((_DWORD *)a1 + 14);
    v11 = -2;
    _InterlockedCompareExchange(&v11, v8, -2);
    if ( v11 || (v9 = _InterlockedCompareExchange(a1 + 14, 1, 0), (result = v9 == v11) == 0) )
      result = _InterlockedCompareExchange(a1 + 14, 1, 2);
  }
  else
  {
    v6 = *((_DWORD *)a1 + 14);
    v10 = -2;
    result = _InterlockedCompareExchange(&v10, v6, -2);
    if ( v10 != 2 )
      result = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TryTransitionToError(
                 (__int64)(a1 + 2),
                 a2,
                 a3);
  }
  if ( v5 )
    return Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<enum ContentManagement::SVUpgradeOfferedState>,Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeOfferedState>,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeOfferedState,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterComplete(a1);
  return result;
}
