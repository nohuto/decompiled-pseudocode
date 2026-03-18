/*
 * XREFs of PspSendJobNotification @ 0x14027A9DC
 * Callers:
 *     PspAssociateCompletionPortCallback @ 0x1405CFDB0 (PspAssociateCompletionPortCallback.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x140659078 (PspValidateJobAssignmentProcessLimits.c)
 *     PspIncrementJobChainProcessCounts @ 0x140659628 (PspIncrementJobChainProcessCounts.c)
 *     PspSendProcessNotificationToJobChain @ 0x14065A560 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x14065A624 (PspRemoveProcessFromJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14068A6E0 (PspEnforceLimitsJobPostCallback.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406D3450 (PspChangeJobMemoryUsageByProcess.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140902BA0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x140905544 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     IoSetIoCompletion @ 0x1406569F0 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
