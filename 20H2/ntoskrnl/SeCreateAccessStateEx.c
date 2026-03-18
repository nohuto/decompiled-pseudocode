/*
 * XREFs of SeCreateAccessStateEx @ 0x1405FDD90
 * Callers:
 *     SeCreateAccessState @ 0x1405FDD40 (SeCreateAccessState.c)
 *     PspInsertProcess @ 0x1406302B8 (PspInsertProcess.c)
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 *     PspCombineSecurityDomains @ 0x140699828 (PspCombineSecurityDomains.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B309C (PspOneDirectionSecurityDomainCombine.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406C8BF0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1408725DC (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x140211030 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140602A50 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessStateEx(
        struct _KTHREAD *a1,
        struct _KPROCESS *a2,
        _QWORD *a3,
        _QWORD *a4,
        ACCESS_MASK a5,
        GENERIC_MAPPING *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT v9; // [rsp+30h] [rbp-28h] BYREF

  memset(&v9, 0, sizeof(v9));
  SeCaptureSubjectContextEx(a1, a2, &v9);
  return SepCreateAccessStateFromSubjectContext(&v9, a3, a4, a5, a6);
}
