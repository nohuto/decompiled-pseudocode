/*
 * XREFs of SeIsAppContainerOrIdentifyLevelContext @ 0x1407001B0
 * Callers:
 *     IopDoFullTraverseCheck @ 0x1402547B0 (IopDoFullTraverseCheck.c)
 *     IopIsSecurityContextAppContainer @ 0x1405052CC (IopIsSecurityContextAppContainer.c)
 *     PfpPrivSourceEnum @ 0x1405EEBC8 (PfpPrivSourceEnum.c)
 *     PopPowerRequestActionInfo @ 0x1407000C0 (PopPowerRequestActionInfo.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x140207F80 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall SeIsAppContainerOrIdentifyLevelContext(PSECURITY_SUBJECT_CONTEXT SubjectContext, _BYTE *a2)
{
  PSECURITY_SUBJECT_CONTEXT p_SubjectContexta; // rsi
  unsigned int v5; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  *a2 = 1;
  memset(&SubjectContexta, 0, sizeof(SubjectContexta));
  if ( !SubjectContext )
    SeCaptureSubjectContext(&SubjectContexta);
  p_SubjectContexta = &SubjectContexta;
  if ( SubjectContext )
    p_SubjectContexta = SubjectContext;
  if ( SeAccessCheck(
         SeNullDaclSd,
         p_SubjectContexta,
         0,
         1u,
         0,
         0LL,
         (PGENERIC_MAPPING)&SystemContextGenericMapping,
         1,
         &GrantedAccess,
         &AccessStatus) )
  {
    *a2 = 0;
  }
  v5 = 0;
  if ( AccessStatus != -1073741790 )
    v5 = AccessStatus;
  if ( !SubjectContext )
    SeReleaseSubjectContext(p_SubjectContexta);
  return v5;
}
