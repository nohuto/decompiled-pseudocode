/*
 * XREFs of NtAlpcDeleteResourceReserve @ 0x1408C5CB0
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

NTSTATUS __cdecl NtAlpcDeleteResourceReserve(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ResourceId)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // edi
  int v5; // ebx
  struct _DMA_ADAPTER *v6; // rsi
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rdi
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (int)ResourceId;
  --CurrentThread->KernelApcDisable;
  if ( Flags || (int)ResourceId >= 0 )
  {
    v5 = -1073741811;
  }
  else
  {
    DmaAdapter = 0LL;
    v5 = ObReferenceObjectByHandle(
           PortHandle,
           1u,
           AlpcPortObjectType,
           KeGetCurrentThread()->PreviousMode,
           (PVOID *)&DmaAdapter,
           0LL);
    if ( v5 >= 0 )
    {
      v6 = DmaAdapter;
      v7 = AlpcReferenceBlobByHandle(
             (_QWORD *)(*(_QWORD *)&DmaAdapter[1].Version + 40LL),
             v4 & 0x7FFFFFFF,
             AlpcReserveType);
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
  return v5;
}
