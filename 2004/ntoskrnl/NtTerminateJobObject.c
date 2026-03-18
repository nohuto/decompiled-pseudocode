/*
 * XREFs of NtTerminateJobObject @ 0x140656390
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140656408 (PspTerminateAllProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x140932748 (EtwTraceJob.c)
 */

__int64 __fastcall NtTerminateJobObject(void *a1)
{
  NTSTATUS v1; // eax
  unsigned int v2; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF

  DmaAdapter = 0LL;
  v1 = ObReferenceObjectByHandle(
         a1,
         8u,
         (POBJECT_TYPE)PsJobType,
         KeGetCurrentThread()->PreviousMode,
         (PVOID *)&DmaAdapter,
         0LL);
  v2 = v1;
  if ( v1 < 0 )
  {
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJob(0LL, 0LL, (unsigned int)v1, 1825LL);
  }
  else
  {
    PspTerminateAllProcessesInJobHierarchy((PRKEVENT)DmaAdapter);
    HalPutDmaAdapter(DmaAdapter);
  }
  return v2;
}
