/*
 * XREFs of SeCreateAccessStateEx @ 0x140613790
 * Callers:
 *     SeCreateAccessState @ 0x140613740 (SeCreateAccessState.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14064CB58 (PspOneDirectionSecurityDomainCombine.c)
 *     PspInsertProcess @ 0x14066F7BC (PspInsertProcess.c)
 *     PspCombineSecurityDomains @ 0x1406D1398 (PspCombineSecurityDomains.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D2F90 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086B9F0 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x140206730 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140602DE0 (SeCaptureSubjectContextEx.c)
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
