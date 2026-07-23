/*
 * XREFs of NtAlpcCreatePortSection @ 0x140709700
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     AlpcpDereferenceBlobEx @ 0x1405F1600 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1405F16DC (AlpcpDeleteBlob.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSection @ 0x1407098CC (AlpcpCreateSection.c)
 */

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
        AlpcpDereferenceBlobEx(v15, 1);
      }
      HalPutDmaAdapter(v14);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return Section;
}
