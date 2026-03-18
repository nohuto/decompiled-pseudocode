/*
 * XREFs of NtAlpcCreateSectionView @ 0x14066C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     AlpcpCreateSectionView @ 0x14066C5B0 (AlpcpCreateSectionView.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     AlpcpDeleteView @ 0x1407A58A4 (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x1407A7EB0 (AlpcReferenceBlobByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCreateSectionView(HANDLE Handle, int a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS SectionView; // ebx
  PVOID v9; // r13
  void *v10; // r15
  ULONG_PTR v11; // rsi
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]
  __int128 v15; // [rsp+50h] [rbp-28h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  v14 = 0LL;
  *(_QWORD *)&v15 = 0LL;
  DWORD2(v15) = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
    goto LABEL_20;
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
LABEL_20:
    SectionView = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object[0] = 0LL;
    SectionView = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, Object, 0LL);
    if ( SectionView >= 0 )
    {
      v9 = Object[0];
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
      ObfDereferenceObject(v9);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)SectionView;
}
