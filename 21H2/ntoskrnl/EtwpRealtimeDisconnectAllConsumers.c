/*
 * XREFs of EtwpRealtimeDisconnectAllConsumers @ 0x140614D3C
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406146D4 (EtwpFreeLoggerContext.c)
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
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
