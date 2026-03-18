/*
 * XREFs of SeLocateProcessImageName @ 0x1406B80F0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1406B8108 (PsGetAllocatedFullProcessImageNameEx.c)
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  return PsGetAllocatedFullProcessImageNameEx(Process, pImageFileName);
}
