/*
 * XREFs of ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C00ADDE0
 * Callers:
 *     EtwTraceUIPIMsgError @ 0x1C00AD930 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPISystemError @ 0x1C00ADAE0 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIInputError @ 0x1C00ADBA0 (EtwTraceUIPIInputError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C00ADC64 (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceUIPIClipboardError @ 0x1C01292C0 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIEventHookError @ 0x1C01293B0 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPIHookError @ 0x1C01294B0 (EtwTraceUIPIHookError.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpSetTraceHeader(
        struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *a1,
        int a2,
        PETHREAD *a3,
        PEPROCESS *a4,
        PETHREAD *a5,
        PEPROCESS *a6)
{
  *(_DWORD *)a1 = a2;
  if ( a3 )
  {
    *((_DWORD *)a1 + 2) = (unsigned int)PsGetThreadId(*a3);
    a4 = (PEPROCESS *)a3[52];
  }
  if ( a4 )
  {
    *((_DWORD *)a1 + 1) = (unsigned int)PsGetProcessId(*a4);
    *((_DWORD *)a1 + 3) = *((_DWORD *)a4 + 220);
    *((_DWORD *)a1 + 4) = *((_DWORD *)a4 + 221);
  }
  if ( a5 )
  {
    *((_DWORD *)a1 + 6) = (unsigned int)PsGetThreadId(*a5);
    a6 = (PEPROCESS *)a5[52];
  }
  if ( a6 )
  {
    *((_DWORD *)a1 + 5) = (unsigned int)PsGetProcessId(*a6);
    *((_DWORD *)a1 + 7) = *((_DWORD *)a6 + 220);
    *((_DWORD *)a1 + 8) = *((_DWORD *)a6 + 221);
  }
}
