/*
 * XREFs of NtAlpcDeleteResourceReserve @ 0x1408BFE70
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x140688820 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteBlob @ 0x14068896C (AlpcpDeleteBlob.c)
 */

__int64 __fastcall NtAlpcDeleteResourceReserve(void *a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  struct _DMA_ADAPTER *v6; // rsi
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rdi
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 || a3 >= 0 )
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
      v7 = AlpcReferenceBlobByHandle(*(_QWORD *)&DmaAdapter[1].Version + 40LL, a3 & 0x7FFFFFFF, AlpcReserveType);
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
