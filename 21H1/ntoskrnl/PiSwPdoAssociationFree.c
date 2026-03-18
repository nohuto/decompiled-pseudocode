/*
 * XREFs of PiSwPdoAssociationFree @ 0x14071ECDC
 * Callers:
 *     PiSwRemovePdoAssociation @ 0x14071EC6C (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceFree @ 0x14071FF8C (PiSwDeviceFree.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PADAPTER_OBJECT *P)
{
  HalPutDmaAdapter(P[4]);
  HalPutDmaAdapter(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
