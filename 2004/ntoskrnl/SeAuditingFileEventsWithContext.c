/*
 * XREFs of SeAuditingFileEventsWithContext @ 0x14091D3C0
 * Callers:
 *     <none>
 * Callees:
 *     SeAuditingFileEventsWithContextEx @ 0x140591920 (SeAuditingFileEventsWithContextEx.c)
 */

BOOLEAN __stdcall SeAuditingFileEventsWithContext(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  return SeAuditingFileEventsWithContextEx(
           AccessGranted,
           (__int64)SecurityDescriptor,
           (__int64)SubjectSecurityContext,
           0LL);
}
