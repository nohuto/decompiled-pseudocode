/*
 * XREFs of PspDeleteObjectAccessState @ 0x14090C92C
 * Callers:
 *     PspInsertProcess @ 0x1406302B8 (PspInsertProcess.c)
 *     PsCreateMinimalProcess @ 0x1407C1F84 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407CA1A0 (PspCreateProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140210E90 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 */

void __fastcall PspDeleteObjectAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
