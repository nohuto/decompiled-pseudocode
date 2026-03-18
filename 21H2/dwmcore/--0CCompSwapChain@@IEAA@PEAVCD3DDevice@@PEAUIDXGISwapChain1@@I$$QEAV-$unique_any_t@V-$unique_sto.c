/*
 * XREFs of ??0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I@Z @ 0x18028E5C8
 * Callers:
 *     ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVICompositionSwapChain@@@Z @ 0x18028EC68 (-Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV-$unique_any_t@V-$unique_.c)
 * Callees:
 *     ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x18001F238 (--0-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompSwapChain::CCompSwapChain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        __int64 a6,
        __int128 *a7,
        int a8)
{
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8

  *(_QWORD *)(a1 + 8) = &CCompSwapChain::`vbtable'{for `ISwapChain'};
  *(_QWORD *)(a1 + 32) = &CCompSwapChain::`vbtable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 416) = &CInk::`vbtable'{for `IContent'};
  *(_QWORD *)(a1 + 440) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *(_QWORD *)a1 = &IBitmapDest2::`vftable';
  *(_QWORD *)(a1 + 392) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 8LL) + a1 + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 12LL) + a1 + 8) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)a1 = &Windows::Foundation::Collections::IMapView<_GUID,IInspectable *>::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 4LL) + a1 + 8) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 8LL) + a1 + 8) = &IYUVSwapChainRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 12LL) + a1 + 8) = &ILegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = &CDeviceResource::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 32) + 4LL) + a1 + 32) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 32) + 8LL) + a1 + 32) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)(*(int *)(*(_QWORD *)(a1 + 32) + 8LL) + a1 + 28) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = &CCompSwapChain::`vftable'{for `CMILCOMBaseT<ICompositionSwapChain>'};
  *(_QWORD *)(a1 + 24) = &CCompSwapChain::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 64) = &CCompSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 4LL) + a1 + 8) = &CCompSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 8LL) + a1 + 8) = &CCompSwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 12LL) + a1 + 8) = &CCompSwapChain::`vftable'{for `IDeviceResource'};
  v11 = *(int *)(*(_QWORD *)(a1 + 8) + 4LL);
  *(_DWORD *)(v11 + a1 + 4) = v11 - 384;
  v12 = *(int *)(*(_QWORD *)(a1 + 8) + 8LL);
  *(_DWORD *)(v12 + a1 + 4) = v12 - 400;
  *(_DWORD *)(*(int *)(*(_QWORD *)(a1 + 8) + 12LL) + a1 + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) - 424;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 72),
    a2);
  *(_QWORD *)(a1 + 80) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  *(_QWORD *)(a1 + 88) = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 120) = a4;
  *(_QWORD *)(a1 + 124) = *(_QWORD *)a6;
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a6 + 8);
  v13 = *a7;
  v14 = *((_QWORD *)a7 + 2);
  *(_DWORD *)(a1 + 160) = a8;
  *(_OWORD *)(a1 + 136) = v13;
  *(_QWORD *)(a1 + 152) = v14;
  *(_QWORD *)(a1 + 168) = a1 + 176;
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 240) = a1 + 248;
  *(_DWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 312) = a1 + 320;
  *(_DWORD *)(a1 + 320) = 0;
  return a1;
}
