/*
 * XREFs of ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18023FF38
 * Callers:
 *     ?CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z @ 0x18023FC28 (-CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z.c)
 *     ?GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1802405DC (-GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x18024065C (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x180241454 (-TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x18023D7B0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___ @ 0x18023DEC4 (CAsyncTask_CD3DDevice--D3D12Resources_--Start__lambda_88358cf897930614284adb3422b4c545___.c)
 *     ??_G?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAPEAXI@Z @ 0x18023E54C (--_G-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CD3DDevice::EnsureBeginCreateD3D12Resources(CD3DDevice *this)
{
  __int64 **v1; // rsi
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 **); // rcx
  int v4; // eax
  int started; // ebx
  __int64 v6; // rax
  int v7; // eax
  int DirectInkFactory; // eax
  __int64 *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v12; // [rsp+28h] [rbp-28h] BYREF
  __int64 **v13; // [rsp+30h] [rbp-20h]
  __int64 *v14; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IDCompositionDirectInkFactoryPartner *v17; // [rsp+70h] [rbp+20h] BYREF
  __int64 v18; // [rsp+78h] [rbp+28h] BYREF
  __int64 *v19; // [rsp+80h] [rbp+30h] BYREF

  v1 = (__int64 **)((char *)this + 1072);
  if ( !*((_QWORD *)this + 134) )
  {
    v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*((_QWORD *)this + 74);
    v19 = 0LL;
    v4 = (**v3)(v3, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v19);
    started = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1091,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
        (const char *)(unsigned int)v4);
LABEL_19:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
      return (unsigned int)started;
    }
    v6 = *v19;
    v18 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 56))(v19, &v18);
    started = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1094,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
        (const char *)(unsigned int)v7);
LABEL_18:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
      goto LABEL_19;
    }
    v17 = 0LL;
    DirectInkFactory = CD2DContext::GetDirectInkFactory((struct IDCompositionDirectInkFactoryPartner **)this + 2, &v17);
    started = DirectInkFactory;
    if ( DirectInkFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1097,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
        (const char *)(unsigned int)DirectInkFactory);
LABEL_17:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
      goto LABEL_18;
    }
    v11 = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v12 = v17;
    if ( v17 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v17 + 8LL))(v17);
    v14 = 0LL;
    v13 = v1;
    v15 = 1;
    started = CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___(
                (__int64)&v11,
                &v14);
    if ( v15 )
    {
      v9 = *v13;
      *v13 = v14;
      if ( v9 )
        CAsyncTask<CD3DDevice::D3D12Resources>::`scalar deleting destructor'(v9);
    }
    if ( started < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10A2,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
        (const char *)(unsigned int)started);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
      goto LABEL_17;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  }
  return 0LL;
}
