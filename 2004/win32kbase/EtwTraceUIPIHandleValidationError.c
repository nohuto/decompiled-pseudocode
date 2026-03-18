/*
 * XREFs of EtwTraceUIPIHandleValidationError @ 0x1C00ADC64
 * Callers:
 *     ValidateHwndEx @ 0x1C0091FF0 (ValidateHwndEx.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0094D44 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00B0300 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqq @ 0x1C00ADD18 (WPP_RECORDER_SF_DDqq.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C00ADDE0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0nxqq_EtwWriteTransfer @ 0x1C012A990 (McTemplateK0nxqq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIHandleValidationError(
        struct tagPROCESSINFO *a1,
        const struct tagPROCESSINFO *a2,
        char a3,
        char a4)
{
  char v6; // bp
  char v7; // si
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  _UNKNOWN **result; // rax
  int v13; // [rsp+20h] [rbp-78h]
  _OWORD v14[2]; // [rsp+50h] [rbp-48h] BYREF
  int v15; // [rsp+70h] [rbp-28h]

  v15 = 0;
  v6 = (char)a2;
  v7 = (char)a1;
  memset(v14, 0, sizeof(v14));
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v14,
    4u,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nxqq_EtwWriteTransfer(v9, v8, v10, v11, (__int64)v14, a3, a4);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_DDqq(v9, v8, v10, v11, v13, a3, a4, v6, v7);
  return result;
}
