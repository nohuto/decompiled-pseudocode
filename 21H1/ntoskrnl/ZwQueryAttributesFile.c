/*
 * XREFs of ZwQueryAttributesFile @ 0x1403F2AD0
 * Callers:
 *     BiDoesHiveExist @ 0x140771674 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14086E124 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x14096AD80 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAttributesFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
