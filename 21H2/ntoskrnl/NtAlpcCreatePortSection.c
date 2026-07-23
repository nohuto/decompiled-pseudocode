/*
 * XREFs of NtAlpcCreatePortSection @ 0x1406AB4F0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCreateSection @ 0x1406AB6BC (AlpcpCreateSection.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1406D97FC (AlpcpDeleteBlob.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAlpcCreatePortSection(
        HANDLE PortHandle,
        ULONG Flags,
        HANDLE SectionHandle,
        SIZE_T SectionSize,
        PALPC_HANDLE AlpcSectionHandle,
        PSIZE_T ActualSectionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  int Section; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  KPROCESSOR_MODE v13; // r9
  struct _DMA_ADAPTER *v14; // rsi
  ULONG_PTR v15; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (Flags & 0xFFFBFFFF) != 0 || (Flags & 0x40000) != 0 && SectionHandle )
  {
    Section = -1073741811;
  }
  else
  {
    if ( PreviousMode )
    {
      v11 = 0x7FFFFFFF0000LL;
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)AlpcSectionHandle < 0x7FFFFFFF0000LL )
        v12 = (__int64)AlpcSectionHandle;
      *(_QWORD *)v12 = *(_QWORD *)v12;
      if ( (unsigned __int64)ActualSectionSize < 0x7FFFFFFF0000LL )
        v11 = (__int64)ActualSectionSize;
      *(_QWORD *)v11 = *(_QWORD *)v11;
    }
    v13 = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    Section = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v13, &Object, 0LL);
    if ( Section >= 0 )
    {
      v14 = (struct _DMA_ADAPTER *)Object;
      Section = AlpcpCreateSection(Object, SectionSize, (__int64)&BugCheckParameter2);
      if ( Section >= 0 )
      {
        v15 = BugCheckParameter2;
        *AlpcSectionHandle = *(HANDLE *)(BugCheckParameter2 + 24);
        *ActualSectionSize = *(_QWORD *)(v15 + 8);
        AlpcpDereferenceBlobEx(v15);
      }
      HalPutDmaAdapter(v14);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), *(__int64 *)&Flags, (__int64)SectionHandle, SectionSize);
  return Section;
}
