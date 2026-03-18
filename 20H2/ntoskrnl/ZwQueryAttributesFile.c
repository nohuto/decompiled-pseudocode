/*
 * XREFs of ZwQueryAttributesFile @ 0x1403F8910
 * Callers:
 *     BiDoesHiveExist @ 0x140782084 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140875734 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x140971EF0 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAttributesFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
