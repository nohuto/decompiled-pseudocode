/*
 * XREFs of EtwpRealtimeDisconnectConsumerByHandle @ 0x14071214C
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1407125F8 (EtwpRealtimeDisconnectConsumer.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumerByHandle(void *a1)
{
  NTSTATUS v1; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  DmaAdapter = 0LL;
  v1 = ObReferenceObjectByHandle(
         a1,
         0x400u,
         EtwpRealTimeConnectionObjectType,
         KeGetCurrentThread()->PreviousMode,
         (PVOID *)&DmaAdapter,
         0LL);
  if ( v1 >= 0 )
  {
    EtwpRealtimeDisconnectConsumer(DmaAdapter);
    HalPutDmaAdapter(DmaAdapter);
  }
  return (unsigned int)v1;
}
