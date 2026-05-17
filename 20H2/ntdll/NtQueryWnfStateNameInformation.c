/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x18009FD20
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x1800624C0 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x180082D80 (RtlQueryWnfMetaNotification.c)
 *     SignalStartWerSvc @ 0x1800DD918 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180102410 (RtlRaiseCustomSystemEventTrigger.c)
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
