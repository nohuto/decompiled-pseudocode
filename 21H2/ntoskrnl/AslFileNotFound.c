/*
 * XREFs of AslFileNotFound @ 0x14075633C
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1407544C0 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreate @ 0x1407589F8 (AslFileMappingCreate.c)
 *     SdbpCheckMatchingTextEntry @ 0x140964C94 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
