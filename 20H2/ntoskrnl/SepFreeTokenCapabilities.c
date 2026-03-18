/*
 * XREFs of SepFreeTokenCapabilities @ 0x1402FB640
 * Callers:
 *     SepTokenDeleteMethod @ 0x14067DEC0 (SepTokenDeleteMethod.c)
 *     SepSetTokenCapabilities @ 0x1406A97C8 (SepSetTokenCapabilities.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x14092773C (SepDeReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
