/*
 * XREFs of NtAssignProcessToJobObject @ 0x14062C430
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     PsAssignProcessToJobObject @ 0x14062C530 (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x140938658 (EtwTraceJobAssignProcess.c)
 */

__int64 __fastcall NtAssignProcessToJobObject(void *a1, void *a2)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS v4; // esi
  struct _DMA_ADAPTER *v5; // rbx
  PVOID v6; // rdi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v4 = ObReferenceObjectByHandle(a1, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v4 >= 0
    && (a2 == (void *)-7LL
     || (v4 = ObReferenceObjectByHandleWithTag(
                a2,
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
  return (unsigned int)v4;
}
