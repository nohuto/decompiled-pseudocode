/*
 * XREFs of PiSwPdoAssociationFree @ 0x140720A7C
 * Callers:
 *     PiSwRemovePdoAssociation @ 0x140720A0C (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceFree @ 0x140721E4C (PiSwDeviceFree.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PADAPTER_OBJECT *P)
{
  HalPutDmaAdapter(P[4]);
  HalPutDmaAdapter(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
