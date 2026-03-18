/*
 * XREFs of EtwpCheckProviderLoggingAccess @ 0x140790C44
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x140790B38 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     EtwpCheckGuidAccess @ 0x140790CA8 (EtwpCheckGuidAccess.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall EtwpCheckProviderLoggingAccess(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a3 || (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 0LL;
  SeCaptureSubjectContextEx(0LL, *(PEPROCESS *)(a1 + 80), &SubjectContext);
  v5 = EtwpCheckGuidAccess(a2, 512LL, &SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return v5;
}
