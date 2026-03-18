/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x140656408
 * Callers:
 *     PspJobClose @ 0x1406562A0 (PspJobClose.c)
 *     NtTerminateJobObject @ 0x140656390 (NtTerminateJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14068A6E0 (PspEnforceLimitsJobPostCallback.c)
 *     PsTerminateServerSilo @ 0x140902940 (PsTerminateServerSilo.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x14065ADD0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14068A3B8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x140932748 (EtwTraceJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(PRKEVENT Event, unsigned int a2, char a3)
{
  char v3; // bl
  unsigned __int8 v6; // al
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  _InterlockedOr(&Event[55].Header.Lock, 0x80u);
  LODWORD(v8) = a2;
  BYTE4(v8) = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy(Event, (__int64)&v8, 2);
  v6 = BYTE4(v8);
  if ( (v8 & 0x200000000LL) != 0 )
  {
    v3 = 1;
  }
  else
  {
    PspEvaluateAndNotifyEmptyJob(Event);
    v6 = BYTE4(v8);
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(Event, v6, a2, 1825LL);
  return v3;
}
