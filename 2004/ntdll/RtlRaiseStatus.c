/*
 * XREFs of RtlRaiseStatus @ 0x180102310
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
 *     LdrpReportError @ 0x18003F2A4 (LdrpReportError.c)
 *     RtlRaiseException @ 0x180051020 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180051210 (RtlDispatchException.c)
 *     RtlUserThreadStart @ 0x180052630 (RtlUserThreadStart.c)
 *     RtlpWaitOnCriticalSection @ 0x180063370 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x1800649B0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180064AD0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x180064C10 (RtlReleaseResource.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180067DB0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlDecodePointer @ 0x180069E10 (RtlDecodePointer.c)
 *     RtlInitializeSListHead @ 0x18006EAA0 (RtlInitializeSListHead.c)
 *     RtlDeactivateActivationContext @ 0x180070940 (RtlDeactivateActivationContext.c)
 *     RtlEncodePointer @ 0x180071E40 (RtlEncodePointer.c)
 *     LdrInitializeThunk @ 0x180074B10 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x180074B8C (_LdrpInitialize.c)
 *     RtlpCallVectoredHandlers @ 0x180078944 (RtlpCallVectoredHandlers.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x180079EC8 (RtlpLookupPrimaryFunctionEntry.c)
 *     LdrLockLoaderLock @ 0x18007D040 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007DEB0 (LdrUnlockLoaderLock.c)
 *     RtlConvertSharedToExclusive @ 0x18007E310 (RtlConvertSharedToExclusive.c)
 *     RtlSetUnhandledExceptionFilter @ 0x18007F8E0 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x180081690 (RtlpAddVectoredHandler.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x1800852D0 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlpUnwindOpSlots @ 0x180088478 (RtlpUnwindOpSlots.c)
 *     RtlConvertExclusiveToShared @ 0x180089F10 (RtlConvertExclusiveToShared.c)
 *     KiUserApcDispatcher @ 0x1800A0B20 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A0BA0 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A0C30 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1800A0C80 (KiUserExceptionDispatcher.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF390 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5360 (LdrpFatalExceptionFilter.c)
 *     RtlGrowFunctionTable @ 0x1800E0A80 (RtlGrowFunctionTable.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800E8A10 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E8D80 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E8ED8 (RtlpPossibleDeadlock.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E90B0 (RtlpUnWaitCriticalSection.c)
 *     RtlIsNameInExpression @ 0x1800FB200 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800FB2B0 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800FB38C (RtlpIsNameInExpressionPrivate.c)
 *     RtlInitializeContext @ 0x1800FEC20 (RtlInitializeContext.c)
 *     RtlRaiseStatus @ 0x180102310 (RtlRaiseStatus.c)
 *     RtlpInitRandomExVector @ 0x180102370 (RtlpInitRandomExVector.c)
 *     TppExceptionFilter @ 0x180111FE4 (TppExceptionFilter.c)
 * Callees:
 *     RtlRaiseNoncontinuableException @ 0x1800A16F0 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseStatus @ 0x180102310 (RtlRaiseStatus.c)
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
