/*
 * XREFs of PspSendJobNotification @ 0x1403144BC
 * Callers:
 *     PspAssociateCompletionPortCallback @ 0x1405CE9E0 (PspAssociateCompletionPortCallback.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140612560 (PspEnforceLimitsJobPostCallback.c)
 *     PspSendProcessNotificationToJobChain @ 0x14065DED8 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x14065DF9C (PspRemoveProcessFromJobChain.c)
 *     PspIncrementJobChainProcessCounts @ 0x140671F54 (PspIncrementJobChainProcessCounts.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x140672588 (PspValidateJobAssignmentProcessLimits.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406B4DD0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140901D40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x140904264 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     IoSetIoCompletion @ 0x1406DD050 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
