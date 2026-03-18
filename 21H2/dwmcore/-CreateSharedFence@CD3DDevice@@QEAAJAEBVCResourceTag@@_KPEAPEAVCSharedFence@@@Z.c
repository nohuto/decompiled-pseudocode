/*
 * XREFs of ?CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z @ 0x18027D8EC
 * Callers:
 *     ?Initialize@CComputeScribbleSynchronizer@@AEAAJPEAVCD3DDevice@@@Z @ 0x1801ED148 (-Initialize@CComputeScribbleSynchronizer@@AEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateSharedHandleFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x180021EDC (-CreateSharedHandleFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CSharedFence@@QEAA@PEAUID3D11Fence@@PEAUID3D12Fence@@@Z @ 0x18027CA3C (--0CSharedFence@@QEAA@PEAUID3D11Fence@@PEAUID3D12Fence@@@Z.c)
 *     ??4?$com_ptr_t@VCSharedFence@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSharedFence@@@Z @ 0x18027CB6C (--4-$com_ptr_t@VCSharedFence@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSharedFence@@@Z.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18027DC58 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     ?GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18027E4A8 (-GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
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
  __int64 v11; // r8
  HRESULT (__stdcall *OpenSharedHandle)(ID3D12Device *, HANDLE, const IID *const, void **); // rbx
  CSharedFence *v13; // rax
  CSharedFence *v14; // rax
  struct CSharedFence *v15; // rax
  int v16; // r9d
  unsigned int v18; // [rsp+20h] [rbp-30h]
  void *v19; // [rsp+30h] [rbp-20h] BYREF
  struct CSharedFence *v20; // [rsp+38h] [rbp-18h] BYREF
  struct ID3D11Fence *v21; // [rsp+40h] [rbp-10h] BYREF
  struct ID3D12Device *v22; // [rsp+48h] [rbp-8h] BYREF
  struct ID3D12Fence *v23; // [rsp+90h] [rbp+40h] BYREF

  v21 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  D3D12Resources = CD3DDevice::EnsureBeginCreateD3D12Resources(this);
  v9 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v18 = 1899;
    goto LABEL_17;
  }
  D3D12Resources = CD3DDevice::GetD3D12DeviceNoRef(this, &v22);
  v9 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v18 = 1902;
    goto LABEL_17;
  }
  v10 = v22;
  if ( v22 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v19,
      0LL);
    D3D12Resources = CD3DDevice::CreateSharedHandleFence(this, a2, v11, &v21, &v19, D3D11_FENCE_FLAG_NONE);
    v9 = D3D12Resources;
    if ( D3D12Resources < 0 )
    {
      v18 = 1912;
    }
    else
    {
      OpenSharedHandle = v10->lpVtbl->OpenSharedHandle;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v23);
      D3D12Resources = ((__int64 (__fastcall *)(struct ID3D12Device *, void *, GUID *, struct ID3D12Fence **))OpenSharedHandle)(
                         v10,
                         v19,
                         &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
                         &v23);
      v9 = D3D12Resources;
      if ( D3D12Resources >= 0 )
      {
        ((void (__fastcall *)(struct ID3D12Fence *, const GUID *, _QWORD, _QWORD))v23->lpVtbl->SetPrivateData)(
          v23,
          &WKPDID_D3DDebugObjectName,
          *((unsigned int *)a2 + 2),
          *(_QWORD *)a2);
        v13 = (CSharedFence *)DefaultHeap::Alloc(0x20uLL);
        if ( v13 )
          v14 = CSharedFence::CSharedFence(v13, v21, v23);
        else
          v14 = 0LL;
        wil::com_ptr_t<CSharedFence,wil::err_returncode_policy>::operator=(
          (__int64 *)&v20,
          (void (__fastcall ***)(_QWORD))v14);
        v15 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          *a4 = v15;
          goto LABEL_19;
        }
        v9 = -2147024882;
        v16 = -2147024882;
        v18 = 1925;
LABEL_18:
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v16, v18);
        goto LABEL_19;
      }
      v18 = 1915;
    }
LABEL_17:
    v16 = D3D12Resources;
    goto LABEL_18;
  }
  v9 = -2003292404;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2003292404, 0x772u);
LABEL_19:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v19);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v21);
  return v9;
}
