/*
 * XREFs of NtSetIoCompletion @ 0x1406C52E0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x140246460 (IoSetIoCompletionEx2.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation)
{
  NTSTATUS v8; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-18h] BYREF

  DmaAdapter = 0LL;
  v8 = ObReferenceObjectByHandle(
         IoCompletionHandle,
         2u,
         IoCompletionObjectType,
         KeGetCurrentThread()->PreviousMode,
         (PVOID *)&DmaAdapter,
         0LL);
  if ( v8 >= 0 )
  {
    v8 = IoSetIoCompletionEx2(
           (__int64)DmaAdapter,
           (__int64)KeyContext,
           (__int64)ApcContext,
           (_DWORD *)(unsigned int)IoStatus,
           IoStatusInformation,
           1u,
           0LL,
           0);
    HalPutDmaAdapter(DmaAdapter);
  }
  return v8;
}
