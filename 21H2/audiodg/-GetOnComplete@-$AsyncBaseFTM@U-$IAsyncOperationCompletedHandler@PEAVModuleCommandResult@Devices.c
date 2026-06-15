/*
 * XREFs of ?GetOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@3@@Z @ 0x140057570
 * Callers:
 *     ?get_Completed@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14005A840 (-get_Completed@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAU-$IAsyncOperationCom.c)
 * Callees:
 *     ?TryLockCompleteDelegate@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAA_NXZ @ 0x140027C74 (-TryLockCompleteDelegate@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResu.c)
 *     ?UnlockCompleteDelegate@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x140027D40 (-UnlockCompleteDelegate@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResul.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?CheckValidStateForDelegateCall@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAJXZ @ 0x140055C2C (-CheckValidStateForDelegateCall@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommand.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnComplete(
        __int64 a1,
        _QWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx

  *a2 = 0LL;
  v4 = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::CheckValidStateForDelegateCall(a1);
  if ( v4 >= 0
    && Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TryLockCompleteDelegate(a1) )
  {
    v5 = *(_QWORD *)(a1 + 120);
    *a2 = 0LL;
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 120);
      if ( v6 )
        v4 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v6 + 24LL))(
               v6,
               &GUID_cb786404_f2e8_5e0b_bf12_39e31483cfae,
               a2);
      else
        v4 = 0;
    }
    else
    {
      v4 = -2147024809;
    }
    Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::UnlockCompleteDelegate(a1);
  }
  return (unsigned int)v4;
}
