/*
 * XREFs of ZwCreateEvent @ 0x18009DF00
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800494AC (EtwpInitLoggerContext.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800639B0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180065030 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     _LdrpInitialize @ 0x180075CBC (_LdrpInitialize.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007D484 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007E400 (EtwpRegisterTpNotificationOnce.c)
 *     LdrpCreateLoaderEvents @ 0x18007EB40 (LdrpCreateLoaderEvents.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CEC90 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D5B70 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6100 (RtlpProcessReflectionStartup.c)
 *     WerpCreateCompletionEvent @ 0x1800DD9E0 (WerpCreateCompletionEvent.c)
 *     RtlCreateUmsCompletionList @ 0x1800F6EC0 (RtlCreateUmsCompletionList.c)
 *     RtlpCtContextInit @ 0x180102524 (RtlpCtContextInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  NTSTATUS result; // eax

  result = 72;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
