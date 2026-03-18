/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x14068D710
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x14026A880 (SeReportSecurityEventWithSubCategory.c)
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140297CE0 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370DB4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SeAuditingFileEventsWithContextEx @ 0x140591920 (SeAuditingFileEventsWithContextEx.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405ECB20 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406267D4 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406286A0 (SepAdtAuditObjectAccessWithContext.c)
 *     SeObjectReferenceAuditAlarm @ 0x14066AB5C (SeObjectReferenceAuditAlarm.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x140700BD0 (SeAuditingHardLinkEventsWithContext.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14070A1F8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1407BFC00 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091B6B8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091C058 (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditingFileOrGlobalEvents @ 0x14091D3E0 (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x140297D50 (SepAuditingEnabledForSubcategory.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14068D790 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x14091D64C (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x1409220D0 (SepAuditFailed.c)
 */

__int64 __fastcall SepAdtAuditThisEventWithContext(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4)
{
  __int64 v7; // rbx
  bool v8; // di
  BOOL v10; // eax
  __int64 v11; // rdx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  PACCESS_TOKEN ClientToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-38h] BYREF
  bool v15; // [rsp+70h] [rbp+8h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (unsigned int)a1 <= 8 )
  {
    v10 = a2 != 0;
    v11 = v10 | 0x10u;
    if ( !a3 )
      v11 = v10;
    return SepAdtAuditThisEventByCategoryWithContext(a1, v11, a4);
  }
  else
  {
    v7 = (unsigned int)(a1 - 100);
    v15 = SepAuditingEnabledForSubcategory(a1, a2, a3);
    v8 = v15;
    if ( SepTokenPolicyCounter[v7] )
    {
      if ( a4 )
      {
        p_SubjectContext = a4;
      }
      else
      {
        p_SubjectContext = &SubjectContext;
        SeCaptureSubjectContext(&SubjectContext);
      }
      ClientToken = p_SubjectContext->ClientToken;
      if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
      {
        SepAdtIncorporatePerUserPolicy(v7, a2, a3, (_DWORD)ClientToken, (__int64)&v15);
        v8 = v15;
      }
      else
      {
        SepAuditFailed(3221225596LL);
      }
      if ( !a4 )
        SeReleaseSubjectContext(p_SubjectContext);
    }
    return v8;
  }
}
