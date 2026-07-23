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
