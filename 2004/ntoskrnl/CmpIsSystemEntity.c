/*
 * XREFs of CmpIsSystemEntity @ 0x140693D90
 * Callers:
 *     KCBNeedsVirtualImage @ 0x1402787B8 (KCBNeedsVirtualImage.c)
 *     CmDoVirtualTest @ 0x14035E9E4 (CmDoVirtualTest.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404E7814 (KCBNeedsVirtualImage_0.c)
 *     CmpVEExecuteOpenLogic @ 0x1406931B0 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140694210 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406DCA90 (CmpVEPerformOpenAccessCheck.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14034B7B0 (PsGetCurrentThreadProcess.c)
 *     SeCaptureSubjectContextEx @ 0x14067AEC0 (SeCaptureSubjectContextEx.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 */

bool __fastcall CmpIsSystemEntity(char a1, struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext, int *a3)
{
  char v3; // si
  PACCESS_TOKEN ClientToken; // rax
  PACCESS_TOKEN PrimaryToken; // rcx
  bool v7; // bl
  int v8; // eax
  int v9; // eax
  struct _KPROCESS *CurrentThreadProcess; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !CmpVEEnabled )
    return 1;
  if ( a3 && (*a3 & 1) != 0 )
    return (*a3 & 2) != 0;
  if ( !a1 )
    return 1;
  if ( !p_SubjectContext )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    SeCaptureSubjectContextEx(KeGetCurrentThread(), CurrentThreadProcess, &SubjectContext);
    p_SubjectContext = &SubjectContext;
    v3 = 1;
  }
  ClientToken = p_SubjectContext->ClientToken;
  LODWORD(TokenInformation) = 0;
  if ( ClientToken )
    PrimaryToken = ClientToken;
  else
    PrimaryToken = p_SubjectContext->PrimaryToken;
  v7 = 1;
  if ( !ClientToken )
  {
    SeQueryInformationToken(PrimaryToken, TokenVirtualizationEnabled, &TokenInformation);
    if ( (_DWORD)TokenInformation )
      v7 = 0;
  }
  if ( a3 )
  {
    v8 = *a3;
    if ( v7 )
    {
      v9 = v8 | 3;
    }
    else
    {
      v9 = v8 | 5;
      v7 = 0;
    }
    *a3 = v9;
  }
  if ( v3 )
    SeReleaseSubjectContext(&SubjectContext);
  return v7;
}
