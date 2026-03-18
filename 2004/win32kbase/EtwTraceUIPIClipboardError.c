/*
 * XREFs of EtwTraceUIPIClipboardError @ 0x1C01292C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C003EA00 (WPP_RECORDER_SF_qDD.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C00ADDE0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0nqqq_EtwWriteTransfer @ 0x1C012A784 (McTemplateK0nqqq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIClipboardError(PEPROCESS *a1, PEPROCESS *a2, int a3, __int64 a4)
{
  int v4; // ebx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _UNKNOWN **result; // rax
  __int64 v11; // [rsp+30h] [rbp-68h]
  __int64 v12; // [rsp+38h] [rbp-60h]
  _OWORD v14[2]; // [rsp+48h] [rbp-50h] BYREF
  int v15; // [rsp+68h] [rbp-30h]

  v4 = a4;
  v15 = 0;
  memset(v14, 0, sizeof(v14));
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v14,
    6,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqqq_EtwWriteTransfer(v7, (unsigned int)&UIPIClipboardEvent, v8, v9, (__int64)v14, a3, v4, SBYTE4(a4));
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = v4;
    LODWORD(v11) = a3;
    return (_UNKNOWN **)WPP_RECORDER_SF_qDD(
                          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                          4u,
                          0x12u,
                          0xFu,
                          (__int64)&WPP_54d33ffc9e3d3dbf4995411973a3d843_Traceguids,
                          a2,
                          v11,
                          v12,
                          a4);
  }
  return result;
}
