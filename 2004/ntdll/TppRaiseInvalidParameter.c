/*
 * XREFs of TppRaiseInvalidParameter @ 0x18011212C
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
 *     TpReleaseCleanupGroupMembers @ 0x180052680 (TpReleaseCleanupGroupMembers.c)
 *     TpReleasePool @ 0x180054C60 (TpReleasePool.c)
 *     TpSetPoolMaxThreads @ 0x180061620 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180061690 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPool @ 0x1800616F0 (TpAllocPool.c)
 *     TpCallbackIndependent @ 0x1800621F0 (TpCallbackIndependent.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x1800673B0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpDereferenceGlobalPool @ 0x18006FE28 (TpDereferenceGlobalPool.c)
 *     TppCallbackMayRunLongProlog @ 0x18006FED8 (TppCallbackMayRunLongProlog.c)
 *     TpAllocIoCompletion @ 0x180075BA0 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x180075D98 (TpBindFileToDirect.c)
 *     TpAlpcRegisterCompletionList @ 0x180079410 (TpAlpcRegisterCompletionList.c)
 *     TpAlpcUnregisterCompletionList @ 0x180079500 (TpAlpcUnregisterCompletionList.c)
 *     TppAlpcpValidateAlpc @ 0x18007964C (TppAlpcpValidateAlpc.c)
 *     TppAllocAlpcCompletion @ 0x1800796D4 (TppAllocAlpcCompletion.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x18007D6D0 (TpCallbackUnloadDllOnCompletion.c)
 *     TpAllocCleanupGroup @ 0x18007E7C0 (TpAllocCleanupGroup.c)
 *     TppJobpValidateJob @ 0x18007F3A8 (TppJobpValidateJob.c)
 *     TpAllocJobNotification @ 0x18007F410 (TpAllocJobNotification.c)
 *     TpDisassociateCallback @ 0x1800800B0 (TpDisassociateCallback.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180080FC0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpReleaseCleanupGroup @ 0x180081960 (TpReleaseCleanupGroup.c)
 *     TpSetPoolMinThreads @ 0x180083410 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x180085450 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x180088510 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x180111E40 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x180111E70 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x180111EB0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180111EF0 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180050770 (RtlSetLastWin32Error.c)
 *     RtlRaiseException @ 0x180051020 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     TppReportExceptionFilter @ 0x1801121AC (TppReportExceptionFilter.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}
