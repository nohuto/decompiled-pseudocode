/*
 * XREFs of PspDeleteObjectAccessState @ 0x140905A2C
 * Callers:
 *     PspInsertProcess @ 0x14066F7BC (PspInsertProcess.c)
 *     PsCreateMinimalProcess @ 0x14078748C (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407B87A0 (PspCreateProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140206590 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 */

void __fastcall PspDeleteObjectAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
