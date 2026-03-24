/*
 * XREFs of ?CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z @ 0x18023EF18
 * Callers:
 *     ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x1801A6510 (-Initialize@CComputeScribbleFramebuffer@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateSharedHandleFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x18002D1C8 (-CreateSharedHandleFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002D2C0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180030F44 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9824 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5FE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??0CSharedFence@@QEAA@PEAUID3D11Fence@@PEAUID3D12Fence@@@Z @ 0x18023D7D4 (--0CSharedFence@@QEAA@PEAUID3D11Fence@@PEAUID3D12Fence@@@Z.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18023F228 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     ?GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18023F8CC (-GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 */

__int64 __fastcall CD3DDevice::CreateSharedFence(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        __int64 a3,
        struct CSharedFence **a4)
{
  int D3D12Resources; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct ID3D12Device *v10; // rsi
  struct ID3D11Fence *v11; // r8
  HRESULT (__stdcall *OpenSharedHandle)(ID3D12Device *, HANDLE, const IID *const, void **); // rbx
  CSharedFence *v13; // rax
  CSharedFence *v14; // rdi
  int v15; // r9d
  unsigned int v17; // [rsp+20h] [rbp-30h]
  HANDLE hObject; // [rsp+30h] [rbp-20h] BYREF
  CSharedFence *v19; // [rsp+38h] [rbp-18h] BYREF
  struct ID3D11Fence *v20; // [rsp+40h] [rbp-10h] BYREF
  struct ID3D12Device *v21; // [rsp+48h] [rbp-8h] BYREF
  struct ID3D12Fence *v22; // [rsp+90h] [rbp+40h] BYREF

  v20 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  hObject = 0LL;
  D3D12Resources = CD3DDevice::EnsureBeginCreateD3D12Resources(this);
  v9 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v17 = 2356;
    goto LABEL_17;
  }
  D3D12Resources = CD3DDevice::GetD3D12DeviceNoRef(this, &v21);
  v9 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v17 = 2359;
    goto LABEL_17;
  }
  v10 = v21;
  if ( !v21 )
  {
    v9 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003292404, 0x93Bu, 0LL);
    goto LABEL_19;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  D3D12Resources = CD3DDevice::CreateSharedHandleFence(this, a2, v11, &v20, &hObject, D3D11_FENCE_FLAG_NONE);
  v9 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v17 = 2369;
    goto LABEL_17;
  }
  OpenSharedHandle = v10->lpVtbl->OpenSharedHandle;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v22);
  D3D12Resources = ((__int64 (__fastcall *)(struct ID3D12Device *, HANDLE, GUID *, struct ID3D12Fence **))OpenSharedHandle)(
                     v10,
                     hObject,
                     &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
                     &v22);
  v9 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v17 = 2372;
LABEL_17:
    v15 = D3D12Resources;
    goto LABEL_18;
  }
  ((void (__fastcall *)(struct ID3D12Fence *, const GUID *, _QWORD, _QWORD))v22->lpVtbl->SetPrivateData)(
    v22,
    &WKPDID_D3DDebugObjectName,
    *((unsigned int *)a2 + 2),
    *(_QWORD *)a2);
  v13 = (CSharedFence *)DefaultHeap::Alloc(0x20uLL);
  if ( v13 )
    v14 = CSharedFence::CSharedFence(v13, v20, v22);
  else
    v14 = 0LL;
  v19 = v14;
  if ( v14 )
  {
    (**(void (__fastcall ***)(CSharedFence *))v14)(v14);
    v19 = 0LL;
    *a4 = v14;
    goto LABEL_19;
  }
  v9 = -2147024882;
  v15 = -2147024882;
  v17 = 2382;
LABEL_18:
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v15, v17, 0LL);
LABEL_19:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v19);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v20);
  return v9;
}
