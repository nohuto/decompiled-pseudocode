/*
 * XREFs of RtlRaiseStatus @ 0x180102820
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x18000A090 (RtlpSubSegmentInitialize.c)
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlpxVirtualUnwind @ 0x180030EB0 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x1800314A0 (RtlpUnwindPrologue.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     LdrpReportError @ 0x18003F2F4 (LdrpReportError.c)
 *     RtlRaiseException @ 0x180051070 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180051260 (RtlDispatchException.c)
 *     RtlUserThreadStart @ 0x180052680 (RtlUserThreadStart.c)
 *     RtlpWaitOnCriticalSection @ 0x180063480 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x180064AC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180064BE0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x180064D20 (RtlReleaseResource.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180067EC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlDecodePointer @ 0x180069F20 (RtlDecodePointer.c)
 *     RtlInitializeSListHead @ 0x18006EBA0 (RtlInitializeSListHead.c)
 *     RtlDeactivateActivationContext @ 0x180070A40 (RtlDeactivateActivationContext.c)
 *     RtlEncodePointer @ 0x180071F40 (RtlEncodePointer.c)
 *     LdrInitializeThunk @ 0x180074C10 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x180074C8C (_LdrpInitialize.c)
 *     RtlpCallVectoredHandlers @ 0x180078A44 (RtlpCallVectoredHandlers.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x180079FC8 (RtlpLookupPrimaryFunctionEntry.c)
 *     LdrLockLoaderLock @ 0x18007D140 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007DFB0 (LdrUnlockLoaderLock.c)
 *     RtlConvertSharedToExclusive @ 0x18007E410 (RtlConvertSharedToExclusive.c)
 *     RtlSetUnhandledExceptionFilter @ 0x18007F9E0 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x180081790 (RtlpAddVectoredHandler.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x1800853D0 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlpUnwindOpSlots @ 0x180088578 (RtlpUnwindOpSlots.c)
 *     RtlConvertExclusiveToShared @ 0x18008A010 (RtlConvertExclusiveToShared.c)
 *     KiUserApcDispatcher @ 0x1800A0DC0 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A0E40 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A0ED0 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1800A0F20 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF570 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5700 (LdrpFatalExceptionFilter.c)
 *     RtlGrowFunctionTable @ 0x1800E0E20 (RtlGrowFunctionTable.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800E8F10 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E9280 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E93D8 (RtlpPossibleDeadlock.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E95B0 (RtlpUnWaitCriticalSection.c)
 *     RtlIsNameInExpression @ 0x1800FB710 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800FB7C0 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800FB89C (RtlpIsNameInExpressionPrivate.c)
 *     RtlInitializeContext @ 0x1800FF130 (RtlInitializeContext.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 *     RtlpInitRandomExVector @ 0x180102880 (RtlpInitRandomExVector.c)
 *     TppExceptionFilter @ 0x1801124F4 (TppExceptionFilter.c)
 * Callees:
 *     RtlRaiseNoncontinuableException @ 0x1800A1990 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 */

void __cdecl __noreturn RtlRaiseStatus(NTSTATUS Status)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-578h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+C0h] [rbp-4D8h] BYREF

  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 0;
  ExceptionRecord.ExceptionFlags = 1;
  ExceptionRecord.ExceptionCode = Status;
  RtlRaiseNoncontinuableException(&ExceptionRecord, &ContextRecord);
}
