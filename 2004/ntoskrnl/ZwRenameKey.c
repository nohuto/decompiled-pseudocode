/*
 * XREFs of ZwRenameKey @ 0x1403F6400
 * Callers:
 *     CmpDoReDoRenameKey @ 0x14087EF7C (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
