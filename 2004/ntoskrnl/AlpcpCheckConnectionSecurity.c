/*
 * XREFs of AlpcpCheckConnectionSecurity @ 0x14062DAA8
 * Callers:
 *     AlpcpCreateClientPort @ 0x14062B308 (AlpcpCreateClientPort.c)
 * Callees:
 *     RtlEqualSid @ 0x140298E50 (RtlEqualSid.c)
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     SeAccessCheck @ 0x14029AA90 (SeAccessCheck.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     SeQueryUserSidToken @ 0x1406259FC (SeQueryUserSidToken.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     RtlMapGenericMask @ 0x140677E80 (RtlMapGenericMask.c)
 *     SeCaptureSubjectContextEx @ 0x14067AEC0 (SeCaptureSubjectContextEx.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall AlpcpCheckConnectionSecurity(PEPROCESS Process, KPROCESSOR_MODE a2, void *a3, void *a4)
{
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  struct _DMA_ADAPTER *v11; // rbx
  int InformationToken; // eax
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-69h] BYREF
  ACCESS_MASK AccessMask[2]; // [rsp+58h] [rbp-61h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-59h] BYREF
  _BYTE Sid2[80]; // [rsp+80h] [rbp-39h] BYREF

  AccessStatus = 0;
  if ( a3 )
  {
    *(_QWORD *)AccessMask = 0LL;
    memset(Sid2, 0, 0x44uLL);
    v11 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
    InformationToken = SeQueryInformationToken(v11, TokenIsAppContainer, (PVOID *)AccessMask);
    AccessStatus = InformationToken;
    if ( InformationToken >= 0 )
    {
      if ( *(_QWORD *)AccessMask )
        InformationToken = -1073741152;
      AccessStatus = InformationToken;
      if ( InformationToken >= 0 )
        SeQueryUserSidToken((__int64)v11, Sid2, 0x44u, 0LL);
    }
    ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v11);
    v9 = AccessStatus;
    if ( AccessStatus < 0 )
      return v9;
    if ( !RtlEqualSid(a3, Sid2) )
      v9 = -1073741152;
    AccessStatus = v9;
    if ( (v9 & 0x80000000) != 0 )
      return v9;
  }
  if ( !a4 )
    return 0LL;
  AccessMask[0] = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContextEx(0LL, Process, &SubjectContext);
  SeAccessCheck(
    a4,
    &SubjectContext,
    0,
    0x2000000u,
    0,
    0LL,
    &AlpcPortObjectType->TypeInfo.GenericMapping,
    a2,
    AccessMask,
    &AccessStatus);
  RtlMapGenericMask(AccessMask, &AlpcPortObjectType->TypeInfo.GenericMapping);
  v8 = AccessStatus;
  if ( (AccessMask[0] & 1) == 0 )
    v8 = -1073741152;
  AccessStatus = v8;
  SeReleaseSubjectContext(&SubjectContext);
  v9 = AccessStatus;
  if ( AccessStatus < 0 )
    return v9;
  else
    return 0LL;
}
