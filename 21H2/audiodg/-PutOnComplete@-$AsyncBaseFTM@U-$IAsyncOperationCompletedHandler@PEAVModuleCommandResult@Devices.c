/*
 * XREFs of ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@3@@Z @ 0x140058F80
 * Callers:
 *     ?put_Completed@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14005AC10 (-put_Completed@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAU-$IAsyncOperationComple.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ??$Initialize@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@2@@Z @ 0x140053D8C (--$Initialize@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@.c)
 *     ?CheckValidStateForDelegateCall@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAJXZ @ 0x140055C2C (-CheckValidStateForDelegateCall@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommand.c)
 *     ?TraceDelegateAssigned@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x14005A4BC (-TraceDelegateAssigned@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@De.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  int v4; // edi
  signed __int32 v5; // ecx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  signed __int32 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::CheckValidStateForDelegateCall(a1);
  if ( v4 >= 0 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) == 1 )
    {
      v4 = Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::Initialize<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>(
             a1 + 120,
             a2);
      if ( v4 >= 0 )
      {
        Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceDelegateAssigned(a1);
        if ( a2 )
        {
          *(_QWORD *)(a1 + 128) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 136));
        }
        _InterlockedOr(v7, 0);
        v5 = *(_DWORD *)(a1 + 56);
        v8 = -2;
        _InterlockedCompareExchange(&v8, v5, -2);
        if ( (unsigned int)(v8 - 1) <= 3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
      }
    }
    else
    {
      return (unsigned int)-2147483624;
    }
  }
  return (unsigned int)v4;
}
