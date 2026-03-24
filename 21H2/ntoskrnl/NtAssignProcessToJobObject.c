/*
 * XREFs of NtAssignProcessToJobObject @ 0x14071F2B0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406F0B80 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     PsAssignProcessToJobObject @ 0x14071F3B0 (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x140935E28 (EtwTraceJobAssignProcess.c)
 */

__int64 __fastcall NtAssignProcessToJobObject(void *a1, void *a2)
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
  v5 = ObReferenceObjectByHandle(a1, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v5 >= 0 )
  {
    if ( a2 == (void *)-7LL )
    {
      v2 = KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[16];
      goto LABEL_4;
    }
    v5 = ObReferenceObjectByHandleWithTag(
           a2,
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
      v5 = PsAssignProcessToJobObject((__int64)DmaAdapter, (PEPROCESS)Object, v7);
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
  return (unsigned int)v5;
}
