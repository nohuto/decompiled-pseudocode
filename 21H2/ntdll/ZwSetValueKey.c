/*
 * XREFs of ZwSetValueKey @ 0x18009E230
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007630C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x1800809C8 (RXactpCommit.c)
 *     RtlWriteRegistryValue @ 0x18008B0D0 (RtlWriteRegistryValue.c)
 *     RtlInitializeRXact @ 0x18008BB70 (RtlInitializeRXact.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D4654 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E2620 (RtlSetImageMitigationPolicy.c)
 *     RtlApplyRXact @ 0x1800E63E0 (RtlApplyRXact.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F10A8 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1270 (RtlpSetPreferredUILanguages.c)
 *     RtlpNtSetValueKey @ 0x180107DE0 (RtlpNtSetValueKey.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetValueKey()
{
  __int64 result; // rax

  result = 96LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
