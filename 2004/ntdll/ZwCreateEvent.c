/*
 * XREFs of ZwCreateEvent @ 0x18009D710
 * Callers:
 *     EtwpInitLoggerContext @ 0x180056D6C (EtwpInitLoggerContext.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800623B0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180063A30 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     _LdrpInitialize @ 0x180074B8C (_LdrpInitialize.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007C9E4 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007D960 (EtwpRegisterTpNotificationOnce.c)
 *     LdrpCreateLoaderEvents @ 0x18007E0A0 (LdrpCreateLoaderEvents.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CEB30 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D5A60 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D5FF0 (RtlpProcessReflectionStartup.c)
 *     WerpCreateCompletionEvent @ 0x1800DD8D0 (WerpCreateCompletionEvent.c)
 *     RtlCreateUmsCompletionList @ 0x1800F6B60 (RtlCreateUmsCompletionList.c)
 *     RtlpCtContextInit @ 0x1801021B4 (RtlpCtContextInit.c)
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
