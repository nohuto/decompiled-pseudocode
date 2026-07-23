/*
 * XREFs of NtSetIoCompletion @ 0x1405F46B0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoSetIoCompletionEx2 @ 0x1402EAA80 (IoSetIoCompletionEx2.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
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
           IoStatus,
           IoStatusInformation,
           1u,
           0LL,
           0);
    HalPutDmaAdapter(DmaAdapter);
  }
  return v8;
}
