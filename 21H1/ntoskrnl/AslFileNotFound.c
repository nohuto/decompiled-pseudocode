/*
 * XREFs of AslFileNotFound @ 0x14073EE08
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14073D100 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreate @ 0x1407414C8 (AslFileMappingCreate.c)
 *     SdbpCheckMatchingTextEntry @ 0x140960284 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
