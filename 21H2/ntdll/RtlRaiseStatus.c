/*
 * XREFs of RtlRaiseStatus @ 0x180102680
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
 *     LdrpReportError @ 0x18003F2B4 (LdrpReportError.c)
 *     RtlUserThreadStart @ 0x18004CC70 (RtlUserThreadStart.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180052310 (RtlDispatchException.c)
 *     RtlpWaitOnCriticalSection @ 0x180064970 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x180065FB0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800660D0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x180066210 (RtlReleaseResource.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800693B0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlDecodePointer @ 0x18006B410 (RtlDecodePointer.c)
 *     RtlInitializeSListHead @ 0x18006FBD0 (RtlInitializeSListHead.c)
 *     RtlDeactivateActivationContext @ 0x180071A70 (RtlDeactivateActivationContext.c)
 *     RtlEncodePointer @ 0x180072F70 (RtlEncodePointer.c)
 *     LdrInitializeThunk @ 0x180075C40 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x180075CBC (_LdrpInitialize.c)
 *     RtlpCallVectoredHandlers @ 0x180079A74 (RtlpCallVectoredHandlers.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x18007AFF8 (RtlpLookupPrimaryFunctionEntry.c)
 *     LdrLockLoaderLock @ 0x18007DAE0 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007E950 (LdrUnlockLoaderLock.c)
 *     RtlConvertSharedToExclusive @ 0x18007EDB0 (RtlConvertSharedToExclusive.c)
 *     RtlSetUnhandledExceptionFilter @ 0x180080300 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x1800820B0 (RtlpAddVectoredHandler.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x1800858A0 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlpUnwindOpSlots @ 0x180088B78 (RtlpUnwindOpSlots.c)
 *     RtlConvertExclusiveToShared @ 0x18008A610 (RtlConvertExclusiveToShared.c)
 *     KiUserApcDispatcher @ 0x1800A1350 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A13E0 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A1470 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1800A14C0 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF4F0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5470 (LdrpFatalExceptionFilter.c)
 *     RtlGrowFunctionTable @ 0x1800E0B90 (RtlGrowFunctionTable.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800E8D60 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E90D0 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E9228 (RtlpPossibleDeadlock.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E9400 (RtlpUnWaitCriticalSection.c)
 *     RtlIsNameInExpression @ 0x1800FB560 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800FB610 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800FB6EC (RtlpIsNameInExpressionPrivate.c)
 *     RtlInitializeContext @ 0x1800FEF90 (RtlInitializeContext.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 *     RtlpInitRandomExVector @ 0x1801026E0 (RtlpInitRandomExVector.c)
 *     TppExceptionFilter @ 0x180112354 (TppExceptionFilter.c)
 * Callees:
 *     RtlRaiseNoncontinuableException @ 0x1800A1F30 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
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
