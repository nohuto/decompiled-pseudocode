/*
 * XREFs of SepFreeTokenCapabilities @ 0x1402336F8
 * Callers:
 *     SepTokenDeleteMethod @ 0x1405EE0D0 (SepTokenDeleteMethod.c)
 *     SepSetTokenCapabilities @ 0x140673878 (SepSetTokenCapabilities.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x140920434 (SepDeReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
