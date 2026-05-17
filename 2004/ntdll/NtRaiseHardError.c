/*
 * XREFs of NtRaiseHardError @ 0x18009FAE0
 * Callers:
 *     LdrpReportError @ 0x18003F2A4 (LdrpReportError.c)
 *     LdrpMapDllNtFileName @ 0x18005FAD4 (LdrpMapDllNtFileName.c)
 *     LdrpProcessMachineMismatch @ 0x180086F98 (LdrpProcessMachineMismatch.c)
 *     LdrpInitializationFailure @ 0x1800D0998 (LdrpInitializationFailure.c)
 * Callees:
 *     <none>
 */

__int64 NtRaiseHardError()
{
  __int64 result; // rax

  result = 359LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
