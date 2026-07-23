/*
 * XREFs of NtAlpcDeletePortSection @ 0x14070A5A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x1406106A0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteBlob @ 0x1406107EC (AlpcpDeleteBlob.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAlpcDeletePortSection(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE SectionHandle)
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
  v5 = (int)SectionHandle;
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
      v8 = AlpcReferenceBlobByHandle(*(_QWORD *)&DmaAdapter[1].Version + 40LL, v5, AlpcSectionType);
      v9 = v8;
      if ( v8 )
      {
        if ( AlpcpDeleteBlob(v8) )
          AlpcpDereferenceBlobEx(v9, 1);
        else
          v6 = -1073741738;
        AlpcpDereferenceBlobEx(v9, 1);
      }
      else
      {
        v6 = -1073741816;
      }
      HalPutDmaAdapter(v7);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), *(__int64 *)&Flags, (__int64)SectionHandle, v3);
  return v6;
}
