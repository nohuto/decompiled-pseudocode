/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x1406C1760
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140505650 (IoRevokeHandlesForProcess.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 139);
}
