/*
 * XREFs of PsAcquireProcessExitSynchronization @ 0x1406209F0
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x140620A44 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall PsAcquireProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  return ExAcquireRundownProtection_0(a1 + 139) == 0 ? 0xC000010A : 0;
}
