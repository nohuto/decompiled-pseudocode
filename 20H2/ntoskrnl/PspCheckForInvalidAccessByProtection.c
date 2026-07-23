/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x1406B345C
 * Callers:
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B3408 (PsTestProtectedProcessIncompatibility.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1406B348C (RtlTestProtectedAccess.c)
 */

bool __fastcall PspCheckForInvalidAccessByProtection(char a1, PS_PROTECTION a2, PS_PROTECTION a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1 )
    return RtlTestProtectedAccess(a2, a3) == 0;
  return v3;
}
