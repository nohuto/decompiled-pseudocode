/*
 * XREFs of RtlVirtualUnwind @ 0x14032C1B0
 * Callers:
 *     RtlRaiseException @ 0x14032B960 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x14032BD60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14032C220 (RtlUnwindEx.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x14032D9F0 (RtlpxVirtualUnwind.c)
 */

PEXCEPTION_ROUTINE __cdecl RtlVirtualUnwind(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  EXCEPTION_DISPOSITION (__cdecl *v9)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+50h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-20h] BYREF

  v10[2] = ContextPointers;
  v9 = 0LL;
  v10[0] = 0LL;
  v10[1] = 0LL;
  RtlpxVirtualUnwind(
    HandlerType,
    ImageBase,
    ControlPc,
    (_DWORD)FunctionEntry,
    (__int64)ContextRecord,
    0LL,
    (__int64)HandlerData,
    (__int64)EstablisherFrame,
    (__int64)&v9,
    (__int64)v10);
  return v9;
}
