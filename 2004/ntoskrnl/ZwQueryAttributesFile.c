/*
 * XREFs of ZwQueryAttributesFile @ 0x1403F3D60
 * Callers:
 *     BiDoesHiveExist @ 0x140773A84 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14086FBE4 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x14096C120 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAttributesFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
