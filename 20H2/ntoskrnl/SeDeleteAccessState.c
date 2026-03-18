/*
 * XREFs of SeDeleteAccessState @ 0x140601D90
 * Callers:
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     PsOpenProcess @ 0x1406023B0 (PsOpenProcess.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     NtGetNextThread @ 0x1406D61C0 (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x140786AD0 (NtGetNextProcess.c)
 *     CmKeyBodyRemapToVirtual @ 0x140871FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x14087276C (CmpDoBuildVirtualStack.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091EE60 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140210E90 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
