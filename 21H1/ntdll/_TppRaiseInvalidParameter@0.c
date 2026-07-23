/*
 * XREFs of _TppRaiseInvalidParameter@0 @ 0x4B3848BD
 * Callers:
 *     _TpCallbackSendAlpcMessageOnCompletion@16 @ 0x4B2A72A0 (_TpCallbackSendAlpcMessageOnCompletion@16.c)
 *     _TpReleasePool@4 @ 0x4B2AAE00 (_TpReleasePool@4.c)
 *     _TpReleaseCleanupGroupMembers@12 @ 0x4B2ABC00 (_TpReleaseCleanupGroupMembers@12.c)
 *     _TpReleaseCleanupGroup@4 @ 0x4B2ABE20 (_TpReleaseCleanupGroup@4.c)
 *     _TpSetPoolWorkerThreadIdleTimeout@12 @ 0x4B2AEB80 (_TpSetPoolWorkerThreadIdleTimeout@12.c)
 *     _TpSetPoolMaxThreads@8 @ 0x4B2B1D10 (_TpSetPoolMaxThreads@8.c)
 *     _TpAllocPool@8 @ 0x4B2B1E30 (_TpAllocPool@8.c)
 *     _TppCleanupGroupMemberRelease@8 @ 0x4B2B1EF6 (_TppCleanupGroupMemberRelease@8.c)
 *     _TpAllocWork@16 @ 0x4B2B3CB0 (_TpAllocWork@16.c)
 *     _TpAllocWait@16 @ 0x4B2B4140 (_TpAllocWait@16.c)
 *     _TpAllocTimer@16 @ 0x4B2B4570 (_TpAllocTimer@16.c)
 *     _TppTimerpValidateTimer@12 @ 0x4B2B46DB (_TppTimerpValidateTimer@12.c)
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 *     _TppCallbackMayRunLongProlog@20 @ 0x4B2B57AB (_TppCallbackMayRunLongProlog@20.c)
 *     _TppTimerQueueExpiration@16 @ 0x4B2B7250 (_TppTimerQueueExpiration@16.c)
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 *     _TppCancelWait@16 @ 0x4B2B7B98 (_TppCancelWait@16.c)
 *     _TppWaitpValidateWait@12 @ 0x4B2B7C55 (_TppWaitpValidateWait@12.c)
 *     _TpPostWork@4 @ 0x4B2C1B30 (_TpPostWork@4.c)
 *     _TpAllocIoCompletion@20 @ 0x4B2E6E50 (_TpAllocIoCompletion@20.c)
 *     _TppIopValidateIo@12 @ 0x4B2E70F8 (_TppIopValidateIo@12.c)
 *     _TpBindFileToDirect@12 @ 0x4B2E713D (_TpBindFileToDirect@12.c)
 *     _TpSimpleTryPost@12 @ 0x4B2E7210 (_TpSimpleTryPost@12.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _TppAlpcpValidateAlpc@12 @ 0x4B2E9A18 (_TppAlpcpValidateAlpc@12.c)
 *     _TppAllocAlpcCompletion@24 @ 0x4B2E9A8F (_TppAllocAlpcCompletion@24.c)
 *     _TpSetPoolMaxThreadsSoftLimit@8 @ 0x4B2EBEA0 (_TpSetPoolMaxThreadsSoftLimit@8.c)
 *     _TppWorkpValidateWork@12 @ 0x4B2EC4DD (_TppWorkpValidateWork@12.c)
 *     _TpAllocCleanupGroup@4 @ 0x4B2EC860 (_TpAllocCleanupGroup@4.c)
 *     _TpSetPoolMinThreads@8 @ 0x4B2ED0C0 (_TpSetPoolMinThreads@8.c)
 *     _TpCallbackUnloadDllOnCompletion@8 @ 0x4B2ED590 (_TpCallbackUnloadDllOnCompletion@8.c)
 *     _TpCallbackSetEventOnCompletion@8 @ 0x4B2F26D0 (_TpCallbackSetEventOnCompletion@8.c)
 *     _TpAlpcRegisterCompletionList@4 @ 0x4B383400 (_TpAlpcRegisterCompletionList@4.c)
 *     _TpAlpcUnregisterCompletionList@4 @ 0x4B383450 (_TpAlpcUnregisterCompletionList@4.c)
 *     _TpAllocJobNotification@20 @ 0x4B383550 (_TpAllocJobNotification@20.c)
 *     _TppJobpValidateJob@8 @ 0x4B383B34 (_TppJobpValidateJob@8.c)
 *     _TpCallbackDetectedUnrecoverableError@4 @ 0x4B384570 (_TpCallbackDetectedUnrecoverableError@4.c)
 *     _TpCallbackLeaveCriticalSectionOnCompletion@8 @ 0x4B3845A0 (_TpCallbackLeaveCriticalSectionOnCompletion@8.c)
 *     _TpCallbackReleaseMutexOnCompletion@8 @ 0x4B3845D0 (_TpCallbackReleaseMutexOnCompletion@8.c)
 *     _TpCallbackReleaseSemaphoreOnCompletion@12 @ 0x4B384610 (_TpCallbackReleaseSemaphoreOnCompletion@12.c)
 *     _TpCallbackSendPendingAlpcMessage@4 @ 0x4B384650 (_TpCallbackSendPendingAlpcMessage@4.c)
 *     _TpDisassociateCallback@4 @ 0x4B384690 (_TpDisassociateCallback@4.c)
 *     _RtlpTpIoAlloc@12 @ 0x4B3855A8 (_RtlpTpIoAlloc@12.c)
 *     _RtlpTpIoDllLoaded@4 @ 0x4B385807 (_RtlpTpIoDllLoaded@4.c)
 * Callees:
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     _TppReportExceptionFilter@4 @ 0x4B384919 (_TppReportExceptionFilter@4.c)
 */

void __stdcall __noreturn TppRaiseInvalidParameter()
{
  size_t v0; // [esp-4h] [ebp-84h]
  EXCEPTION_RECORD ExceptionRecord; // [esp+10h] [ebp-70h] BYREF
  CPPEH_RECORD ms_exc; // [esp+68h] [ebp-18h]

  LODWORD(v0) = 80;
  memset(&ExceptionRecord, 0, v0);
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  ms_exc.registration.TryLevel = 0;
  RtlRaiseException(&ExceptionRecord);
}
