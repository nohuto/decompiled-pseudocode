/*
 * XREFs of PspSendJobNotification @ 0x140322D5C
 * Callers:
 *     PspAssociateCompletionPortCallback @ 0x1405D6260 (PspAssociateCompletionPortCallback.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x14062D618 (PspValidateJobAssignmentProcessLimits.c)
 *     PspIncrementJobChainProcessCounts @ 0x14062DBC8 (PspIncrementJobChainProcessCounts.c)
 *     PspSendProcessNotificationToJobChain @ 0x14062EFB4 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x140663918 (PspRemoveProcessFromJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406658A0 (PspEnforceLimitsJobPostCallback.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14069F850 (PspChangeJobMemoryUsageByProcess.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409087B0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x14090B164 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     IoSetIoCompletion @ 0x1406D2C40 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
