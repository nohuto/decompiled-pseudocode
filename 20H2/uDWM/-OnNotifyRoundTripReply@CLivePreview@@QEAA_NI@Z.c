/*
 * XREFs of ?OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z @ 0x18003538C
 * Callers:
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x180035290 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084818 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180084878 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

char __fastcall CLivePreview::OnNotifyRoundTripReply(CLivePreview *this, int a2, int a3)
{
  char v3; // di
  __int64 v6; // rcx
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( a2 == *((_DWORD *)this + 140) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmLivePreviewAnimation_Stop,
        a3,
        1,
        (__int64)v7);
    *((_DWORD *)this + 140) = -1;
    return 1;
  }
  if ( a2 == *((_DWORD *)this + 141) )
  {
    if ( !GetSystemMetrics(8193) && (Microsoft_Windows_Dwm_UdwmEnableBits & 4) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(
        v6,
        &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info,
        *((unsigned int *)this + 74));
    *((_DWORD *)this + 141) = -1;
    return 1;
  }
  return v3;
}
