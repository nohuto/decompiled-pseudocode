/*
 * XREFs of EtwTraceUIPIEventHookError @ 0x1C012F3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C00A00F0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0nqxqqddq_EtwWriteTransfer @ 0x1C0130808 (McTemplateK0nqxqqddq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qqDqq @ 0x1C01326C4 (WPP_RECORDER_SF_qqDqq.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIEventHookError(__int64 a1, PETHREAD *a2, PETHREAD *a3)
{
  char v3; // si
  char v4; // di
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _UNKNOWN **result; // rax
  int v11; // [rsp+20h] [rbp-88h]
  _OWORD v12[2]; // [rsp+60h] [rbp-48h] BYREF
  int v13; // [rsp+80h] [rbp-28h]

  v3 = (char)a3;
  v4 = (char)a2;
  memset(v12, 0, sizeof(v12));
  v13 = 0;
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v12,
    3,
    a2,
    0LL,
    a3,
    0LL);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqxqqddq_EtwWriteTransfer(
      v7,
      v6,
      v8,
      v9,
      (__int64)v12,
      *(_DWORD *)(a1 + 28),
      *(_QWORD *)(a1 + 32),
      *(_DWORD *)(a1 + 40),
      *(_DWORD *)(a1 + 44),
      *(_DWORD *)(a1 + 48),
      *(_DWORD *)(a1 + 52),
      *(_DWORD *)(a1 + 56));
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_qqDqq(
                          v7,
                          v6,
                          v8,
                          v9,
                          v11,
                          a1,
                          *(_QWORD *)(a1 + 16),
                          *(_DWORD *)(a1 + 56),
                          v4,
                          v3);
  return result;
}
