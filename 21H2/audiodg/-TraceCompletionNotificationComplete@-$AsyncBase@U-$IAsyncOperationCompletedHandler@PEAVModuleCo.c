/*
 * XREFs of ?TraceCompletionNotificationComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x14005A438
 * Callers:
 *     ?FireCompletion@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x140056470 (-FireCompletion@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@M.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x140056570 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceCompletionNotificationComplete()
{
  __int64 result; // rax

  if ( Microsoft::WRL::gCausality )
    return (*(__int64 (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
             Microsoft::WRL::gCausality,
             0LL,
             2LL);
  return result;
}
