/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x1406ED7E0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140501D80 (IoRevokeHandlesForProcess.c)
 *     ObDuplicateObject @ 0x1405E96C0 (ObDuplicateObject.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 139);
}
