/*
 * XREFs of ZwTranslateFilePath @ 0x1403F6E40
 * Callers:
 *     ExpSetBootEntry @ 0x14094DB70 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14094E364 (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x14096F840 (BiTranslateFilePath.c)
 *     SiBootEntryGetNtFilePath @ 0x14097055C (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTranslateFilePath(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
