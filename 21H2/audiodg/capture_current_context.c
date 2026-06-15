/*
 * XREFs of capture_current_context @ 0x14001D1F8
 * Callers:
 *     __report_securityfailure @ 0x14001D154 (__report_securityfailure.c)
 * Callees:
 *     <none>
 */

struct _RUNTIME_FUNCTION *__fastcall capture_current_context(PCONTEXT ContextRecord)
{
  ULONG64 Rip; // rdi
  struct _RUNTIME_FUNCTION *result; // rax
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+60h] [rbp+18h] BYREF

  RtlCaptureContext(ContextRecord);
  Rip = ContextRecord->Rip;
  result = RtlLookupFunctionEntry(Rip, &ImageBase, 0LL);
  if ( result )
    return (struct _RUNTIME_FUNCTION *)RtlVirtualUnwind(
                                         0,
                                         ImageBase,
                                         Rip,
                                         result,
                                         ContextRecord,
                                         &HandlerData,
                                         &EstablisherFrame,
                                         0LL);
  return result;
}
