/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x18009FA80
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x1800623B0 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x180082C80 (RtlQueryWnfMetaNotification.c)
 *     SignalStartWerSvc @ 0x1800DD578 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180101F00 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryWnfStateNameInformation()
{
  __int64 result; // rax

  result = 356LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
