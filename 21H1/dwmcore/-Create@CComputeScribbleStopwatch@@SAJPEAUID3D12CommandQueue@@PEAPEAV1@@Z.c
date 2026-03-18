/*
 * XREFs of ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x1801AE098
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1801A8914 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x1801AE234 (-Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 */

__int64 __fastcall CComputeScribbleStopwatch::Create(
        struct ID3D12CommandQueue *a1,
        struct CComputeScribbleStopwatch **a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (__int64 *)DefaultHeap::Alloc(0x48uLL);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 3) = 0;
    v4[2] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    *((_BYTE *)v4 + 64) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v6 = -2147024882;
    v7 = 7LL;
    v8 = 2147942414LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblestopwatch.cpp",
      (const char *)v8);
    goto LABEL_10;
  }
  v9 = CComputeScribbleStopwatch::Initialize((CComputeScribbleStopwatch *)v5, a1);
  v6 = v9;
  if ( v9 < 0 )
  {
    v8 = (unsigned int)v9;
    v7 = 8LL;
    goto LABEL_8;
  }
  v6 = 0;
  *a2 = (struct CComputeScribbleStopwatch *)v5;
  v5 = 0LL;
LABEL_10:
  if ( v5 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v5 + 5);
    v10 = v5[4];
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v5);
    operator delete(v5);
  }
  return v6;
}
