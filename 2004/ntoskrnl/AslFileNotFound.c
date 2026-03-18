/*
 * XREFs of AslFileNotFound @ 0x140740988
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14073EC80 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreate @ 0x140743048 (AslFileMappingCreate.c)
 *     SdbpCheckMatchingTextEntry @ 0x140961624 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
