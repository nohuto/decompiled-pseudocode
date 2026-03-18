/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x1406707F0
 * Callers:
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x14066B79C (ObCompleteObjectDuplication.c)
 *     ObInitProcess @ 0x14066F6F0 (ObInitProcess.c)
 *     PspInsertProcess @ 0x14066F7BC (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x140670704 (SepAdtTokenRightAdjusted.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     PiPnpRtlSetObjectProperty @ 0x14072AE1C (PiPnpRtlSetObjectProperty.c)
 *     PipSetDevNodeProblem @ 0x140734AA4 (PipSetDevNodeProblem.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1407367B0 (PiPnpRtlSetDeviceRegProperty.c)
 *     PipClearDevNodeProblem @ 0x140736A08 (PipClearDevNodeProblem.c)
 *     SeAssignPrimaryToken @ 0x1407A3654 (SeAssignPrimaryToken.c)
 *     SeExchangePrimaryToken @ 0x1407A36C8 (SeExchangePrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140918C5C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditingPlugAndPlayEvents @ 0x14091C274 (SeAuditingPlugAndPlayEvents.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x1402D78EC (SepAuditingForSubCategory.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x14091C39C (SepAdtIncorporatePerUserPolicy.c)
 */

char __fastcall SeAuditingWithTokenForSubcategory(int a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int PrimaryToken; // r9d
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+60h] [rbp+8h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v3 = (unsigned int)(a1 - 100);
  v8 = SepAuditingForSubCategory(a1, 1);
  if ( SepTokenPolicyCounter[v3] )
  {
    if ( a2 )
    {
      PrimaryToken = a2;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      PrimaryToken = (int)SubjectContext.PrimaryToken;
      if ( SubjectContext.ClientToken )
        PrimaryToken = (int)SubjectContext.ClientToken;
    }
    LOBYTE(v4) = 1;
    SepAdtIncorporatePerUserPolicy(v3, v4, 0, PrimaryToken, (__int64)&v8);
    if ( !a2 )
      SeReleaseSubjectContext(&SubjectContext);
  }
  return v8;
}
