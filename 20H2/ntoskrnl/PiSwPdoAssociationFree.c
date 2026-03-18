/*
 * XREFs of PiSwPdoAssociationFree @ 0x14072EA6C
 * Callers:
 *     PiSwRemovePdoAssociation @ 0x14072E9FC (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceFree @ 0x14072FF5C (PiSwDeviceFree.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PADAPTER_OBJECT *P)
{
  HalPutDmaAdapter(P[4]);
  HalPutDmaAdapter(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
