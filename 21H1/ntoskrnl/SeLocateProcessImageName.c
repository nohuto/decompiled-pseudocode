/*
 * XREFs of SeLocateProcessImageName @ 0x14064FF60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14064FF78 (PsGetAllocatedFullProcessImageNameEx.c)
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  return PsGetAllocatedFullProcessImageNameEx(Process, pImageFileName);
}
