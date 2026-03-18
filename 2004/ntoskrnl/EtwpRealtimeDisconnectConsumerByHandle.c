/*
 * XREFs of EtwpRealtimeDisconnectConsumerByHandle @ 0x1406C6704
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406C6BB8 (EtwpRealtimeDisconnectConsumer.c)
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
