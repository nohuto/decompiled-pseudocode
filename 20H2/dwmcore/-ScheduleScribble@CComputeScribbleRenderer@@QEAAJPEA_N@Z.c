/*
 * XREFs of ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x18019F4F8
 * Callers:
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800BF7CC (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18017D24C (McTemplateU0xddddd_EventWriteTransfer.c)
 *     ?ReleaseForRender@CComputeScribbleFramebuffer@@QEAAJXZ @ 0x1801A5F80 (-ReleaseForRender@CComputeScribbleFramebuffer@@QEAAJXZ.c)
 *     ?Schedule@CComputeScribbleFramebuffer@@QEAAJPEAVCComputeScribbleScheduler@@I@Z @ 0x1801A6040 (-Schedule@CComputeScribbleFramebuffer@@QEAAJPEAVCComputeScribbleScheduler@@I@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::ScheduleScribble(CComputeScribbleRenderer *this, bool *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned int v6; // r15d
  CComputeScribbleFramebuffer *v7; // rbp
  CComputeScribbleFramebuffer *v8; // rsi
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rdx
  int v13; // r12d
  __int64 v14; // rcx
  char v15; // di
  char v16; // al
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  _OWORD v20[2]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  *a2 = 0;
  if ( *((_BYTE *)this + 52) )
  {
    v4 = *((_QWORD *)this + 3);
    if ( v4 )
    {
      v5 = *((_QWORD *)this + 2);
      v6 = *(_DWORD *)(v5 + 128);
      v7 = *(CComputeScribbleFramebuffer **)(*(_QWORD *)(*(_QWORD *)(v5 + 104) + 8LL * (v6 % *(_DWORD *)(v5 + 176)))
                                           + 96LL);
      if ( v7 )
      {
        v8 = *(CComputeScribbleFramebuffer **)(v4 + 96);
        if ( v8 )
        {
          *((_QWORD *)this + 3) = 0LL;
          memset(v20, 0, sizeof(v20));
          v9 = v5 + 24 + *(int *)(*(_QWORD *)(v5 + 24) + 16LL);
          v10 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v9 + 32LL))(v9, v20);
          if ( v10 < 0 )
          {
            v11 = 282LL;
LABEL_7:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v11,
              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
              (const char *)(unsigned int)v10);
            return (unsigned int)v10;
          }
          v13 = DWORD2(v20[0]);
          v14 = *((_QWORD *)this + 2) + 24LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 16LL);
          v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
          {
            v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 63) + 136LL))(*((_QWORD *)g_pComposition + 63));
            McTemplateU0xddddd_EventWriteTransfer(
              v17,
              &EVTDESC_COMPUTESCRIBBLE_POSTRENDER,
              *((_QWORD *)this + 4),
              v6,
              v15,
              v20[0],
              SBYTE8(v20[0]),
              v16);
          }
          v10 = CComputeScribbleFramebuffer::ReleaseForRender(v7);
          if ( v10 < 0 )
          {
            v11 = 308LL;
            goto LABEL_7;
          }
          v18 = CComputeScribbleFramebuffer::Schedule(v8, *((struct CComputeScribbleScheduler **)this + 5), v13 + 2);
          v19 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x135,
              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
              (const char *)(unsigned int)v18);
            return v19;
          }
          *a2 = *((_BYTE *)v8 + 208);
        }
      }
    }
  }
  return 0LL;
}
