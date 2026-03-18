/*
 * XREFs of SeAuditingAnyFileEventsWithContext @ 0x14091D360
 * Callers:
 *     <none>
 * Callees:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140297CE0 (SeAuditingAnyFileEventsWithContextEx.c)
 */

BOOLEAN __stdcall SeAuditingAnyFileEventsWithContext(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  return SeAuditingAnyFileEventsWithContextEx((__int64)SecurityDescriptor, (__int64)SubjectSecurityContext, 0LL);
}
