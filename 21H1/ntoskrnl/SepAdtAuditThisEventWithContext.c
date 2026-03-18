/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x1405E3400
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140205530 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1402D7680 (SeReportSecurityEventWithSubCategory.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370184 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SeAuditingFileEventsWithContextEx @ 0x140591230 (SeAuditingFileEventsWithContextEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1405E2F30 (SepAdtAuditObjectAccessWithContext.c)
 *     SeObjectReferenceAuditAlarm @ 0x14061587C (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140622140 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406C6290 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x1406DDF40 (SeAuditingHardLinkEventsWithContext.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1406E6388 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1407BCA90 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091A408 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091ADA8 (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditingFileOrGlobalEvents @ 0x14091C130 (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x1402055A0 (SepAuditingEnabledForSubcategory.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1405E3480 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x14091C39C (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x140920E20 (SepAuditFailed.c)
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
