/*
 * XREFs of SeReleaseAcl @ 0x140675370
 * Callers:
 *     NtCreateTokenEx @ 0x140672E90 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
