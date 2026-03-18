/*
 * XREFs of SeReleaseImageValidationContext @ 0x14078AAA4
 * Callers:
 *     MiDeleteControlArea @ 0x1402D2584 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x14070EA48 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140C1D9A8 )
    qword_140C1D9A8();
  else
    ExFreePoolWithTag(a1, 0);
}
