/*
 * XREFs of ZwSetValueKey @ 0x18009DA00
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800751DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x18007FFA8 (RXactpCommit.c)
 *     RtlWriteRegistryValue @ 0x18008A9D0 (RtlWriteRegistryValue.c)
 *     RtlInitializeRXact @ 0x18008B470 (RtlInitializeRXact.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D4504 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E2410 (RtlSetImageMitigationPolicy.c)
 *     RtlApplyRXact @ 0x1800E6100 (RtlApplyRXact.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F0D08 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0ED0 (RtlpSetPreferredUILanguages.c)
 *     RtlpNtSetValueKey @ 0x180107A30 (RtlpNtSetValueKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS result; // eax

  result = 96;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
