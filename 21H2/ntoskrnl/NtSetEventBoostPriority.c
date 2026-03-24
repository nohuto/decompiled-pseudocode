/*
 * XREFs of NtSetEventBoostPriority @ 0x14094F420
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeSetEventBoostPriority @ 0x140518C60 (KeSetEventBoostPriority.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtSetEventBoostPriority(void *a1)
{
  NTSTATUS v1; // edi
  struct _DMA_ADAPTER *v2; // rbx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  DmaAdapter = 0LL;
  v1 = ObReferenceObjectByHandle(
         a1,
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
  return (unsigned int)v1;
}
