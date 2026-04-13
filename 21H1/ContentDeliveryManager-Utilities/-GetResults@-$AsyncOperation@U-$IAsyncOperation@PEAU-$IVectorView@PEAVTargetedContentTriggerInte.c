/*
 * XREFs of ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18006D7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18006E3C8 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVTargetedContentTriggerInternal@Internal@Targ.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        __int64 a1,
        _QWORD *a2)
{
  signed __int32 v3; // r8d
  signed __int32 v5; // ecx
  __int64 v6; // rcx
  int v7; // ebx
  signed __int32 v9; // [rsp+40h] [rbp+20h] BYREF
  signed __int32 v10; // [rsp+48h] [rbp+28h] BYREF
  signed __int32 v11; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)(a1 - 120);
  v10 = -2;
  _InterlockedCompareExchange(&v10, v3, -2);
  if ( v10 == 3 )
  {
    v5 = *(_DWORD *)(a1 - 120);
    v11 = -2;
    _InterlockedCompareExchange(&v11, v5, -2);
    if ( v11 == 3 )
    {
      _InterlockedCompareExchange(&v9, *(_DWORD *)(a1 - 116), v9);
      v6 = *(_QWORD *)(a1 - 128);
      if ( v6 )
        SetRestrictedErrorInfo(v6);
      v7 = v9;
      goto LABEL_9;
    }
  }
  else if ( v10 != 1 )
  {
    v7 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
    return (unsigned int)v7;
  }
  v7 = 0;
LABEL_9:
  if ( v7 >= 0 )
    return (unsigned int)Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::Get(
                           a1 + 104,
                           a2);
  return (unsigned int)v7;
}
