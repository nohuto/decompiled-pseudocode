/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x14064CF1C
 * Callers:
 *     PsTestProtectedProcessIncompatibility @ 0x14064CEC8 (PsTestProtectedProcessIncompatibility.c)
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x14064CF4C (RtlTestProtectedAccess.c)
 */

bool __fastcall PspCheckForInvalidAccessByProtection(char a1, PS_PROTECTION a2, PS_PROTECTION a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1 )
    return RtlTestProtectedAccess(a2, a3) == 0;
  return v3;
}
