/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x14064B518
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x140647758 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14064A8F4 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14064B1B0 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
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
