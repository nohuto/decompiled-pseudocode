/*
 * XREFs of PiSwPdoAssociationFree @ 0x140953970
 * Callers:
 *     PiSwDeviceFree @ 0x140661C4C (PiSwDeviceFree.c)
 *     PiSwRemovePdoAssociation @ 0x140953B2C (PiSwRemovePdoAssociation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[4]);
  ObfDereferenceObject(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
