/*
 * XREFs of SeLockSubjectContext @ 0x1406291F0
 * Callers:
 *     SepTrustLevelCheck @ 0x140204950 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402092C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     IopCreateSecurityCheck @ 0x1402F6C58 (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370184 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     ObpCheckObjectReference @ 0x1406137F0 (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1406170B0 (ObCheckCreateObjectAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14067DF00 (ObpVerifyCreatorAccessCheck.c)
 *     CmpCheckKeyBodyAccess @ 0x1406BB974 (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1406BBBB0 (ObCheckObjectAccess.c)
 *     PspIsContextAdmin @ 0x1406E20D8 (PspIsContextAdmin.c)
 *     ObpCheckTraverseAccess @ 0x1408D87C0 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x140930EA8 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140953564 (CMFCheckAccess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 */

void __stdcall SeLockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6), 1u);
  if ( SubjectContext->ClientToken )
  {
    v3 = KeGetCurrentThread();
    --v3->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->ClientToken + 6), 1u);
  }
}
