/*
 * XREFs of TtmpDispatchGetTerminalEvent @ 0x140903660
 * Callers:
 *     TtmDispatchApi @ 0x140902EE4 (TtmDispatchApi.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     TtmiLogError @ 0x140905314 (TtmiLogError.c)
 *     TtmiRetrieveEventFromQueue @ 0x140907DDC (TtmiRetrieveEventFromQueue.c)
 */

__int64 __fastcall TtmpDispatchGetTerminalEvent(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  int EventFromQueue; // eax
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(void **)(a1 + 8);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v5 = ObReferenceObjectByHandle(v3, 0xF0000u, TtmpQueueObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  v6 = v5;
  if ( v5 < 0 )
    TtmiLogError("TtmiReferenceQueueByHandle", 310LL, (unsigned int)v5, (unsigned int)v5);
  if ( (v6 & 0x80000000) != 0 )
  {
    v7 = v6;
    v8 = v6;
    v9 = 410LL;
LABEL_5:
    TtmiLogError("TtmpDispatchGetTerminalEvent", v9, v8, v7);
    goto LABEL_9;
  }
  EventFromQueue = TtmiRetrieveEventFromQueue(DmaAdapter, a2);
  v6 = EventFromQueue;
  if ( EventFromQueue < 0 )
  {
    v7 = (unsigned int)EventFromQueue;
    v8 = (unsigned int)EventFromQueue;
    v9 = 418LL;
    goto LABEL_5;
  }
  v6 = 0;
LABEL_9:
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return v6;
}
