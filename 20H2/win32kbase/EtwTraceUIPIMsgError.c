/*
 * XREFs of EtwTraceUIPIMsgError @ 0x1C00772F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqDDD @ 0x1C00773BC (WPP_RECORDER_SF_qqDDD.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C00777A0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0nqxx_EtwWriteTransfer @ 0x1C01285A4 (McTemplateK0nqxx_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIMsgError(
        struct tagPROCESSINFO *a1,
        const struct tagPROCESSINFO *a2,
        char a3,
        char a4,
        __int64 a5)
{
  char v7; // r14
  char v8; // bp
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  _UNKNOWN **result; // rax
  int v14; // [rsp+20h] [rbp-78h]
  _OWORD v15[2]; // [rsp+50h] [rbp-48h] BYREF
  int v16; // [rsp+70h] [rbp-28h]

  v16 = 0;
  v7 = (char)a2;
  v8 = (char)a1;
  memset(v15, 0, sizeof(v15));
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v15,
    1u,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqxx_EtwWriteTransfer(v10, v9, v11, v12, (__int64)v15, a3, a4, a5);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_qqDDD(v10, v9, v11, v12, v14, v7, v8, a3, a4, a5);
  return result;
}
