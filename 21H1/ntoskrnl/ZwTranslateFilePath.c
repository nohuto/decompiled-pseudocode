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

NTSTATUS __cdecl ZwTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        PULONG OutputFilePathLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InputFilePath);
}
