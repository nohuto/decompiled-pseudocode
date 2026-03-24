/*
 * XREFs of ?Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkCommunicationPartner@@PEAPEAV1@@Z @ 0x1801A4570
 * Callers:
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x18019FB30 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CComputeScribbleScheduler@@AEAA@PEAUID3D12CommandQueue@@@Z @ 0x1801A405C (--0CComputeScribbleScheduler@@AEAA@PEAUID3D12CommandQueue@@@Z.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1801A4120 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1801A4A64 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 */

__int64 __fastcall CComputeScribbleScheduler::Create(
        struct IDXGIOutputDWM *a1,
        struct ID3D12CommandQueue *a2,
        struct IDCompositionDirectInkCommunicationPartner *a3,
        struct CComputeScribbleScheduler **a4)
{
  CComputeScribbleScheduler *v8; // rax
  CComputeScribbleScheduler *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v8 = (CComputeScribbleScheduler *)operator new(0xA8uLL);
  if ( v8 )
    v9 = CComputeScribbleScheduler::CComputeScribbleScheduler(v8, a2);
  else
    v9 = 0LL;
  v10 = CComputeScribbleScheduler::Initialize(v9, a1, a3);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v11 = 0;
    *a4 = v9;
    v9 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v10);
  }
  if ( v9 )
  {
    CComputeScribbleScheduler::~CComputeScribbleScheduler(v9);
    operator delete(v9);
  }
  return v11;
}
