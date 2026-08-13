/*
 * XREFs of __report_gsfailure @ 0x1400014F0
 * Callers:
 *     __security_check_cookie @ 0x1400014C0 (__security_check_cookie.c)
 * Callees:
 *     NtTerminateProcess_0 @ 0x14000171E (NtTerminateProcess_0.c)
 *     RtlCaptureContext_0 @ 0x14000172A (RtlCaptureContext_0.c)
 *     RtlLookupFunctionEntry_0 @ 0x140001736 (RtlLookupFunctionEntry_0.c)
 *     RtlVirtualUnwind_0 @ 0x140001742 (RtlVirtualUnwind_0.c)
 *     RtlUnhandledExceptionFilter_0 @ 0x14000174E (RtlUnhandledExceptionFilter_0.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  _IMAGE_RUNTIME_FUNCTION_ENTRY *FunctionEntry; // [rsp+40h] [rbp-48h]
  unsigned __int64 ControlPc; // [rsp+48h] [rbp-40h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp-30h] BYREF
  PVOID HandlerData[5]; // [rsp+60h] [rbp-28h] BYREF
  unsigned __int64 retaddr; // [rsp+88h] [rbp+0h]
  uintptr_t v7; // [rsp+90h] [rbp+8h] BYREF

  v7 = StackCookie;
  RtlCaptureContext_0(&ContextRecord);
  ControlPc = ContextRecord.Rip;
  FunctionEntry = RtlLookupFunctionEntry_0(ContextRecord.Rip, &ImageBase, 0LL);
  if ( FunctionEntry )
  {
    RtlVirtualUnwind_0(0, ImageBase, ControlPc, FunctionEntry, &ContextRecord, HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (unsigned __int64)&v7;
  }
  qword_140003020 = ContextRecord.Rip;
  ContextRecord.Rcx = v7;
  dword_140003010 = -1073740791;
  dword_140003014 = 1;
  dword_140003028 = 1;
  unk_140003030 = 2LL;
  HandlerData[2] = (PVOID)_security_cookie_complement;
  RtlUnhandledExceptionFilter_0((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  NtTerminateProcess_0((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
