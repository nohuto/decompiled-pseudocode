/*
 * XREFs of NtAlpcCreateSectionView @ 0x1406A9610
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     AlpcReferenceBlobByHandle @ 0x140655760 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteView @ 0x140657378 (AlpcpDeleteView.c)
 *     AlpcpCreateSectionView @ 0x1406A9838 (AlpcpCreateSectionView.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v8; // rcx
  KPROCESSOR_MODE v9; // r9
  int SectionView; // ebx
  struct _DMA_ADAPTER *v11; // r13
  void *v12; // r15
  ULONG_PTR v13; // r14
  PVOID Object[6]; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  memset(&Object[2], 0, 32);
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
    goto LABEL_22;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)ViewAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ViewAttributes < 0x7FFFFFFF0000LL )
      v8 = (__int64)ViewAttributes;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 31) = *(_BYTE *)(v8 + 31);
    *(_ALPC_DATA_VIEW_ATTR *)&Object[2] = *ViewAttributes;
  }
  else
  {
    *(_ALPC_DATA_VIEW_ATTR *)&Object[2] = *ViewAttributes;
  }
  if ( LODWORD(Object[2]) || !Object[5] || Object[4] )
  {
LABEL_22:
    SectionView = -1073741811;
  }
  else
  {
    v9 = KeGetCurrentThread()->PreviousMode;
    Object[0] = 0LL;
    SectionView = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v9, Object, 0LL);
    if ( SectionView >= 0 )
    {
      v11 = (struct _DMA_ADAPTER *)Object[0];
      v12 = (void *)AlpcReferenceBlobByHandle(
                      (_QWORD *)(*((_QWORD *)Object[0] + 2) + 40LL),
                      (int)Object[3],
                      AlpcSectionType);
      Object[1] = v12;
      if ( v12 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v12, v11, (__int64)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          if ( PreviousMode )
          {
            v13 = BugCheckParameter2;
            ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
            ViewAttributes->ViewSize = *(_QWORD *)(v13 + 48);
            if ( SectionView < 0 )
              AlpcpDeleteView(v13);
          }
          else
          {
            v13 = BugCheckParameter2;
            ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
            ViewAttributes->ViewSize = *(_QWORD *)(v13 + 48);
          }
          AlpcpDereferenceBlobEx(v13);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v12);
      }
      else
      {
        SectionView = -1073741816;
      }
      HalPutDmaAdapter(v11);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), *(__int64 *)&Flags, (__int64)ViewAttributes, v3);
  return SectionView;
}
