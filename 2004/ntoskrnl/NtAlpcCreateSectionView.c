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

__int64 __fastcall NtAlpcCreateSectionView(HANDLE Handle, int a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS SectionView; // ebx
  struct _DMA_ADAPTER *v9; // r13
  void *v10; // r15
  ULONG_PTR v11; // r14
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]
  __int128 v15; // [rsp+50h] [rbp-28h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
    goto LABEL_18;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v6 = a3;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 31) = *(_BYTE *)(v6 + 31);
    v14 = *(_OWORD *)a3;
    v15 = *(_OWORD *)(a3 + 16);
  }
  else
  {
    v14 = *(_OWORD *)a3;
    v15 = *(_OWORD *)(a3 + 16);
  }
  if ( (_DWORD)v14 || !*((_QWORD *)&v15 + 1) || (_QWORD)v15 )
  {
LABEL_18:
    SectionView = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object[0] = 0LL;
    SectionView = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, Object, 0LL);
    if ( SectionView >= 0 )
    {
      v9 = (struct _DMA_ADAPTER *)Object[0];
      v10 = (void *)AlpcReferenceBlobByHandle(*((_QWORD *)Object[0] + 2) + 40LL, *((_QWORD *)&v14 + 1), AlpcSectionType);
      Object[1] = v10;
      if ( v10 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v10, v9, (__int64)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          v11 = BugCheckParameter2;
          *(_QWORD *)(a3 + 16) = *(_QWORD *)(BugCheckParameter2 + 40);
          *(_QWORD *)(a3 + 24) = *(_QWORD *)(v11 + 48);
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
  return (unsigned int)SectionView;
}
