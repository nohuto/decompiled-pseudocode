/*
 * XREFs of PiSwPdoAssociationFree @ 0x140732F9C
 * Callers:
 *     PiSwRemovePdoAssociation @ 0x140732F2C (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceFree @ 0x140734150 (PiSwDeviceFree.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PADAPTER_OBJECT *P)
{
  HalPutDmaAdapter(P[4]);
  HalPutDmaAdapter(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
