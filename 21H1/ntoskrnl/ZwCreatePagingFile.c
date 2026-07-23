/*
 * XREFs of ZwCreatePagingFile @ 0x1403F39D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePagingFile(
        PUNICODE_STRING PageFileName,
        PLARGE_INTEGER MinimumSize,
        PLARGE_INTEGER MaximumSize,
        ULONG Priority)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PageFileName);
}
