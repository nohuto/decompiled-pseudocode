/*
 * XREFs of ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x180195288
 * Callers:
 *     ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x180195010 (-CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5FE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152A24 (McTemplateU0q_EventWriteTransfer.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x18023F94C (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x180240744 (-TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 */

__int64 __fastcall CSuperWetInkManager::EnsureLocalSuperWetResources(
        CSuperWetInkManager *this,
        struct IMonitorTarget *a2,
        bool *a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  CD3DDevice *v12; // rdi
  int D3D12Device; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  CSuperWetInkManager *v22; // [rsp+40h] [rbp+20h] BYREF
  struct ID3D12Device *v23; // [rsp+48h] [rbp+28h] BYREF
  struct ID3D12CommandQueue *v24; // [rsp+50h] [rbp+30h] BYREF

  v22 = this;
  v3 = *(_QWORD *)a2;
  v22 = 0LL;
  *a3 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(v3 + 120))(a2);
  v6 = v5 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
  if ( v22 )
  {
    v7 = (__int64)v22 + *(int *)(*((_QWORD *)v22 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, CSuperWetInkManager **))(v6 + 8))(
         v6 + 8,
         &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37,
         &v22);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (__int64)v22 + *(int *)(*((_QWORD *)v22 + 1) + 12LL) + 8;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v23 = 0LL;
    v12 = (CD3DDevice *)v11;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v23);
    D3D12Device = CD3DDevice::TryGetD3D12Device(v12, &v23);
    v9 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v15 = 419LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
        (const char *)(unsigned int)D3D12Device);
LABEL_27:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
      goto LABEL_28;
    }
    if ( !v23 )
      goto LABEL_8;
    D3D12Device = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef(v12, &v24);
    v9 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v15 = 428LL;
      goto LABEL_15;
    }
    if ( v24 )
    {
      D3D12Device = (*(__int64 (__fastcall **)(CSuperWetInkManager *))(*(_QWORD *)v22 + 216LL))(v22);
      v9 = D3D12Device;
      if ( D3D12Device < 0 )
      {
        v15 = 436LL;
        goto LABEL_15;
      }
      if ( CCommonRegistryData::EnableFrontBufferRenderChecks
        && !(*(unsigned __int8 (__fastcall **)(CSuperWetInkManager *))(*(_QWORD *)v22 + 240LL))(v22) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
          McTemplateU0q_EventWriteTransfer(v17, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 5LL);
        LOBYTE(v16) = 1;
        (*(void (__fastcall **)(CSuperWetInkManager *, __int64))(*(_QWORD *)v22 + 248LL))(v22, v16);
        v18 = *(_QWORD *)v22;
        v24 = 0LL;
        v19 = (*(__int64 (__fastcall **)(CSuperWetInkManager *, struct ID3D12CommandQueue **))(v18 + 208))(v22, &v24);
        v9 = v19;
        if ( v19 >= 0 )
        {
          v9 = 0;
          BYTE5(v24[6].lpVtbl) = 1;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1BF,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
            (const char *)(unsigned int)v19);
        }
        if ( v24 )
          CRenderTargetBitmap::Release((CRenderTargetBitmap *)v24);
        goto LABEL_27;
      }
      *a3 = 1;
    }
    else
    {
LABEL_8:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        McTemplateU0q_EventWriteTransfer(v14, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 0LL);
    }
    v9 = 0;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19D,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_28:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v22);
  return v9;
}
