/*
 * XREFs of ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x1801E48D8
 * Callers:
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800BBB7C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqqqqt_EventWriteTransfer @ 0x1801E4A50 (McTemplateU0xqqqqt_EventWriteTransfer.c)
 *     ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCComputeScribble@@_KI@Z @ 0x1801EA85C (-ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCCom.c)
 */

__int64 __fastcall CComputeScribbleRenderer::ScheduleScribble(CComputeScribbleRenderer *this, bool *a2)
{
  __int64 v4; // r8
  unsigned int v5; // r14d
  struct CComputeScribbleFramebuffer *v6; // rbp
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v11; // edi
  __int64 v12; // rcx
  unsigned int v13; // eax
  struct CComputeScribble *v14; // r8
  _OWORD v15[2]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *a2 = 0;
  if ( *((_BYTE *)this + 48) )
  {
    v4 = *((_QWORD *)this + 2);
    v5 = *(_DWORD *)(v4 + 128);
    v6 = *(struct CComputeScribbleFramebuffer **)(*(_QWORD *)(*(_QWORD *)(v4 + 104) + 8LL * (v5 % *(_DWORD *)(v4 + 204)))
                                                + 96LL);
    if ( v6 )
    {
      memset(v15, 0, sizeof(v15));
      v7 = v4 + 24 + *(int *)(*(_QWORD *)(v4 + 24) + 16LL);
      v8 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v7 + 32LL))(v7, v15);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF7,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
          (const char *)(unsigned int)v8);
        return v9;
      }
      v11 = DWORD2(v15[0]) + 2;
      v12 = *((_QWORD *)this + 2) + 24LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 16LL);
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
        McTemplateU0xqqqqt_EventWriteTransfer(
          DWORD2(v15[0]),
          (unsigned int)&EVTDESC_COMPUTESCRIBBLE_PRESCHEDULE,
          *((_QWORD *)this + 3),
          v5,
          v13,
          v15[0],
          SBYTE8(v15[0]),
          v13 > LODWORD(v15[0]));
      v14 = (struct CComputeScribble *)*((_QWORD *)this + 5);
      if ( v14 )
      {
        CComputeScribbleScheduler::ScheduleScribbleFrame(
          *((CComputeScribbleScheduler **)this + 4),
          v6,
          v14,
          *((_QWORD *)this + 3),
          v11);
        *a2 = 1;
      }
    }
  }
  return 0LL;
}
