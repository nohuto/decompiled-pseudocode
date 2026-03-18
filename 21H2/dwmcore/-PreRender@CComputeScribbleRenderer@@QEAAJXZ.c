/*
 * XREFs of ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801E46C8
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x180081554 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DC290 (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180111D0C (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0xqqqqt_EventWriteTransfer @ 0x1801E4A50 (McTemplateU0xqqqqt_EventWriteTransfer.c)
 *     ?SetScannedOutBuffer@CComputeScribbleScheduler@@QEAAXII@Z @ 0x1801EA998 (-SetScannedOutBuffer@CComputeScribbleScheduler@@QEAAXII@Z.c)
 *     ?AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x1801EB2DC (-AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z.c)
 *     ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x1801EBBF0 (-SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 */

__int64 __fastcall CComputeScribbleRenderer::PreRender(CComputeScribbleRenderer *this)
{
  __int64 v1; // r8
  char v3; // r12
  __int64 v4; // r9
  unsigned int v5; // r15d
  __int64 v6; // rcx
  CComputeScribbleFramebuffer *v7; // r14
  const EVENT_DESCRIPTOR *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // ebp
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // esi
  unsigned int v17[4]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v18; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v1 = *((_QWORD *)this + 2);
  v3 = *((_BYTE *)this + 48);
  v4 = *((_QWORD *)this + 3) + 1LL;
  *((_QWORD *)this + 3) = v4;
  v5 = *(_DWORD *)(v1 + 128);
  v6 = *(_QWORD *)(*(_QWORD *)(v1 + 104) + 8LL * (v5 % *(_DWORD *)(v1 + 204)));
  v7 = *(CComputeScribbleFramebuffer **)(v6 + 96);
  if ( v3 )
  {
    if ( !*((_BYTE *)this + 49) )
    {
      *((_BYTE *)this + 48) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      {
        v8 = (const EVENT_DESCRIPTOR *)&EVTDESC_COMPUTESCRIBBLE_ACTIVE_Stop;
LABEL_8:
        McTemplateU0x_EventWriteTransfer(v6, v8, v4);
      }
    }
  }
  else if ( *((_BYTE *)this + 49) )
  {
    *((_BYTE *)this + 48) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    {
      v8 = (const EVENT_DESCRIPTOR *)&EVTDESC_COMPUTESCRIBBLE_ACTIVE_Start;
      goto LABEL_8;
    }
  }
  if ( *((_BYTE *)this + 48) )
  {
    wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset((__int64 *)this + 5);
    v9 = *((_QWORD *)this + 2) + 24LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 16LL);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v11 = *((_QWORD *)this + 2);
    *(_OWORD *)v17 = 0LL;
    v12 = v10;
    v18 = 0LL;
    v13 = *(int *)(*(_QWORD *)(v11 + 24) + 16LL) + v11 + 24;
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 32LL))(v13, v17);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
        (const char *)(unsigned int)v14);
      return v15;
    }
    CComputeScribbleFramebuffer::AcquireForRender(v7, *((_QWORD *)this + 3));
    if ( !v3 )
      CComputeScribbleScheduler::SetScannedOutBuffer(
        *((CComputeScribbleScheduler **)this + 4),
        (*(_DWORD *)(*((_QWORD *)this + 2) + 204LL) - (v12 - v17[0]) % 3 + v5 - 1) % 3,
        v17[0]);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0xqqqqt_EventWriteTransfer(
        v17[0],
        (unsigned int)&EVTDESC_COMPUTESCRIBBLE_PRERENDER,
        *((_QWORD *)this + 3),
        v5,
        v12,
        v17[0],
        v17[2],
        v12 > v17[0]);
  }
  else
  {
    CComputeScribbleFramebuffer::SaveDirtyForPreRender(v7);
  }
  return 0LL;
}
