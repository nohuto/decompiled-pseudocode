/*
 * XREFs of EtwpCheckProviderLoggingAccess @ 0x1406E3FF0
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x1406E3F1C (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140657C60 (SeCaptureSubjectContextEx.c)
 *     EtwpCheckGuidAccess @ 0x1406E3280 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckProviderLoggingAccess(__int64 a1, unsigned int *a2, char a3)
{
  unsigned int v4; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a3 || (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 0LL;
  SeCaptureSubjectContextEx(0LL, *(PEPROCESS *)(a1 + 80), &SubjectContext);
  v4 = EtwpCheckGuidAccess(a2, 0x200u, &SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return v4;
}
