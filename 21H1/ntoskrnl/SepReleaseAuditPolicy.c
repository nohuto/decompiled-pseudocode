/*
 * XREFs of SepReleaseAuditPolicy @ 0x14091C8F4
 * Callers:
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseAuditPolicy(void *a1, unsigned __int8 a2)
{
  if ( a1 )
  {
    if ( a2 <= 1u )
      ExFreePoolWithTag(a1, 0);
  }
}
