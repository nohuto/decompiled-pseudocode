/*
 * XREFs of ZwSetValueKey @ 0x18009E1F0
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007630C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x1800809C8 (RXactpCommit.c)
 *     RtlWriteRegistryValue @ 0x18008B0D0 (RtlWriteRegistryValue.c)
 *     RtlInitializeRXact @ 0x18008BB70 (RtlInitializeRXact.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D4614 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E25E0 (RtlSetImageMitigationPolicy.c)
 *     RtlApplyRXact @ 0x1800E63A0 (RtlApplyRXact.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F1068 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1230 (RtlpSetPreferredUILanguages.c)
 *     RtlpNtSetValueKey @ 0x180107DA0 (RtlpNtSetValueKey.c)
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
