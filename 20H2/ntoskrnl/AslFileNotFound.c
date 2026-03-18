/*
 * XREFs of AslFileNotFound @ 0x14074F568
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14074D860 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreate @ 0x140751C28 (AslFileMappingCreate.c)
 *     SdbpCheckMatchingTextEntry @ 0x1409673F4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
