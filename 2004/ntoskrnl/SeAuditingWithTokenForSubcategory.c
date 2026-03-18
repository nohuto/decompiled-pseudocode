/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x1406190D0
 * Callers:
 *     ObDuplicateObject @ 0x1405E96C0 (ObDuplicateObject.c)
 *     ObInitProcess @ 0x140617FD0 (ObInitProcess.c)
 *     PspInsertProcess @ 0x14061809C (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x140618FE4 (SepAdtTokenRightAdjusted.c)
 *     ObCompleteObjectDuplication @ 0x14062607C (ObCompleteObjectDuplication.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     PiPnpRtlSetObjectProperty @ 0x140725C5C (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14072FEDC (PiPnpRtlSetDeviceRegProperty.c)
 *     PipClearDevNodeProblem @ 0x14073015C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140733048 (PipSetDevNodeProblem.c)
 *     SeAssignPrimaryToken @ 0x1407A5EA4 (SeAssignPrimaryToken.c)
 *     SeExchangePrimaryToken @ 0x1407A5F18 (SeExchangePrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140919F0C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditingPlugAndPlayEvents @ 0x14091D524 (SeAuditingPlugAndPlayEvents.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x14026AAEC (SepAuditingForSubCategory.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x14091D64C (SepAdtIncorporatePerUserPolicy.c)
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
