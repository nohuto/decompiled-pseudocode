/*
 * XREFs of NtPowerInformation @ 0x18009D9E0
 * Callers:
 *     RtlpSystemBootStatusRequest @ 0x180085814 (RtlpSystemBootStatusRequest.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1800EDAB0 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1800EDF40 (RtlRestoreSystemBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x1800EDFA0 (RtlUnlockBootStatusData.c)
 *     RtlpRecordBootStatusData @ 0x1800EE2D4 (RtlpRecordBootStatusData.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x18010ADA4 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x18010AEA4 (RtlpDestroyExecutionRequiredRequest.c)
 * Callees:
 *     <none>
 */

__int64 NtPowerInformation()
{
  __int64 result; // rax

  result = 95LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
