/*
 * XREFs of ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x180194E9C
 * Callers:
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x180195914 (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FAE0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18005FB10 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5FE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152A24 (McTemplateU0q_EventWriteTransfer.c)
 *     ?CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z @ 0x180194E48 (-CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x18023F94C (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x180240744 (-TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 */

__int64 __fastcall CSuperWetInkManager::CheckHostComputeScribbleSupport(
        struct ID3D12Device *this,
        const struct CSuperWetInkManager::VailSuperWetStroke *a2,
        bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, CD3DDevice **); // rbx
  int v10; // eax
  CD3DDevice *v11; // rbx
  int D3D12Device; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct ID3D12Device *v16; // [rsp+50h] [rbp+30h] BYREF
  CD3DDevice *v17; // [rsp+60h] [rbp+40h] BYREF
  struct ID3D12CommandQueue *v18; // [rsp+68h] [rbp+48h] BYREF

  v16 = this;
  *a3 = 0;
  LOBYTE(v16) = 0;
  v5 = CSuperWetInkManager::CheckCommonComputeScribbleSupport((CSuperWetInkManager *)this, (bool *)&v16);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( !(_BYTE)v16 )
      return 0LL;
    v8 = *((_QWORD *)a2 + 1);
    v17 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, CD3DDevice **))(*(_QWORD *)v8 + 8LL);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v17);
    v10 = v9(v8, &v17);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E8,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_20;
    }
    v16 = 0LL;
    v11 = v17;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v16);
    D3D12Device = CD3DDevice::TryGetD3D12Device(v11, &v16);
    v6 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v14 = 492LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
        (const char *)(unsigned int)D3D12Device);
LABEL_19:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
LABEL_20:
      if ( v17 )
        CD3DDevice::Release(v17);
      return v6;
    }
    if ( !v16 )
      goto LABEL_10;
    D3D12Device = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef(v17, &v18);
    v6 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v14 = 503LL;
      goto LABEL_14;
    }
    if ( v18 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, CD3DDevice *, char *))(**(_QWORD **)a2 + 8LL))(
             *(_QWORD *)a2,
             v17,
             (char *)a2 + 24) )
      {
        *a3 = 1;
      }
    }
    else
    {
LABEL_10:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        McTemplateU0q_EventWriteTransfer(v13, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 0LL);
    }
    v6 = 0;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1DE,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
