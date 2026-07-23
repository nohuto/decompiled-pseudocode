/*
 * XREFs of ZwQueryAttributesFile @ 0x1403F8910
 * Callers:
 *     BiDoesHiveExist @ 0x140782084 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140875734 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x140971EF0 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
