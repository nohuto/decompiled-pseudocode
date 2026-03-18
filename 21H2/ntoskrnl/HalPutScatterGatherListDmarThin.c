/*
 * XREFs of HalPutScatterGatherListDmarThin @ 0x140516470
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x140504DAC (HalpDmaReturnEmergencyLogicalAddressResources.c)
 *     HalpPutScatterGatherListDmarThin @ 0x140516B78 (HalpPutScatterGatherListDmarThin.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListDmarThin(struct _DMA_ADAPTER *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  char v5; // bp

  v2 = a2[1];
  v5 = HalpPutScatterGatherListDmarThin();
  if ( *(_BYTE *)(v2 + 97) )
    ExFreePoolWithTag(a2, 0);
  if ( v5 )
    HalpDmaReturnEmergencyLogicalAddressResources(a1);
}
