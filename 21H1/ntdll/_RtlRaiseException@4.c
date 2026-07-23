/*
 * XREFs of _RtlRaiseException@4 @ 0x4B308940
 * Callers:
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 *     _TppCallbackEpilog@4 @ 0x4B2B6183 (_TppCallbackEpilog@4.c)
 *     _TppCallbackCheckThreadAfterCallback@4 @ 0x4B2B638B (_TppCallbackCheckThreadAfterCallback@4.c)
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _RtlpAllocateActivationContextStackFrame@12 @ 0x4B2E35DF (_RtlpAllocateActivationContextStackFrame@12.c)
 *     _RtlDeactivateActivationContext@8 @ 0x4B2E4A70 (_RtlDeactivateActivationContext@8.c)
 *     _RtlpFreeActivationContextStackFrame@8 @ 0x4B2E4B49 (_RtlpFreeActivationContextStackFrame@8.c)
 *     _RtlGetActiveActivationContext@4 @ 0x4B2E6750 (_RtlGetActiveActivationContext@4.c)
 *     _RtlUnwind@16 @ 0x4B2E8E30 (_RtlUnwind@16.c)
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 *     _TpCheckTerminateWorker@4 @ 0x4B2EB4D0 (_TpCheckTerminateWorker@4.c)
 *     _KiUserExceptionDispatcher@8 @ 0x4B2F4E70 (_KiUserExceptionDispatcher@8.c)
 *     _KiRaiseUserExceptionDispatcher@0 @ 0x4B2F4EE0 (_KiRaiseUserExceptionDispatcher@0.c)
 *     _RaiseException@16 @ 0x4B2FD740 (_RaiseException@16.c)
 *     _RtlpPossibleDeadlock@4 @ 0x4B34A99E (_RtlpPossibleDeadlock@4.c)
 *     _RtlpAllocateHeapRaiseException@4 @ 0x4B35D445 (_RtlpAllocateHeapRaiseException@4.c)
 *     _RtlReportFatalFailure@4 @ 0x4B366A5D (_RtlReportFatalFailure@4.c)
 *     _TppRaiseHandleStatus@16 @ 0x4B384839 (_TppRaiseHandleStatus@16.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 *     _RtlpTpImpersonate@4 @ 0x4B385B57 (_RtlpTpImpersonate@4.c)
 *     _PssNtValidateDescriptor@8 @ 0x4B386E10 (_PssNtValidateDescriptor@8.c)
 * Callees:
 *     _ZwRaiseException@12 @ 0x4B2F3FE0 (_ZwRaiseException@12.c)
 *     _RtlCaptureContext@4 @ 0x4B308820 (_RtlCaptureContext@4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

void __stdcall __noreturn RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  NTSTATUS v1; // eax
  _CONTEXT ContextRecord; // [esp+0h] [ebp-2D0h] BYREF
  void *retaddr; // [esp+2D4h] [ebp+4h]

  RtlCaptureContext(&ContextRecord);
  ContextRecord.Esp += 4;
  ExceptionRecord->ExceptionAddress = retaddr;
  ContextRecord.ContextFlags = 65543;
  v1 = ZwRaiseException(ExceptionRecord, &ContextRecord, 1u);
  RtlRaiseStatus(v1);
}
