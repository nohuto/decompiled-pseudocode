/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x1406312F0
 * Callers:
 *     ObInitProcess @ 0x1406301EC (ObInitProcess.c)
 *     PspInsertProcess @ 0x1406302B8 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x140631204 (SepAdtTokenRightAdjusted.c)
 *     ObCompleteObjectDuplication @ 0x14065718C (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PiPnpRtlSetObjectProperty @ 0x1407346EC (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14073F2E0 (PiPnpRtlSetDeviceRegProperty.c)
 *     PipClearDevNodeProblem @ 0x14073F500 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1407424D8 (PipSetDevNodeProblem.c)
 *     SeAssignPrimaryToken @ 0x1407B6F70 (SeAssignPrimaryToken.c)
 *     SeExchangePrimaryToken @ 0x1407B6FE4 (SeExchangePrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091FB8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditingPlugAndPlayEvents @ 0x1409231A4 (SeAuditingPlugAndPlayEvents.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x14023D8DC (SepAuditingForSubCategory.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1409232CC (SepAdtIncorporatePerUserPolicy.c)
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
