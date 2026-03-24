/*
 * XREFs of PiSwPdoAssociationFree @ 0x140732DDC
 * Callers:
 *     PiSwRemovePdoAssociation @ 0x140732D6C (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceFree @ 0x140733F90 (PiSwDeviceFree.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PADAPTER_OBJECT *P)
{
  HalPutDmaAdapter(P[4]);
  HalPutDmaAdapter(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
