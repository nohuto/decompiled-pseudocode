/*
 * XREFs of ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIUnknown@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1800EF7CC
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIUnknown@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1800EFA30 (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x1800989E0 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801852C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801A6D2C (-clear@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::BuildCommandList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r15d
  char v11; // r14
  __int64 v12; // rdx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  int v20; // [rsp+20h] [rbp-49h]
  int *v21; // [rsp+20h] [rbp-49h]
  int v22; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23; // [rsp+48h] [rbp-21h]
  _QWORD v24[2]; // [rsp+50h] [rbp-19h] BYREF
  int v25; // [rsp+60h] [rbp-9h]
  int v26; // [rsp+64h] [rbp-5h]
  __int64 v27; // [rsp+68h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v23 = a4;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 64LL))(*(_QWORD *)(a1 + 32));
  if ( v7 < 0 )
  {
    v8 = 354LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v7,
      v20);
    return (unsigned int)v7;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 80LL))(
         *(_QWORD *)(a1 + 40),
         *(_QWORD *)(a1 + 32),
         0LL);
  if ( v7 < 0 )
  {
    v8 = 355LL;
    goto LABEL_3;
  }
  v22 = 0;
  v9 = *(_QWORD *)(a1 + 104);
  v10 = 0;
  v11 = 1;
  if ( (*(_QWORD *)(a1 + 112) - v9) >> 3 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v21 = &v22;
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(v9 + 8 * v12) + 32LL))(
              *(_QWORD *)(v9 + 8 * v12),
              *(_QWORD *)(a1 + 40),
              *(_QWORD *)(a1 + 24),
              a3);
      v7 = v13;
      if ( v13 < 0 )
        break;
      CRegion::AppendRects<tagRECT>((const struct FastRegion::Internal::CRgnData **)(a1 + 128), (__int64)v24, 1u);
      v9 = *(_QWORD *)(a1 + 104);
      v12 = ++v10;
      if ( v10 >= (unsigned __int64)((*(_QWORD *)(a1 + 112) - v9) >> 3) )
        goto LABEL_10;
    }
    v17 = 379LL;
  }
  else
  {
LABEL_10:
    std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear(a1 + 104);
    if ( v22 )
    {
      v14 = *(__int64 **)(a1 + 40);
      v24[1] = *(_QWORD *)(a1 + 24);
      v26 = v22;
      v25 = 0;
      v15 = *v14;
      v27 = 0LL;
      v24[0] = 0LL;
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD *))(v15 + 208))(v14, 1LL, v24);
      v22 = 0;
    }
    v16 = *(_QWORD *)(a1 + 40);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v16 + 424LL))(v16, *(_QWORD *)(a2 + 32), 2LL);
    LODWORD(v21) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v16 + 432LL))(
      v16,
      *(_QWORD *)(a2 + 32),
      2LL,
      0LL);
    *(_BYTE *)(a2 + 64) = 0;
    v11 = 0;
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 72LL))(*(_QWORD *)(a1 + 40));
    v7 = v13;
    if ( v13 >= 0 )
    {
      v7 = 0;
      goto LABEL_17;
    }
    v17 = 397LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
    (const char *)(unsigned int)v13,
    (int)v21);
LABEL_17:
  if ( v11 )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 72LL))(*(_QWORD *)(a1 + 40));
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x168,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
        (const char *)(unsigned int)v18,
        (int)v21);
  }
  return (unsigned int)v7;
}
