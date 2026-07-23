/*
 * XREFs of ZwCreateEvent @ 0x1403F8A70
 * Callers:
 *     CmpCreateEvent @ 0x14064FAD0 (CmpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x140789810 (IoCreateNotificationEvent.c)
 *     MiCreateMemoryEvent @ 0x1407962E0 (MiCreateMemoryEvent.c)
 *     PiDrvDbCreateNode @ 0x1407994AC (PiDrvDbCreateNode.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407A2124 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     SepInitializationPhase1 @ 0x1407A88DC (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x1407BBA4C (PfpCreateEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x1407C62AC (DbgkpCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x1407CD580 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407CE108 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x140896440 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x140908EA0 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x14095B230 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x14095BB50 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
