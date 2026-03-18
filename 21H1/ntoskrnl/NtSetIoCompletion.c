/*
 * XREFs of NtSetIoCompletion @ 0x1406C52E0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x140246460 (IoSetIoCompletionEx2.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtSetIoCompletion(void *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int v8; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-18h] BYREF

  DmaAdapter = 0LL;
  v8 = ObReferenceObjectByHandle(
         a1,
         2u,
         IoCompletionObjectType,
         KeGetCurrentThread()->PreviousMode,
         (PVOID *)&DmaAdapter,
         0LL);
  if ( v8 >= 0 )
  {
    v8 = IoSetIoCompletionEx2((__int64)DmaAdapter, a2, a3, (_DWORD *)a4, a5, 1u, 0LL, 0);
    HalPutDmaAdapter(DmaAdapter);
  }
  return (unsigned int)v8;
}
