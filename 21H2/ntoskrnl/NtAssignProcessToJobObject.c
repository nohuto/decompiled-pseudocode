/*
 * XREFs of NtAssignProcessToJobObject @ 0x1406F6D90
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PsAssignProcessToJobObject @ 0x1406F6D10 (PsAssignProcessToJobObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     EtwTraceJobAssignProcess @ 0x140935FF8 (EtwTraceJobAssignProcess.c)
 */

NTSTATUS __cdecl NtAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  unsigned __int64 v2; // rdi
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS v5; // esi
  struct _DMA_ADAPTER *v6; // rbx
  __int64 v7; // r8
  PVOID v8; // rdi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v5 = ObReferenceObjectByHandle(JobHandle, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v5 >= 0 )
  {
    if ( ProcessHandle == (HANDLE)-7LL )
    {
      v2 = KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[16];
      goto LABEL_4;
    }
    v5 = ObReferenceObjectByHandleWithTag(
           ProcessHandle,
           0x101u,
           (POBJECT_TYPE)PsProcessType,
           PreviousMode,
           0x624A7350u,
           &Object,
           0LL);
    if ( v5 >= 0 )
    {
LABEL_4:
      v6 = DmaAdapter;
      v7 = v2;
      v8 = Object;
      v5 = PsAssignProcessToJobObject(DmaAdapter, (PEPROCESS)Object, v7);
      goto LABEL_5;
    }
  }
  v8 = Object;
  v6 = DmaAdapter;
LABEL_5:
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobAssignProcess(v6, v8, (unsigned int)v5);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x624A7350u);
  if ( v6 )
    HalPutDmaAdapter(v6);
  return v5;
}
