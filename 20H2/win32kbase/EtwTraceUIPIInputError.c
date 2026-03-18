/*
 * XREFs of EtwTraceUIPIInputError @ 0x1C0077560
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0075F50 (NtUserGetAsyncKeyState.c)
 *     NtUserGetKeyboardState @ 0x1C0076310 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyState @ 0x1C00764D0 (NtUserGetKeyState.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00B69A8 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0194658 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C00777A0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0077870 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0nqqq_EtwWriteTransfer @ 0x1C0128434 (McTemplateK0nqqq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIInputError(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        char a3,
        __int64 a4,
        char a5)
{
  char v5; // bl
  char v7; // di
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  _UNKNOWN **result; // rax
  char v13; // [rsp+44h] [rbp-54h]
  _OWORD v14[2]; // [rsp+48h] [rbp-50h] BYREF
  int v15; // [rsp+68h] [rbp-30h]

  v5 = a4;
  v7 = (char)a1;
  v13 = BYTE4(a4);
  v15 = 0;
  memset(v14, 0, sizeof(v14));
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v14,
    5u,
    a1,
    0LL,
    a2,
    0LL);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqqq_EtwWriteTransfer(v9, (unsigned int)&UIPIInputEvent, v10, v11, (__int64)v14, a5, v5, v13);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_qq(
                          WPP_MAIN_CB.Queue.ListEntry.Flink,
                          v8,
                          18,
                          14,
                          (__int64)&WPP_54d33ffc9e3d3dbf4995411973a3d843_Traceguids,
                          v7,
                          a3);
  }
  return result;
}
