/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x1406BBE50
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140558960 (IoRevokeHandlesForProcess.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 139);
}
