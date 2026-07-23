/*
 * XREFs of ZwQueryAttributesFile @ 0x1403F2AD0
 * Callers:
 *     BiDoesHiveExist @ 0x140771674 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14086E124 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x14096AD80 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
