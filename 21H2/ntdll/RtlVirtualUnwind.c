/*
 * XREFs of RtlVirtualUnwind @ 0x180030DE0
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180052310 (RtlDispatchException.c)
 *     _invalid_parameter @ 0x18008C868 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x18008C990 (__report_gsfailure.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x180030EB0 (RtlpxVirtualUnwind.c)
 *     RtlpSanitizeContext @ 0x180052D58 (RtlpSanitizeContext.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  int v9; // edi
  int v10; // esi
  int v11; // ebp
  EXCEPTION_DISPOSITION (__cdecl *v13)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+50h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+58h] [rbp-20h] BYREF

  v13 = 0LL;
  v14[0] = 0LL;
  v9 = (int)FunctionEntry;
  v14[1] = 0LL;
  v10 = ControlPc;
  v11 = ImageBase;
  RtlpSanitizeContext(ContextRecord);
  v14[2] = ContextPointers;
  RtlpxVirtualUnwind(
    HandlerType,
    v11,
    v10,
    v9,
    (__int64)ContextRecord,
    0LL,
    (__int64)HandlerData,
    (__int64)EstablisherFrame,
    (__int64)&v13,
    (__int64)v14);
  return v13;
}
