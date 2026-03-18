/*
 * XREFs of RtlIsSandboxedToken @ 0x140649A20
 * Callers:
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     RtlIsSandboxedTokenHandle @ 0x140322680 (RtlIsSandboxedTokenHandle.c)
 *     IopCheckInitiatorHint @ 0x14033E7F0 (IopCheckInitiatorHint.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     NtDuplicateToken @ 0x1406496B0 (NtDuplicateToken.c)
 *     ObpParseSymbolicLinkEx @ 0x140677D90 (ObpParseSymbolicLinkEx.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     CmpCheckCreateAccess @ 0x1406CD338 (CmpCheckCreateAccess.c)
 *     ObpCreateDirectoryObject @ 0x1406D1820 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x1406D7F7C (ObCreateSymbolicLink.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140209250 (SeAccessCheckWithHint.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1402C1180 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 */

bool __fastcall RtlIsSandboxedToken(PSECURITY_SUBJECT_CONTEXT SubjectContext, char a2)
{
  char v3; // si
  struct _SECURITY_SUBJECT_CONTEXT *v5; // rbx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // r14
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+60h] [rbp-48h] BYREF
  PVOID TokenInformation; // [rsp+B8h] [rbp+10h] BYREF
  int v11; // [rsp+C0h] [rbp+18h] BYREF
  int v12; // [rsp+C8h] [rbp+20h] BYREF

  v3 = 0;
  LODWORD(TokenInformation) = 0;
  v5 = 0LL;
  v12 = 0;
  v11 = 0;
  memset(&SubjectContexta, 0, sizeof(SubjectContexta));
  if ( a2 )
  {
    if ( !SubjectContext )
      SeCaptureSubjectContext(&SubjectContexta);
    p_SubjectContexta = &SubjectContexta;
    if ( SubjectContext )
      p_SubjectContexta = SubjectContext;
    v5 = p_SubjectContexta;
    if ( (unsigned __int8)SeAccessCheckWithHint(
                            (__int64)SeMediumDaclSd,
                            8LL,
                            (__int64)p_SubjectContexta,
                            0LL,
                            0x20000,
                            0,
                            0LL,
                            (__int64)RtlpRestrictedMapping,
                            a2,
                            (__int64)&v12,
                            (__int64)&v11) == 1 )
    {
      if ( !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
        goto LABEL_8;
      ClientToken = p_SubjectContexta->ClientToken;
      if ( !p_SubjectContexta->ClientToken )
        ClientToken = p_SubjectContexta->PrimaryToken;
      if ( SeQueryInformationToken(ClientToken, TokenIsAppContainer, &TokenInformation) >= 0
        && !(_DWORD)TokenInformation )
      {
LABEL_8:
        v3 = 1;
      }
    }
  }
  else
  {
    v3 = 1;
  }
  if ( v5 == &SubjectContexta )
    SeReleaseSubjectContext(v5);
  return v3 != 1;
}
