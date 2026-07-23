/*
 * XREFs of NtSetIoCompletionEx @ 0x140673000
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     IoSetIoCompletionEx @ 0x1402837B0 (IoSetIoCompletionEx.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetIoCompletionEx(
        HANDLE IoCompletionHandle,
        HANDLE IoCompletionPacketHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v11; // ebx
  signed __int32 v12; // eax
  struct _DMA_ADAPTER *v13; // rsi
  PVOID v14; // r8
  struct _DMA_ADAPTER *v15; // rdi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-10h] BYREF

  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(
             IoCompletionHandle,
             2u,
             IoCompletionObjectType,
             KeGetCurrentThread()->PreviousMode,
             (PVOID *)&DmaAdapter,
             0LL);
  if ( result < 0 )
    return result;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(IoCompletionPacketHandle, 2u, ObjectType, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
  {
    v15 = DmaAdapter;
    goto LABEL_5;
  }
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)Object, 1, 0);
  v13 = (struct _DMA_ADAPTER *)Object;
  if ( v12 )
  {
    v15 = DmaAdapter;
    v11 = -1073741584;
LABEL_11:
    if ( v13 )
      HalPutDmaAdapter(v13);
    goto LABEL_5;
  }
  v14 = ApcContext;
  v15 = DmaAdapter;
  v11 = IoSetIoCompletionEx(
          (__int64)DmaAdapter,
          (__int64)KeyContext,
          (__int64)v14,
          (_DWORD *)(unsigned int)IoStatus,
          IoStatusInformation,
          0,
          (__int64)Object + 8);
  if ( v11 < 0 )
  {
    *(_DWORD *)&v13->Version = 0;
    goto LABEL_11;
  }
LABEL_5:
  if ( v15 )
    HalPutDmaAdapter(v15);
  return v11;
}
