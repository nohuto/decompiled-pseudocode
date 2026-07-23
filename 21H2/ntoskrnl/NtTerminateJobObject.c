/*
 * XREFs of NtTerminateJobObject @ 0x140614FB0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140615028 (PspTerminateAllProcessesInJobHierarchy.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     EtwTraceJob @ 0x140935F18 (EtwTraceJob.c)
 */

NTSTATUS __cdecl NtTerminateJobObject(HANDLE JobHandle, NTSTATUS ExitStatus)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF

  DmaAdapter = 0LL;
  v2 = ObReferenceObjectByHandle(
         JobHandle,
         8u,
         (POBJECT_TYPE)PsJobType,
         KeGetCurrentThread()->PreviousMode,
         (PVOID *)&DmaAdapter,
         0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJob(0LL, 0LL, (unsigned int)v2, 1825LL);
  }
  else
  {
    PspTerminateAllProcessesInJobHierarchy(DmaAdapter);
    HalPutDmaAdapter(DmaAdapter);
  }
  return v3;
}
