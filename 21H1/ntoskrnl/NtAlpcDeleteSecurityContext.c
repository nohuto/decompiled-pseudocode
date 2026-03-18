/*
 * XREFs of NtAlpcDeleteSecurityContext @ 0x140611F60
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

__int64 __fastcall NtAlpcDeleteSecurityContext(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  NTSTATUS v6; // ebx
  struct _DMA_ADAPTER *v7; // rsi
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // rdi
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  --CurrentThread->KernelApcDisable;
  if ( (_DWORD)a2 )
  {
    v6 = -1073741811;
  }
  else
  {
    DmaAdapter = 0LL;
    v6 = ObReferenceObjectByHandle(
           a1,
           1u,
           AlpcPortObjectType,
           KeGetCurrentThread()->PreviousMode,
           (PVOID *)&DmaAdapter,
           0LL);
    if ( v6 >= 0 )
    {
      v7 = DmaAdapter;
      v8 = AlpcReferenceBlobByHandle(*(_QWORD *)&DmaAdapter[1].Version + 40LL, v5, AlpcSecurityType);
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), a2, a3, a4);
  return (unsigned int)v6;
}
