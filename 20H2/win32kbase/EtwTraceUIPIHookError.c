/*
 * XREFs of EtwTraceUIPIHookError @ 0x1C0127160
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C00777A0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0ndcdxx_EtwWriteTransfer @ 0x1C01282F8 (McTemplateK0ndcdxx_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDqq @ 0x1C012A268 (WPP_RECORDER_SF_qDqq.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIHookError(
        char a1,
        char a2,
        PETHREAD *a3,
        PETHREAD *a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  char v9; // si
  char v11; // di
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  _UNKNOWN **result; // rax
  int v17; // [rsp+20h] [rbp-78h]
  _OWORD v18[2]; // [rsp+50h] [rbp-48h] BYREF
  int v19; // [rsp+70h] [rbp-28h]

  v9 = (char)a4;
  v19 = 0;
  v11 = (char)a3;
  memset(v18, 0, sizeof(v18));
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v18,
    2,
    a3,
    0LL,
    a4,
    0LL);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0ndcdxx_EtwWriteTransfer(v13, v12, v14, v15, (__int64)v18, a5, a2, a6, a7, a8);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_qDqq(v13, v12, v14, v15, v17, a1, a2, v11, v9);
  return result;
}
