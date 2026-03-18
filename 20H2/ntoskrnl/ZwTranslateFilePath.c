/*
 * XREFs of ZwTranslateFilePath @ 0x1403FBA10
 * Callers:
 *     ExpSetBootEntry @ 0x140953930 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x140954124 (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x140975610 (BiTranslateFilePath.c)
 *     SiBootEntryGetNtFilePath @ 0x14097632C (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTranslateFilePath(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
