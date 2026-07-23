/*
 * XREFs of IoComputeRedirectionTrustLevel @ 0x1403F13D0
 * Callers:
 *     <none>
 * Callees:
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeTokenIsAdmin @ 0x1406C5B80 (SeTokenIsAdmin.c)
 */

__int64 __fastcall IoComputeRedirectionTrustLevel(
        __int64 a1,
        char a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        _DWORD *a4)
{
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a2 )
  {
    if ( !a3 )
      SeCaptureSubjectContext(&SubjectContext);
    p_SubjectContext = &SubjectContext;
    if ( a3 )
      p_SubjectContext = a3;
    ClientToken = p_SubjectContext->ClientToken;
    if ( !p_SubjectContext->ClientToken )
      ClientToken = p_SubjectContext->PrimaryToken;
    *a4 = (SeTokenIsAdmin(ClientToken) != 0) + 1;
    if ( !a3 )
      SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
    *a4 = 2;
  }
  return 0LL;
}
