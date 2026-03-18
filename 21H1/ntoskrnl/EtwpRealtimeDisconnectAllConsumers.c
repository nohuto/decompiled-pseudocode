/*
 * XREFs of EtwpRealtimeDisconnectAllConsumers @ 0x140704368
 * Callers:
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 *     EtwpFreeLoggerContext @ 0x1407013FC (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 */

void __fastcall EtwpRealtimeDisconnectAllConsumers(__int64 a1)
{
  struct _DMA_ADAPTER **v2; // rdi
  struct _DMA_ADAPTER *v3; // rbx
  struct _DMA_ADAPTER *v4; // rax
  struct _KEVENT *v5; // rcx

  v2 = (struct _DMA_ADAPTER **)(a1 + 344);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (struct _DMA_ADAPTER *)v2 )
      break;
    if ( (struct _DMA_ADAPTER **)v3->DmaOperations != v2
      || (v4 = *(struct _DMA_ADAPTER **)&v3->Version, *(struct _DMA_ADAPTER **)(*(_QWORD *)&v3->Version + 8LL) != v3) )
    {
      __fastfail(3u);
    }
    *v2 = v4;
    v4->DmaOperations = (_DMA_OPERATIONS *)v2;
    --*(_DWORD *)(a1 + 360);
    v5 = *(struct _KEVENT **)&v3[3].Version;
    BYTE2(v3[5].DmaOperations) |= 4u;
    KeSetEvent(v5, 0, 0);
    HalPutDmaAdapter(v3);
  }
}
