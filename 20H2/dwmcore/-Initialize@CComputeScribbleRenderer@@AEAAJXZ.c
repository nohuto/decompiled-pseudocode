/*
 * XREFs of ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x18019F160
 * Callers:
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z @ 0x18019EFAC (-Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016427C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1801A3750 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ?Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkCommunicationPartner@@PEAPEAV1@@Z @ 0x1801A3BA0 (-Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDComposit.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180239DF0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x18023CC9C (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?GetDXGIOutputDWM@CLegacySwapChain@@QEBAJPEAPEAUIDXGIOutputDWM@@@Z @ 0x180246FB4 (-GetDXGIOutputDWM@CLegacySwapChain@@QEBAJPEAPEAUIDXGIOutputDWM@@@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::Initialize(CComputeScribbleRenderer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  int HighPriorityComputeCommandQueueNoRef; // eax
  int v5; // ebx
  CLegacySwapChain *v6; // rcx
  int DXGIOutputDWM; // eax
  int DirectInkFactory; // eax
  __int64 v9; // rax
  int v10; // eax
  CComputeScribbleScheduler *v11; // rdi
  CComputeScribbleScheduler **v13; // [rsp+20h] [rbp-28h]
  struct CComputeScribbleScheduler *v14; // [rsp+28h] [rbp-20h] BYREF
  char v15; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  struct IDCompositionDirectInkCommunicationPartner *v17; // [rsp+70h] [rbp+28h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v18; // [rsp+78h] [rbp+30h] BYREF
  struct IDXGIOutputDWM *v19; // [rsp+80h] [rbp+38h] BYREF
  struct ID3D12CommandQueue *v20; // [rsp+88h] [rbp+40h] BYREF

  v2 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 8LL) + *((_QWORD *)this + 2) + 24LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  HighPriorityComputeCommandQueueNoRef = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef((CD3DDevice *)v3, &v20);
  v5 = HighPriorityComputeCommandQueueNoRef;
  if ( HighPriorityComputeCommandQueueNoRef >= 0 )
  {
    v6 = (CLegacySwapChain *)*((_QWORD *)this + 2);
    v19 = 0LL;
    DXGIOutputDWM = CLegacySwapChain::GetDXGIOutputDWM(v6, &v19);
    v5 = DXGIOutputDWM;
    if ( DXGIOutputDWM >= 0 )
    {
      v18 = 0LL;
      DirectInkFactory = CD2DContext::GetDirectInkFactory((CD2DContext *)(v3 + 16), &v18);
      if ( DirectInkFactory < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x9D,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
          (const char *)(unsigned int)DirectInkFactory);
        __debugbreak();
      }
      v9 = *(_QWORD *)v18;
      v17 = 0LL;
      v10 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkCommunicationPartner **))(v9 + 72))(
              v18,
              &v17);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xA0,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
      v14 = 0LL;
      v13 = (CComputeScribbleScheduler **)((char *)this + 40);
      v15 = 1;
      v5 = CComputeScribbleScheduler::Create(v19, v20, v17, &v14);
      if ( v15 )
      {
        v11 = *v13;
        *v13 = v14;
        if ( v11 )
        {
          CComputeScribbleScheduler::~CComputeScribbleScheduler(v11);
          operator delete(v11);
        }
      }
      if ( v5 >= 0 )
        v5 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA6,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
          (const char *)(unsigned int)v5);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
        (const char *)(unsigned int)DXGIOutputDWM);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
      (const char *)(unsigned int)HighPriorityComputeCommandQueueNoRef);
  }
  return (unsigned int)v5;
}
