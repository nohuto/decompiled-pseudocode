/*
 * XREFs of SeAuditingAnyFileEventsWithContext @ 0x140922FE0
 * Callers:
 *     <none>
 * Callees:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140205700 (SeAuditingAnyFileEventsWithContextEx.c)
 */

BOOLEAN __stdcall SeAuditingAnyFileEventsWithContext(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  return SeAuditingAnyFileEventsWithContextEx((__int64)SecurityDescriptor, (__int64)SubjectSecurityContext, 0LL);
}
