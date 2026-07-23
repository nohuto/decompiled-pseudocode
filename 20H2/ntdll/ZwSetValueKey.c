/*
 * XREFs of ZwSetValueKey @ 0x18009DCA0
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800752DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x1800800A8 (RXactpCommit.c)
 *     RtlWriteRegistryValue @ 0x18008AAD0 (RtlWriteRegistryValue.c)
 *     RtlInitializeRXact @ 0x18008B570 (RtlInitializeRXact.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D48A0 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E27F0 (RtlSetImageMitigationPolicy.c)
 *     RtlApplyRXact @ 0x1800E6550 (RtlApplyRXact.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F1218 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F13E0 (RtlpSetPreferredUILanguages.c)
 *     RtlpNtSetValueKey @ 0x180107F40 (RtlpNtSetValueKey.c)
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
