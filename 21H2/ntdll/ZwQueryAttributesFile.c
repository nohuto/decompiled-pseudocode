/*
 * XREFs of ZwQueryAttributesFile @ 0x18009DDE0
 * Callers:
 *     RtlDoesFileExists_UstrEx @ 0x18001A1F0 (RtlDoesFileExists_UstrEx.c)
 *     LdrpIsReparsePoint @ 0x180053670 (LdrpIsReparsePoint.c)
 *     LdrpGetNtPathFromDosPath @ 0x18006080C (LdrpGetNtPathFromDosPath.c)
 *     LdrAddDllDirectory @ 0x18008BD10 (LdrAddDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800DB6D0 (AvrfMiniLoadDll.c)
 *     LdrpResValidateFilePath @ 0x1800E4EF8 (LdrpResValidateFilePath.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryAttributesFile()
{
  __int64 result; // rax

  result = 61LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
