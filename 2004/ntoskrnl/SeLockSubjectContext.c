/*
 * XREFs of SeLockSubjectContext @ 0x1405F3C80
 * Callers:
 *     SepTrustLevelCheck @ 0x14026DC30 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14029BDD0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     IopCreateSecurityCheck @ 0x140333A14 (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370DB4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObCheckCreateObjectAccess @ 0x140668330 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x140668AD0 (ObpCheckObjectReference.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x1406DCBB4 (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1406DCDF0 (ObCheckObjectAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406F4050 (ObpVerifyCreatorAccessCheck.c)
 *     PspIsContextAdmin @ 0x140704A58 (PspIsContextAdmin.c)
 *     ObpCheckTraverseAccess @ 0x1408D9B30 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x140932158 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140954C34 (CMFCheckAccess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
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
