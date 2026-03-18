/*
 * XREFs of HalCancelAdapterChannelThin @ 0x1404C9310
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x1404B6680 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x1404B67A0 (HalpDmaRemoveFromEmergencyLogicalAddressQueue.c)
 *     HalpDmaRemoveWcb @ 0x1404B68A4 (HalpDmaRemoveWcb.c)
 *     IoFreeAdapterChannel @ 0x1404B7350 (IoFreeAdapterChannel.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x1404CD534 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
