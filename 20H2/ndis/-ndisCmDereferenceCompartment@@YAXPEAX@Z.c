/*
 * XREFs of ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C00B4678
 * Callers:
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C01262DC (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C0020614 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 */

void __fastcall ndisCmDereferenceCompartment(_DWORD *a1)
{
  ndisIfDereferenceCompartmentForUser(a1);
}
