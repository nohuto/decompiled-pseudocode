/*
 * XREFs of ZwRenameKey @ 0x1403FAFD0
 * Callers:
 *     CmpDoReDoRenameKey @ 0x140884B08 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
