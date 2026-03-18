/*
 * XREFs of SepFreeTokenCapabilities @ 0x1402C6528
 * Callers:
 *     SepSetTokenCapabilities @ 0x140630388 (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x1406975D0 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x1409216E4 (SepDeReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
