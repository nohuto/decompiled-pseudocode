/*
 * XREFs of ?TraceOperationStart@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x140051A1C
 * Callers:
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x140051690 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Wind.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x140048F5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceOperationStart(
        __int64 a1)
{
  HSTRING_HEADER *v2; // rax
  GUID v3; // [rsp+40h] [rbp-58h] BYREF
  HSTRING_HEADER v4; // [rsp+50h] [rbp-48h] BYREF

  if ( Microsoft::WRL::gCausality )
  {
    *(_QWORD *)&v3.Data1 = L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Devices.ModuleCommandResult>";
    v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v4, (const WCHAR **)&v3);
    v3 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
    (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, _QWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 48LL))(
      Microsoft::WRL::gCausality,
      0LL,
      2LL,
      &v3,
      a1,
      v2[1].Reserved.Reserved1,
      *(unsigned int *)(a1 + 56));
  }
}
