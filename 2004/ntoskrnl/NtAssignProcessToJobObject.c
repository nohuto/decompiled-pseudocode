/*
 * XREFs of NtAssignProcessToJobObject @ 0x140657F30
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     PsAssignProcessToJobObject @ 0x140658030 (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x140932828 (EtwTraceJobAssignProcess.c)
 */

NTSTATUS __cdecl NtAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  KPROCESSOR_MODE PreviousMode; // bp
  int v4; // esi
  struct _DMA_ADAPTER *v5; // rbx
  PVOID v6; // rdi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v4 = ObReferenceObjectByHandle(JobHandle, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v4 >= 0
    && (ProcessHandle == (HANDLE)-7LL
     || (v4 = ObReferenceObjectByHandleWithTag(
                ProcessHandle,
                0x101u,
                (POBJECT_TYPE)PsProcessType,
                PreviousMode,
                0x624A7350u,
                &Object,
                0LL),
         v4 >= 0)) )
  {
    v5 = DmaAdapter;
    v6 = Object;
    v4 = PsAssignProcessToJobObject((ULONG_PTR)DmaAdapter, Object);
  }
  else
  {
    v6 = Object;
    v5 = DmaAdapter;
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobAssignProcess(v5, v6, (unsigned int)v4);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x624A7350u);
  if ( v5 )
    HalPutDmaAdapter(v5);
  return v4;
}
