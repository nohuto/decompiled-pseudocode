/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x1405E5150
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140205700 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x14023D670 (SeReportSecurityEventWithSubCategory.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372D04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SeAuditingFileEventsWithContextEx @ 0x1405953C0 (SeAuditingFileEventsWithContextEx.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x1405E28B0 (SeAuditingHardLinkEventsWithContext.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405E352C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1405E4E14 (SepAdtAuditObjectAccessWithContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405F44C0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeObjectReferenceAuditAlarm @ 0x1405F745C (SeObjectReferenceAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1406DC5F8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1407CE490 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140921338 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140921CD8 (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditingFileOrGlobalEvents @ 0x140923060 (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x140205770 (SepAuditingEnabledForSubcategory.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1405E51D0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1409232CC (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x140928130 (SepAuditFailed.c)
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
