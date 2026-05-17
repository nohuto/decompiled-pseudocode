/*
 * XREFs of NtDeleteKey @ 0x18009F0B0
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007630C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x1800809C8 (RXactpCommit.c)
 *     RtlInitializeRXact @ 0x18008BB70 (RtlInitializeRXact.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E3858 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFC70 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800F0BC0 (RtlpSetInstallLanguage.c)
 *     RtlpNtMakeTemporaryKey @ 0x180107DD0 (RtlpNtMakeTemporaryKey.c)
 * Callees:
 *     <none>
 */

__int64 NtDeleteKey()
{
  __int64 result; // rax

  result = 212LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
