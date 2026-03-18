/*
 * XREFs of CmpIsSystemEntity @ 0x1405EA850
 * Callers:
 *     KCBNeedsVirtualImage @ 0x14030B554 (KCBNeedsVirtualImage.c)
 *     CmDoVirtualTest @ 0x140320F24 (CmDoVirtualTest.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404E71D8 (KCBNeedsVirtualImage_0.c)
 *     CmpVEExecuteOpenLogic @ 0x1405E9C70 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406BB850 (CmpVEPerformOpenAccessCheck.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14030E2D0 (PsGetCurrentThreadProcess.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140602DE0 (SeCaptureSubjectContextEx.c)
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
