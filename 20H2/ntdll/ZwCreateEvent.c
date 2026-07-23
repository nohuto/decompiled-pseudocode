/*
 * XREFs of ZwCreateEvent @ 0x18009D9B0
 * Callers:
 *     EtwpInitLoggerContext @ 0x180056DBC (EtwpInitLoggerContext.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800624C0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180063B40 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     _LdrpInitialize @ 0x180074C8C (_LdrpInitialize.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007CAE4 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007DA60 (EtwpRegisterTpNotificationOnce.c)
 *     LdrpCreateLoaderEvents @ 0x18007E1A0 (LdrpCreateLoaderEvents.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CED10 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D5E00 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6390 (RtlpProcessReflectionStartup.c)
 *     WerpCreateCompletionEvent @ 0x1800DDC70 (WerpCreateCompletionEvent.c)
 *     RtlCreateUmsCompletionList @ 0x1800F7070 (RtlCreateUmsCompletionList.c)
 *     RtlpCtContextInit @ 0x1801026C4 (RtlpCtContextInit.c)
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
