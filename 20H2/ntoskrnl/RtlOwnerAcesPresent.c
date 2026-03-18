/*
 * XREFs of RtlOwnerAcesPresent @ 0x140204EA0
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x140204EC0 (RtlpOwnerAcesPresent.c)
 */

__int64 __fastcall RtlOwnerAcesPresent(__int64 a1)
{
  return RtlpOwnerAcesPresent(0LL, a1);
}
