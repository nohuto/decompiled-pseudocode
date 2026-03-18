/*
 * XREFs of ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x1801EC858
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1801E9EA0 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleStopwatch@@QEAA@XZ @ 0x1801E9484 (--1CComputeScribbleStopwatch@@QEAA@XZ.c)
 *     ?Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x1801EC9E0 (-Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 */

__int64 __fastcall CComputeScribbleStopwatch::Create(
        struct ID3D12CommandQueue *a1,
        struct CComputeScribbleStopwatch **a2)
{
  struct CComputeScribbleStopwatch *v4; // rax
  struct CComputeScribbleStopwatch *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct CComputeScribbleStopwatch *)DefaultHeap::Alloc(0x48uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 3) = 0;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_BYTE *)v4 + 64) = 0;
    v6 = CComputeScribbleStopwatch::Initialize(v4, a1);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a2 = v5;
      return 0;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
      (const char *)0x8007000ELL);
    v5 = 0LL;
  }
  if ( v5 )
  {
    CComputeScribbleStopwatch::~CComputeScribbleStopwatch(v5);
    operator delete(v5);
  }
  return v7;
}
