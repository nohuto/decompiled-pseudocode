/*
 * XREFs of TppRaiseInvalidParameter @ 0x18011249C
 * Callers:
 *     TpAllocWait @ 0x18000DF40 (TpAllocWait.c)
 *     TpAllocTimer @ 0x18000EFD0 (TpAllocTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x18000F124 (TppCleanupGroupMemberRelease.c)
 *     TppWorkpValidateWork @ 0x18000F214 (TppWorkpValidateWork.c)
 *     TpAllocWork @ 0x18000F2E0 (TpAllocWork.c)
 *     TpSimpleTryPost @ 0x180010BE0 (TpSimpleTryPost.c)
 *     TppTimerQueueExpiration @ 0x180011AE0 (TppTimerQueueExpiration.c)
 *     TpSetWaitEx @ 0x180011D60 (TpSetWaitEx.c)
 *     TppCancelWait @ 0x180011E7C (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x180012038 (TppWaitpValidateWait.c)
 *     TppIopValidateIo @ 0x180012858 (TppIopValidateIo.c)
 *     TpPostWork @ 0x1800128C0 (TpPostWork.c)
 *     TppTimerpValidateTimer @ 0x180012914 (TppTimerpValidateTimer.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 *     TpReleaseCleanupGroupMembers @ 0x18004CCC0 (TpReleaseCleanupGroupMembers.c)
 *     TpReleasePool @ 0x18004F2A0 (TpReleasePool.c)
 *     TpSetPoolMaxThreads @ 0x180062C20 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180062C90 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPool @ 0x180062CF0 (TpAllocPool.c)
 *     TpCallbackIndependent @ 0x1800637F0 (TpCallbackIndependent.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x1800689B0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpDereferenceGlobalPool @ 0x180070F58 (TpDereferenceGlobalPool.c)
 *     TppCallbackMayRunLongProlog @ 0x180071008 (TppCallbackMayRunLongProlog.c)
 *     TpAllocIoCompletion @ 0x180076CD0 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x180076EC8 (TpBindFileToDirect.c)
 *     TpAlpcRegisterCompletionList @ 0x18007A540 (TpAlpcRegisterCompletionList.c)
 *     TpAlpcUnregisterCompletionList @ 0x18007A630 (TpAlpcUnregisterCompletionList.c)
 *     TppAlpcpValidateAlpc @ 0x18007A77C (TppAlpcpValidateAlpc.c)
 *     TppAllocAlpcCompletion @ 0x18007A804 (TppAllocAlpcCompletion.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x18007E170 (TpCallbackUnloadDllOnCompletion.c)
 *     TpAllocCleanupGroup @ 0x18007F1E0 (TpAllocCleanupGroup.c)
 *     TppJobpValidateJob @ 0x18007FDC8 (TppJobpValidateJob.c)
 *     TpAllocJobNotification @ 0x18007FE30 (TpAllocJobNotification.c)
 *     TpDisassociateCallback @ 0x180080AD0 (TpDisassociateCallback.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800819E0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpReleaseCleanupGroup @ 0x180082380 (TpReleaseCleanupGroup.c)
 *     TpSetPoolMinThreads @ 0x180083C20 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x180085A20 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x180088C10 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x1801121B0 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x1801121E0 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x180112220 (TpCallbackReleaseSemaphoreOnCompletion.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180112260 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800518D0 (RtlSetLastWin32Error.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     TppReportExceptionFilter @ 0x18011251C (TppReportExceptionFilter.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}
