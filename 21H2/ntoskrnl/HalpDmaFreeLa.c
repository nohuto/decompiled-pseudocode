/*
 * XREFs of HalpDmaFreeLa @ 0x1404B7B38
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x1403A2E80 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x1404CAB50 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x1404B85A8 (HalpDmaReturnEmergencyLogicalAddressResources.c)
 *     HalpDomainLaDelete @ 0x1404C5034 (HalpDomainLaDelete.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C9574 (HalpIommuDomainUnmapLogicalRange.c)
 */

__int64 __fastcall HalpDmaFreeLa(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  __int128 *i; // rdx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 504);
  v7 = *(_OWORD *)(a1 + 248);
  HalpIommuDomainUnmapLogicalRange(*(_QWORD *)(v2 + 40), a2);
  if ( a2 == *(_QWORD *)(a1 + 552) )
    return HalpDmaReturnEmergencyLogicalAddressResources((PDMA_ADAPTER)a1);
  result = 0LL;
  for ( i = &v7; !*(_QWORD *)i || a2 != *(_QWORD *)(*(_QWORD *)i + 24LL); i = (__int128 *)((char *)i + 8) )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 2 )
      return HalpDomainLaDelete(v2, a2);
  }
  return result;
}
