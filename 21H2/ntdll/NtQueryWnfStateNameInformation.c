/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1800A02D0
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x1800639B0 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x180083490 (RtlQueryWnfMetaNotification.c)
 *     SignalStartWerSvc @ 0x1800DD6C8 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801022B0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryWnfStateNameInformation()
{
  __int64 result; // rax

  result = 357LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
