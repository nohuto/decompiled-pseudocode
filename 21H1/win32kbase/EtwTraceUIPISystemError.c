/*
 * XREFs of EtwTraceUIPISystemError @ 0x1C009FDF0
 * Callers:
 *     NtUserEnableTouchPad @ 0x1C0138A20 (NtUserEnableTouchPad.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C013EC10 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C013F7D0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C00A00F0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0nq_EtwWriteTransfer @ 0x1C01306F4 (McTemplateK0nq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPISystemError(struct tagPROCESSINFO *a1, const struct tagPROCESSINFO *a2)
{
  char v2; // bl
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  _UNKNOWN **result; // rax
  _OWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+50h] [rbp-18h]

  v9 = 0;
  v2 = (char)a1;
  memset(v8, 0, sizeof(v8));
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v8,
    7u,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nq_EtwWriteTransfer(v4, v3, v5, v6, (__int64)v8);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_q(
                          WPP_MAIN_CB.Queue.ListEntry.Flink,
                          v3,
                          18,
                          16,
                          (__int64)&WPP_54d33ffc9e3d3dbf4995411973a3d843_Traceguids,
                          v2);
  }
  return result;
}
