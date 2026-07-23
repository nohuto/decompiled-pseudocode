/*
 * XREFs of TppRaiseInvalidParameter @ 0x18011263C
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
 *     TpReleaseCleanupGroupMembers @ 0x1800526D0 (TpReleaseCleanupGroupMembers.c)
 *     TpReleasePool @ 0x180054CB0 (TpReleasePool.c)
 *     TpSetPoolMaxThreads @ 0x180061730 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x1800617A0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPool @ 0x180061800 (TpAllocPool.c)
 *     TpCallbackIndependent @ 0x180062300 (TpCallbackIndependent.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x1800674C0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpDereferenceGlobalPool @ 0x18006FF28 (TpDereferenceGlobalPool.c)
 *     TppCallbackMayRunLongProlog @ 0x18006FFD8 (TppCallbackMayRunLongProlog.c)
 *     TpAllocIoCompletion @ 0x180075CA0 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x180075E98 (TpBindFileToDirect.c)
 *     TpAlpcRegisterCompletionList @ 0x180079510 (TpAlpcRegisterCompletionList.c)
 *     TpAlpcUnregisterCompletionList @ 0x180079600 (TpAlpcUnregisterCompletionList.c)
 *     TppAlpcpValidateAlpc @ 0x18007974C (TppAlpcpValidateAlpc.c)
 *     TppAllocAlpcCompletion @ 0x1800797D4 (TppAllocAlpcCompletion.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x18007D7D0 (TpCallbackUnloadDllOnCompletion.c)
 *     TpAllocCleanupGroup @ 0x18007E8C0 (TpAllocCleanupGroup.c)
 *     TppJobpValidateJob @ 0x18007F4A8 (TppJobpValidateJob.c)
 *     TpAllocJobNotification @ 0x18007F510 (TpAllocJobNotification.c)
 *     TpDisassociateCallback @ 0x1800801B0 (TpDisassociateCallback.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800810C0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpReleaseCleanupGroup @ 0x180081A60 (TpReleaseCleanupGroup.c)
 *     TpSetPoolMinThreads @ 0x180083510 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x180085550 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x180088610 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x180112350 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x180112380 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x1801123C0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180112400 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800507C0 (RtlSetLastWin32Error.c)
 *     RtlRaiseException @ 0x180051070 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     TppReportExceptionFilter @ 0x1801126BC (TppReportExceptionFilter.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}
