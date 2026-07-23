/*
 * XREFs of NtAlpcDeleteSecurityContext @ 0x1406DA3F0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     AlpcReferenceBlobByHandle @ 0x140655760 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1406D97FC (AlpcpDeleteBlob.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAlpcDeleteSecurityContext(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ContextHandle)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  int v6; // ebx
  struct _DMA_ADAPTER *v7; // rsi
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // rdi
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = (int)ContextHandle;
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v6 = -1073741811;
  }
  else
  {
    DmaAdapter = 0LL;
    v6 = ObReferenceObjectByHandle(
           PortHandle,
           1u,
           AlpcPortObjectType,
           KeGetCurrentThread()->PreviousMode,
           (PVOID *)&DmaAdapter,
           0LL);
    if ( v6 >= 0 )
    {
      v7 = DmaAdapter;
      v8 = AlpcReferenceBlobByHandle((_QWORD *)(*(_QWORD *)&DmaAdapter[1].Version + 40LL), v5, AlpcSecurityType);
      v9 = v8;
      if ( v8 )
      {
        if ( v7 == *(struct _DMA_ADAPTER **)(v8 + 24) )
        {
          if ( AlpcpDeleteBlob(v8) )
            AlpcpDereferenceBlobEx(v9, 1);
          else
            v6 = -1073741738;
        }
        else
        {
          v6 = -1073741790;
        }
        AlpcpDereferenceBlobEx(v9, 1);
      }
      else
      {
        v6 = -1073741816;
      }
      HalPutDmaAdapter(v7);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), *(__int64 *)&Flags, (__int64)ContextHandle, v3);
  return v6;
}
