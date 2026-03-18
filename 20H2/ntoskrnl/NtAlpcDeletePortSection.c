/*
 * XREFs of NtAlpcDeletePortSection @ 0x14064A7D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     AlpcpDereferenceBlobEx @ 0x1405F1600 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1405F16DC (AlpcpDeleteBlob.c)
 *     AlpcReferenceBlobByHandle @ 0x1405F2F30 (AlpcReferenceBlobByHandle.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcDeletePortSection(void *a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  struct _DMA_ADAPTER *v6; // rsi
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rdi
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v5 = -1073741811;
  }
  else
  {
    DmaAdapter = 0LL;
    v5 = ObReferenceObjectByHandle(
           a1,
           1u,
           AlpcPortObjectType,
           KeGetCurrentThread()->PreviousMode,
           (PVOID *)&DmaAdapter,
           0LL);
    if ( v5 >= 0 )
    {
      v6 = DmaAdapter;
      v7 = AlpcReferenceBlobByHandle((_QWORD *)(*(_QWORD *)&DmaAdapter[1].Version + 40LL), a3, AlpcSectionType);
      v8 = v7;
      if ( v7 )
      {
        if ( AlpcpDeleteBlob(v7) )
          AlpcpDereferenceBlobEx(v8, 1);
        else
          v5 = -1073741738;
        AlpcpDereferenceBlobEx(v8, 1);
      }
      else
      {
        v5 = -1073741816;
      }
      HalPutDmaAdapter(v6);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
