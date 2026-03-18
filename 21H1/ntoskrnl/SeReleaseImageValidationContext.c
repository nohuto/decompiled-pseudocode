/*
 * XREFs of SeReleaseImageValidationContext @ 0x14077A094
 * Callers:
 *     MiDeleteControlArea @ 0x1402B9578 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x1406C9BB0 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140C1DAC8 )
    qword_140C1DAC8();
  else
    ExFreePoolWithTag(a1, 0);
}
