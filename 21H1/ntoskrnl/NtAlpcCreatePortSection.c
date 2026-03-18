/*
 * XREFs of NtAlpcCreatePortSection @ 0x140642870
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1406107EC (AlpcpDeleteBlob.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSection @ 0x140642A04 (AlpcpCreateSection.c)
 */

__int64 __fastcall NtAlpcCreatePortSection(HANDLE Handle, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  KPROCESSOR_MODE v12; // r9
  NTSTATUS Section; // ebx
  struct _DMA_ADAPTER *v14; // rsi
  ULONG_PTR v15; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a2 & 0xFFFBFFFF) != 0 || (a2 & 0x40000) != 0 && a3 )
  {
    Section = -1073741811;
  }
  else
  {
    if ( PreviousMode )
    {
      v10 = 0x7FFFFFFF0000LL;
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a5;
      *(_QWORD *)v11 = *(_QWORD *)v11;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a6;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
    v12 = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    Section = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, v12, &Object, 0LL);
    if ( Section >= 0 )
    {
      v14 = (struct _DMA_ADAPTER *)Object;
      Section = AlpcpCreateSection(Object, a4, (__int64)&BugCheckParameter2);
      if ( Section >= 0 )
      {
        v15 = BugCheckParameter2;
        *a5 = *(_QWORD *)(BugCheckParameter2 + 24);
        *a6 = *(_QWORD *)(v15 + 8);
        AlpcpDereferenceBlobEx(v15, 1);
      }
      HalPutDmaAdapter(v14);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), a2, a3, a4);
  return (unsigned int)Section;
}
