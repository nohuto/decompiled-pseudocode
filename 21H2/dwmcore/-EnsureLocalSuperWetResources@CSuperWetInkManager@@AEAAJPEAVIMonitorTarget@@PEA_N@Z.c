/*
 * XREFs of ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x1801A7588
 * Callers:
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801A8838 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x18027E684 (-GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRendere.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x18027E704 (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18027EFFC (-TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 */

__int64 __fastcall CSuperWetInkManager::EnsureLocalSuperWetResources(
        CSuperWetInkManager *this,
        struct IMonitorTarget *a2,
        bool *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  CD3DDevice *v11; // rdi
  int D3D12Device; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  _QWORD *v20; // [rsp+40h] [rbp+20h] BYREF
  struct ID3D12Device *v21; // [rsp+48h] [rbp+28h] BYREF
  struct ID3D12CommandQueue *v22; // [rsp+50h] [rbp+30h] BYREF

  v20 = 0LL;
  v4 = *(_QWORD *)a2;
  *a3 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(v4 + 152))(a2);
  v6 = v5 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v20);
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD **))(v6 + 8))(
         v6 + 8,
         &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37,
         &v20);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_25;
  }
  v9 = (__int64)v20 + *(int *)(v20[1] + 12LL) + 8;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v21 = 0LL;
  v11 = (CD3DDevice *)v10;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v21);
  D3D12Device = CD3DDevice::TryGetD3D12Device(v11, &v21);
  v8 = D3D12Device;
  if ( D3D12Device >= 0 )
  {
    if ( !v21 )
      goto LABEL_6;
    D3D12Device = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef(v11, &v22);
    v8 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v14 = 683LL;
      goto LABEL_16;
    }
    if ( !v22 )
      goto LABEL_6;
    D3D12Device = CD3DDevice::GetDirectInkSuperWetRendererNoRef(
                    v11,
                    (struct IDCompositionDirectInkSuperWetRenderer **)&v22);
    v8 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v14 = 692LL;
      goto LABEL_16;
    }
    if ( v22 )
    {
      D3D12Device = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 272LL))(v20);
      v8 = D3D12Device;
      if ( D3D12Device < 0 )
      {
        v14 = 700LL;
        goto LABEL_16;
      }
      if ( !CCommonRegistryData::EnableFrontBufferRenderChecks
        || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v20 + 288LL))(v20) )
      {
        *a3 = 1;
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
          McTemplateU0q_EventWriteTransfer(v16, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 5LL);
        LOBYTE(v15) = 1;
        (*(void (__fastcall **)(_QWORD *, __int64))(*v20 + 296LL))(v20, v15);
        *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*v20 + 264LL))(v20) + 49) = 1;
      }
    }
    else
    {
LABEL_6:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
        McTemplateU0q_EventWriteTransfer(v13, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 0LL);
    }
    v8 = 0;
    goto LABEL_24;
  }
  v14 = 674LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
    (const char *)(unsigned int)D3D12Device);
LABEL_24:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
LABEL_25:
  if ( v20 )
  {
    v17 = (__int64)v20 + *(int *)(v20[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v8;
}
