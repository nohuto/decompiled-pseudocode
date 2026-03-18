/*
 * XREFs of SeLockSubjectContext @ 0x1406168B0
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140223E30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x14022AA60 (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x140323A1C (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372D04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     ObCheckObjectAccess @ 0x1405E0970 (ObCheckObjectAccess.c)
 *     PspIsContextAdmin @ 0x1405E249C (PspIsContextAdmin.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObpCheckObjectReference @ 0x1405F53C4 (ObpCheckObjectReference.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     ObCheckCreateObjectAccess @ 0x1406BCF50 (ObCheckCreateObjectAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1406C3268 (CmpCheckKeyBodyAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14071B5E0 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x1408DF970 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x140937F88 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x14095A9F4 (CMFCheckAccess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
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
