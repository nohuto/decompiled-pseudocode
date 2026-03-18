/*
 * XREFs of HalCancelAdapterChannelDmaThin @ 0x1405157F0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x140504A84 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x140504BA4 (HalpDmaRemoveFromEmergencyLogicalAddressQueue.c)
 *     HalpDmaRemoveWcb @ 0x140504CA8 (HalpDmaRemoveWcb.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x140519B94 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall HalCancelAdapterChannelDmaThin(PDMA_ADAPTER DmaAdapter, __int64 a2, volatile signed __int32 *a3)
{
  char v4; // al
  __int64 v5; // rcx

  _m_prefetchw((const void *)(a3 + 2));
  v4 = _InterlockedOr(a3 + 2, 2u);
  if ( (v4 & 1) == 0 && (v4 & 4) != 0 )
  {
    v5 = *((_QWORD *)a3 + 11);
    if ( v5 )
    {
      if ( *(_BYTE *)(v5 + 97) )
      {
        ExFreePoolWithTag(*(PVOID *)(v5 + 80), 0);
        return 1;
      }
    }
    else
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
    }
  }
  return 0;
}
