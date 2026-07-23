/*
 * XREFs of RtlOwnerAcesPresent @ 0x1402EFB50
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x1402EFB70 (RtlpOwnerAcesPresent.c)
 */

BOOLEAN __cdecl RtlOwnerAcesPresent(PACL pAcl)
{
  return RtlpOwnerAcesPresent(0LL, pAcl);
}
