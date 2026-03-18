/*
 * XREFs of ZwTranslateFilePath @ 0x1403F5BB0
 * Callers:
 *     ExpSetBootEntry @ 0x14094C7D0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14094CFC4 (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x14096E4A0 (BiTranslateFilePath.c)
 *     SiBootEntryGetNtFilePath @ 0x14096F1BC (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTranslateFilePath(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
