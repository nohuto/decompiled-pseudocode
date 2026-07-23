/*
 * XREFs of HalCancelAdapterChannelThin @ 0x1404CAF20
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x1404B8280 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x1404B83A0 (HalpDmaRemoveFromEmergencyLogicalAddressQueue.c)
 *     HalpDmaRemoveWcb @ 0x1404B84A4 (HalpDmaRemoveWcb.c)
 *     IoFreeAdapterChannel @ 0x1404B8F50 (IoFreeAdapterChannel.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x1404CF144 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

char __fastcall HalCancelAdapterChannelThin(PDMA_ADAPTER DmaAdapter, __int64 a2, volatile signed __int32 *a3)
{
  char v4; // al
  __int64 v5; // rdi
  char v6; // bl

  _m_prefetchw((const void *)(a3 + 2));
  v4 = _InterlockedOr(a3 + 2, 2u);
  if ( (v4 & 1) != 0 || (v4 & 4) == 0 )
    return 0;
  v5 = *((_QWORD *)a3 + 11);
  if ( !v5 )
  {
    if ( HalpDmaRemoveWcb((__int64)DmaAdapter, (_QWORD *)a3 + 2) )
      return 1;
    if ( HalpDmaRemoveFromEmergencyLogicalAddressQueue((__int64)DmaAdapter, &DmaAdapter[37].Version)
      || HalpDmaRemoveAdapterFromMasterQueue((__int64)DmaAdapter)
      || !HIBYTE(DmaAdapter[27].Version) && (unsigned __int8)HalpDmaRemoveAdapterFromChannelQueue(DmaAdapter) )
    {
      *(_DWORD *)&DmaAdapter[15].Version = 0;
      IoFreeAdapterChannel(DmaAdapter);
      return 1;
    }
    return 0;
  }
  v6 = HalpDmaRemoveFromEmergencyLogicalAddressQueue((__int64)DmaAdapter, *((_QWORD **)a3 + 11));
  if ( v6 )
  {
    if ( *(_BYTE *)(v5 + 97) )
      ExFreePoolWithTag(*(PVOID *)(v5 + 80), 0);
  }
  return v6;
}
