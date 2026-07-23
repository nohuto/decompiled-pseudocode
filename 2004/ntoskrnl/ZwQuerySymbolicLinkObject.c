/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1403F6180
 * Callers:
 *     SiTranslateSymbolicLink @ 0x1406F329C (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x140768900 (SiGetBiosSystemDisk.c)
 *     BiTranslateSymbolicLink @ 0x1407707DC (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140891BA0 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x14094F62C (ExpTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
