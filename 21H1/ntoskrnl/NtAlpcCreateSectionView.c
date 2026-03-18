/*
 * XREFs of NtAlpcCreateSectionView @ 0x1406455C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x1406106A0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteView @ 0x140612DF8 (AlpcpDeleteView.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSectionView @ 0x1406457E8 (AlpcpCreateSectionView.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCreateSectionView(HANDLE Handle, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v8; // rcx
  KPROCESSOR_MODE v9; // r9
  NTSTATUS SectionView; // ebx
  struct _DMA_ADAPTER *v11; // r13
  void *v12; // r15
  ULONG_PTR v13; // r14
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+40h] [rbp-38h]
  __int128 v17; // [rsp+50h] [rbp-28h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (_DWORD)a2 )
    goto LABEL_22;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v8 = a3;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 31) = *(_BYTE *)(v8 + 31);
    v16 = *(_OWORD *)a3;
    v17 = *(_OWORD *)(a3 + 16);
  }
  else
  {
    v16 = *(_OWORD *)a3;
    v17 = *(_OWORD *)(a3 + 16);
  }
  if ( (_DWORD)v16 || !*((_QWORD *)&v17 + 1) || (_QWORD)v17 )
  {
LABEL_22:
    SectionView = -1073741811;
  }
  else
  {
    v9 = KeGetCurrentThread()->PreviousMode;
    Object[0] = 0LL;
    SectionView = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, v9, Object, 0LL);
    if ( SectionView >= 0 )
    {
      v11 = (struct _DMA_ADAPTER *)Object[0];
      v12 = (void *)AlpcReferenceBlobByHandle(*((_QWORD *)Object[0] + 2) + 40LL, SDWORD2(v16), AlpcSectionType);
      Object[1] = v12;
      if ( v12 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v12, v11, (__int64)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          if ( PreviousMode )
          {
            v13 = BugCheckParameter2;
            *(_QWORD *)(a3 + 16) = *(_QWORD *)(BugCheckParameter2 + 40);
            *(_QWORD *)(a3 + 24) = *(_QWORD *)(v13 + 48);
            if ( SectionView < 0 )
              AlpcpDeleteView(v13);
          }
          else
          {
            v13 = BugCheckParameter2;
            *(_QWORD *)(a3 + 16) = *(_QWORD *)(BugCheckParameter2 + 40);
            *(_QWORD *)(a3 + 24) = *(_QWORD *)(v13 + 48);
          }
          AlpcpDereferenceBlobEx(v13, 1);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v12, 1);
      }
      else
      {
        SectionView = -1073741816;
      }
      HalPutDmaAdapter(v11);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), a2, a3, a4);
  return (unsigned int)SectionView;
}
