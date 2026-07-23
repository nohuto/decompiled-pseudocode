/*
 * XREFs of NtEnumerateKey @ 0x18009D450
 * Callers:
 *     RtlpProcessIFEOKeyFilter @ 0x180075400 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081C50 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpNtEnumerateSubKey @ 0x180081F60 (RtlpNtEnumerateSubKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E35F8 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF8D0 (RtlpCleanupRegistryKeys.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180106928 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1801077F8 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 50;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
