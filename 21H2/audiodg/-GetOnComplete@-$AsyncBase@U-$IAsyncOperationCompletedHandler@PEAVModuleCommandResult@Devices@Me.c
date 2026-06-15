/*
 * XREFs of ?GetOnComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Z @ 0x1400574D0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$T@Z @ 0x140054E18 (--4-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@F.c)
 *     ?CheckValidStateForDelegateCall@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAJXZ @ 0x140055C2C (-CheckValidStateForDelegateCall@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommand.c)
 *     ?InternalAddRef@?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x140058468 (-InternalAddRef@-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Medi.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnComplete(
        __int64 a1,
        _QWORD *a2)
{
  int v4; // esi
  signed __int32 v5; // r8d
  signed __int32 v6; // eax

  *a2 = 0LL;
  v4 = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::CheckValidStateForDelegateCall(a1);
  if ( v4 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 32);
    if ( v5 )
    {
      do
      {
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v5 + 1, v5);
        if ( v5 == v6 )
          break;
        v5 = v6;
      }
      while ( v6 );
      if ( v5 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::InternalAddRef(a1 + 24);
        *a2 = *(_QWORD *)(a1 + 24);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) == 1 )
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::operator=((__int64 *)(a1 + 24));
      }
    }
  }
  return (unsigned int)v4;
}
