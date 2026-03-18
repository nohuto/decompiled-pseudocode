/*
 * XREFs of SeCreateAccessStateEx @ 0x140668A70
 * Callers:
 *     PspInsertProcess @ 0x14061809C (PspInsertProcess.c)
 *     SeCreateAccessState @ 0x140668A20 (SeCreateAccessState.c)
 *     PspInsertThread @ 0x1406AE2E4 (PspInsertThread.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B5B38 (PspOneDirectionSecurityDomainCombine.c)
 *     PspCombineSecurityDomains @ 0x1406F22A4 (PspCombineSecurityDomains.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406F5B60 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086CD40 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x140299240 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x14067AEC0 (SeCaptureSubjectContextEx.c)
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
