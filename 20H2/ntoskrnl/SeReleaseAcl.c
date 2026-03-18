/*
 * XREFs of SeReleaseAcl @ 0x1406AA268
 * Callers:
 *     NtCreateTokenEx @ 0x1406A8DE0 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1406AB220 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
