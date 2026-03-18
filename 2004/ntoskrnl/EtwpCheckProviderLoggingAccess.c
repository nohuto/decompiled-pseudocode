/*
 * XREFs of EtwpCheckProviderLoggingAccess @ 0x140636FA0
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x140636ECC (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x1406365C4 (EtwpCheckGuidAccess.c)
 *     SeCaptureSubjectContextEx @ 0x14067AEC0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall EtwpCheckProviderLoggingAccess(__int64 a1, __int64 a2, char a3)
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
