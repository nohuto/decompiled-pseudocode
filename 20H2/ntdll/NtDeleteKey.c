/*
 * XREFs of NtDeleteKey @ 0x18009EB00
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800752DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x1800800A8 (RXactpCommit.c)
 *     RtlInitializeRXact @ 0x18008B570 (RtlInitializeRXact.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E39C8 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFDE0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800F0D30 (RtlpSetInstallLanguage.c)
 *     RtlpNtMakeTemporaryKey @ 0x180107F30 (RtlpNtMakeTemporaryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDeleteKey(HANDLE KeyHandle)
{
  NTSTATUS result; // eax

  result = 211;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
