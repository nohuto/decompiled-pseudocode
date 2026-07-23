/*
 * XREFs of NtAlpcCreateResourceReserve @ 0x1406C2730
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateReserve @ 0x1406C2824 (AlpcpCreateReserve.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAlpcCreateResourceReserve(
        HANDLE PortHandle,
        ULONG Flags,
        SIZE_T MessageSize,
        PALPC_HANDLE ResourceId)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v8; // rcx
  int Reserve; // ebx
  struct _DMA_ADAPTER *v10; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  v13 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    Reserve = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      v8 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ResourceId < 0x7FFFFFFF0000LL )
        v8 = (__int64)ResourceId;
      *(_DWORD *)v8 = *(_DWORD *)v8;
    }
    Object = 0LL;
    Reserve = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( Reserve >= 0 )
    {
      v10 = (struct _DMA_ADAPTER *)Object;
      Reserve = AlpcpCreateReserve(Object);
      if ( Reserve >= 0 )
        *(_DWORD *)ResourceId = v13 | 0x80000000;
      HalPutDmaAdapter(v10);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), *(__int64 *)&Flags, MessageSize, (__int64)ResourceId);
  return Reserve;
}
