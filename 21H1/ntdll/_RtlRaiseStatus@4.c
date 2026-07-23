/*
 * XREFs of _RtlRaiseStatus@4 @ 0x4B308980
 * Callers:
 *     _RtlpAddVectoredHandler@12 @ 0x4B2AB096 (_RtlpAddVectoredHandler@12.c)
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _LdrpGetFromMUIMemCache@16 @ 0x4B2BD4F0 (_LdrpGetFromMUIMemCache@16.c)
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     _RtlpUnWaitCriticalSectionEx@8 @ 0x4B2DF2D0 (_RtlpUnWaitCriticalSectionEx@8.c)
 *     _RtlpWaitOnCriticalSection@8 @ 0x4B2DF4A0 (_RtlpWaitOnCriticalSection@8.c)
 *     _RtlInitializeResource@4 @ 0x4B2DFA70 (_RtlInitializeResource@4.c)
 *     _RtlDeactivateActivationContext@8 @ 0x4B2E4A70 (_RtlDeactivateActivationContext@8.c)
 *     _RtlDecodePointer@4 @ 0x4B2E4D40 (_RtlDecodePointer@4.c)
 *     _RtlEncodePointer@4 @ 0x4B2E5700 (_RtlEncodePointer@4.c)
 *     _LdrInitializeThunk@8 @ 0x4B2E62C0 (_LdrInitializeThunk@8.c)
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 *     ___RtlUserThreadStart@8 @ 0x4B2E7A1F (___RtlUserThreadStart@8.c)
 *     _LdrLockLoaderLock@12 @ 0x4B2E85B0 (_LdrLockLoaderLock@12.c)
 *     _LdrpReportError@12 @ 0x4B2E9F63 (_LdrpReportError@12.c)
 *     _LdrUnlockLoaderLock@8 @ 0x4B2EA6A0 (_LdrUnlockLoaderLock@8.c)
 *     _RtlReleaseResource@4 @ 0x4B2EA890 (_RtlReleaseResource@4.c)
 *     _RtlAcquireResourceShared@8 @ 0x4B2EB3B0 (_RtlAcquireResourceShared@8.c)
 *     _RtlAcquireResourceExclusive@8 @ 0x4B2EBDC0 (_RtlAcquireResourceExclusive@8.c)
 *     _RtlSetUnhandledExceptionFilter@4 @ 0x4B2EC0E0 (_RtlSetUnhandledExceptionFilter@4.c)
 *     _RtlSetUserCallbackExceptionFilter@4 @ 0x4B2EC460 (_RtlSetUserCallbackExceptionFilter@4.c)
 *     _RtlpCallVectoredHandlers@12 @ 0x4B2ECCA1 (_RtlpCallVectoredHandlers@12.c)
 *     _KiUserApcDispatcher@16 @ 0x4B2F4D10 (_KiUserApcDispatcher@16.c)
 *     _KiUserCallbackExceptionHandler@16 @ 0x4B2F4D80 (_KiUserCallbackExceptionHandler@16.c)
 *     _KiUserCallbackDispatcher@12 @ 0x4B2F4E00 (_KiUserCallbackDispatcher@12.c)
 *     _RtlExtendedLargeIntegerDivide@16 @ 0x4B308360 (_RtlExtendedLargeIntegerDivide@16.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     sub_4B30897B @ 0x4B30897B (sub_4B30897B.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpLogFatalUserCallbackException@8 @ 0x4B330333 (_LdrpLogFatalUserCallbackException@8.c)
 *     _LdrpFatalExceptionFilter@4 @ 0x4B3348A9 (_LdrpFatalExceptionFilter@4.c)
 *     _RtlConvertSRWLockExclusiveToShared@4 @ 0x4B34A3C0 (_RtlConvertSRWLockExclusiveToShared@4.c)
 *     _RtlTryConvertSRWLockSharedToExclusiveOrRelease@4 @ 0x4B34A410 (_RtlTryConvertSRWLockSharedToExclusiveOrRelease@4.c)
 *     _RtlConvertExclusiveToShared@4 @ 0x4B34A4B0 (_RtlConvertExclusiveToShared@4.c)
 *     _RtlConvertSharedToExclusive@4 @ 0x4B34A510 (_RtlConvertSharedToExclusive@4.c)
 *     _RtlpNotOwnerCriticalSection@4 @ 0x4B34A880 (_RtlpNotOwnerCriticalSection@4.c)
 *     _RtlpPossibleDeadlock@4 @ 0x4B34A99E (_RtlpPossibleDeadlock@4.c)
 *     _RtlpUnWaitCriticalSection@4 @ 0x4B34ABA0 (_RtlpUnWaitCriticalSection@4.c)
 *     _RtlIsNameInExpression@16 @ 0x4B361340 (_RtlIsNameInExpression@16.c)
 *     _RtlIsNameInUnUpcasedExpression@16 @ 0x4B3613D0 (_RtlIsNameInUnUpcasedExpression@16.c)
 *     _RtlpIsNameInExpressionPrivate@20 @ 0x4B361483 (_RtlpIsNameInExpressionPrivate@20.c)
 *     _RtlpCallUserCallbackExceptionFilter@8 @ 0x4B3665CC (_RtlpCallUserCallbackExceptionFilter@8.c)
 *     __FinalExceptionHandler@16 @ 0x4B3666F1 (__FinalExceptionHandler@16.c)
 *     _RtlLargeIntegerDivide@20 @ 0x4B368B80 (_RtlLargeIntegerDivide@20.c)
 *     _RtlpInitRandomExVector@12 @ 0x4B36A020 (_RtlpInitRandomExVector@12.c)
 *     _TppExceptionFilter@8 @ 0x4B384794 (_TppExceptionFilter@8.c)
 * Callees:
 *     _ZwRaiseException@12 @ 0x4B2F3FE0 (_ZwRaiseException@12.c)
 *     _RtlCaptureContext@4 @ 0x4B308820 (_RtlCaptureContext@4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

void __cdecl __noreturn RtlRaiseStatus(NTSTATUS Status)
{
  NTSTATUS v1; // eax
  _CONTEXT ContextRecord; // [esp+0h] [ebp-320h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [esp+2D0h] [ebp-50h] BYREF
  void *retaddr; // [esp+324h] [ebp+4h]

  RtlCaptureContext(&ContextRecord);
  ContextRecord.Esp += 4;
  ContextRecord.ContextFlags = 65543;
  ExceptionRecord.ExceptionAddress = retaddr;
  ExceptionRecord.NumberParameters = 0;
  ExceptionRecord.ExceptionRecord = 0;
  ExceptionRecord.ExceptionCode = Status;
  ExceptionRecord.ExceptionFlags = 1;
  v1 = ZwRaiseException(&ExceptionRecord, &ContextRecord, 1u);
  RtlRaiseStatus(v1);
}
