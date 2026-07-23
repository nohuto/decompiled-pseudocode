/*
 * XREFs of NtAlpcCreateSectionView @ 0x1406103A0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSectionView @ 0x1406105C8 (AlpcpCreateSectionView.c)
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x140688820 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteView @ 0x14068AF78 (AlpcpDeleteView.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  int SectionView; // ebx
  struct _DMA_ADAPTER *v9; // r13
  void *v10; // r15
  ULONG_PTR v11; // r14
  PVOID Object[6]; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  memset(&Object[2], 0, 32);
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
    goto LABEL_18;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)ViewAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ViewAttributes < 0x7FFFFFFF0000LL )
      v6 = (__int64)ViewAttributes;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 31) = *(_BYTE *)(v6 + 31);
    *(_ALPC_DATA_VIEW_ATTR *)&Object[2] = *ViewAttributes;
  }
  else
  {
    *(_ALPC_DATA_VIEW_ATTR *)&Object[2] = *ViewAttributes;
  }
  if ( LODWORD(Object[2]) || !Object[5] || Object[4] )
  {
LABEL_18:
    SectionView = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object[0] = 0LL;
    SectionView = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, Object, 0LL);
    if ( SectionView >= 0 )
    {
      v9 = (struct _DMA_ADAPTER *)Object[0];
      v10 = (void *)AlpcReferenceBlobByHandle(*((_QWORD *)Object[0] + 2) + 40LL, Object[3], AlpcSectionType);
      Object[1] = v10;
      if ( v10 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v10, v9, (__int64)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          v11 = BugCheckParameter2;
          ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
          ViewAttributes->ViewSize = *(_QWORD *)(v11 + 48);
          AlpcpDereferenceBlobEx(v11);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v10);
      }
      else
      {
        SectionView = -1073741816;
      }
      HalPutDmaAdapter(v9);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return SectionView;
}
