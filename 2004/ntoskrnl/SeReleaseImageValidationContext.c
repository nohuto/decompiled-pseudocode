/*
 * XREFs of SeReleaseImageValidationContext @ 0x14077C4A4
 * Callers:
 *     MiDeleteControlArea @ 0x140260548 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x1406EAE30 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140C1D908 )
    qword_140C1D908();
  else
    ExFreePoolWithTag(a1, 0);
}
