/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x1406CC4E0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140501730 (IoRevokeHandlesForProcess.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 139);
}
