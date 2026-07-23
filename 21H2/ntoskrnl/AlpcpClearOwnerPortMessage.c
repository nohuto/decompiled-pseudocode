/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x1406D309C
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406D133C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1406D21B0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1406D2D1C (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
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
