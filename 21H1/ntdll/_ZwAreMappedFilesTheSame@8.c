/*
 * XREFs of _ZwAreMappedFilesTheSame@8 @ 0x4B2F3260
 * Callers:
 *     _LdrpFindLoadedDllByMappingLockHeld@16 @ 0x4B2CD468 (_LdrpFindLoadedDllByMappingLockHeld@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  return Wow64SystemServiceCall();
}
