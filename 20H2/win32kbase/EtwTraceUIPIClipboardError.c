/*
 * XREFs of EtwTraceUIPIClipboardError @ 0x1C0126F70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C006EF90 (WPP_RECORDER_SF_qDD.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C00777A0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0nqqq_EtwWriteTransfer @ 0x1C0128434 (McTemplateK0nqqq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIClipboardError(PEPROCESS *a1, PEPROCESS *a2, char a3, __int64 a4)
{
  char v4; // bl
  char v6; // si
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  _UNKNOWN **result; // rax
  char v12; // [rsp+44h] [rbp-54h]
  _OWORD v13[2]; // [rsp+48h] [rbp-50h] BYREF
  int v14; // [rsp+68h] [rbp-30h]

  v4 = a4;
  v12 = BYTE4(a4);
  v14 = 0;
  v6 = (char)a2;
  memset(v13, 0, sizeof(v13));
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v13,
    6,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqqq_EtwWriteTransfer(v8, (unsigned int)&UIPIClipboardEvent, v9, v10, (__int64)v13, a3, v4, v12);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_qDD(
                          WPP_MAIN_CB.Queue.ListEntry.Flink,
                          v7,
                          18,
                          15,
                          (__int64)&WPP_54d33ffc9e3d3dbf4995411973a3d843_Traceguids,
                          v6,
                          a3,
                          v4);
  }
  return result;
}
