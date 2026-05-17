/*
 * XREFs of ZwCreateEvent @ 0x18009DF40
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800494AC (EtwpInitLoggerContext.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800639B0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180065030 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     _LdrpInitialize @ 0x180075CBC (_LdrpInitialize.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007D484 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007E400 (EtwpRegisterTpNotificationOnce.c)
 *     LdrpCreateLoaderEvents @ 0x18007EB40 (LdrpCreateLoaderEvents.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CECD0 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D5BB0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6140 (RtlpProcessReflectionStartup.c)
 *     WerpCreateCompletionEvent @ 0x1800DDA20 (WerpCreateCompletionEvent.c)
 *     RtlCreateUmsCompletionList @ 0x1800F6F00 (RtlCreateUmsCompletionList.c)
 *     RtlpCtContextInit @ 0x180102564 (RtlpCtContextInit.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateEvent()
{
  __int64 result; // rax

  result = 72LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
