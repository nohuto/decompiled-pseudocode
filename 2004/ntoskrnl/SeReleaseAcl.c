/*
 * XREFs of SeReleaseAcl @ 0x1406310C0
 * Callers:
 *     NtCreateTokenEx @ 0x14062F9A0 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
