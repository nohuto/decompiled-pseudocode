/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1403FAD50
 * Callers:
 *     SiTranslateSymbolicLink @ 0x1406C667C (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x140776F10 (SiGetBiosSystemDisk.c)
 *     BiTranslateSymbolicLink @ 0x14077EDDC (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140897820 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1409553EC (ExpTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
