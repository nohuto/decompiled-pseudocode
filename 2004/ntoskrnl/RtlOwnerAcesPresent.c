/*
 * XREFs of RtlOwnerAcesPresent @ 0x14032A9E0
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x14032AA00 (RtlpOwnerAcesPresent.c)
 */

__int64 __fastcall RtlOwnerAcesPresent(__int64 a1)
{
  return RtlpOwnerAcesPresent(0LL, a1);
}
