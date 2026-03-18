/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x14062D968
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x140629BA8 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14062CD44 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14062D110 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14062D600 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 */

void __fastcall AlpcpClearOwnerPortMessage(__int64 a1)
{
  struct _DMA_ADAPTER *v2; // rcx

  v2 = *(struct _DMA_ADAPTER **)(a1 + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      HalPutDmaAdapter(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
