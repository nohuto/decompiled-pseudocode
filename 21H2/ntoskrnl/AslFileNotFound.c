/*
 * XREFs of AslFileNotFound @ 0x1408415E4
 * Callers:
 *     AslFileMappingCreate @ 0x14075E160 (AslFileMappingCreate.c)
 *     SdbpCheckMatchingFiles @ 0x1408414E0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A11614 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
