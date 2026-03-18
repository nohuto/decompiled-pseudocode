/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x1405EAEDC
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x1405E917C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1405E9FF0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1405EA5BC (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1405EAB5C (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
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
