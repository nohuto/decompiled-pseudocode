/*
 * XREFs of ??$CopyLocal@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1400492F4
 * Callers:
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x14004CE20 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::CopyLocal<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // edx

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  v4 = *a1;
  v5 = 0;
  *a2 = 0LL;
  if ( v4 )
  {
    if ( *a1 )
      return (*(unsigned int (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*a1 + 24LL))(
               *a1,
               &GUID_cb786404_f2e8_5e0b_bf12_39e31483cfae,
               a2);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v5;
}
