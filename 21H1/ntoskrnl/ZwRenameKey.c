/*
 * XREFs of ZwRenameKey @ 0x1403F5170
 * Callers:
 *     CmpDoReDoRenameKey @ 0x14087DC8C (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
