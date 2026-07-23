/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1403F4EF0
 * Callers:
 *     SiTranslateSymbolicLink @ 0x1406D22DC (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x140766520 (SiGetBiosSystemDisk.c)
 *     BiTranslateSymbolicLink @ 0x14076E3CC (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140890880 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x14094E28C (ExpTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
