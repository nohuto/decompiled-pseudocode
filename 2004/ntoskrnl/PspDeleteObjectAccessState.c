/*
 * XREFs of PspDeleteObjectAccessState @ 0x140906D0C
 * Callers:
 *     PspInsertProcess @ 0x14061809C (PspInsertProcess.c)
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407BB910 (PspCreateProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x1402990A0 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 */

void __fastcall PspDeleteObjectAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
