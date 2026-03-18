/*
 * XREFs of NtSetIoCompletionEx @ 0x1405FAF20
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx @ 0x140246FD0 (IoSetIoCompletionEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtSetIoCompletionEx(void *a1, void *a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // r9
  int v11; // ebx
  signed __int32 v12; // eax
  struct _DMA_ADAPTER *v13; // rsi
  __int64 v14; // r8
  struct _DMA_ADAPTER *v15; // rdi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-10h] BYREF

  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             2u,
             IoCompletionObjectType,
             KeGetCurrentThread()->PreviousMode,
             (PVOID *)&DmaAdapter,
             0LL);
  if ( result < 0 )
    return result;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(a2, 2u, ObjectType, PreviousMode, &Object, 0LL);
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
  v14 = a4;
  v15 = DmaAdapter;
  v11 = IoSetIoCompletionEx((__int64)DmaAdapter, a3, v14, (_DWORD *)a5, a6, 0, (__int64)Object + 8);
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
