/*
 * XREFs of NtSetEventBoostPriority @ 0x14094F5F0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeSetEventBoostPriority @ 0x140518EA0 (KeSetEventBoostPriority.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetEventBoostPriority(HANDLE EventHandle)
{
  int v1; // edi
  struct _DMA_ADAPTER *v2; // rbx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  DmaAdapter = 0LL;
  v1 = ObReferenceObjectByHandle(
         EventHandle,
         2u,
         (POBJECT_TYPE)ExEventObjectType,
         KeGetCurrentThread()->PreviousMode,
         (PVOID *)&DmaAdapter,
         0LL);
  if ( v1 >= 0 )
  {
    v2 = DmaAdapter;
    if ( (DmaAdapter->Version & 0x7F) != 0 )
      KeSetEventBoostPriority((__int64)DmaAdapter, 0LL);
    else
      v1 = -1073741788;
    HalPutDmaAdapter(v2);
  }
  return v1;
}
