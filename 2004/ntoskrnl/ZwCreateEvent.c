/*
 * XREFs of ZwCreateEvent @ 0x1403F3EC0
 * Callers:
 *     CmpCreateEvent @ 0x14061EE90 (CmpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x14077B210 (IoCreateNotificationEvent.c)
 *     MiCreateMemoryEvent @ 0x1407885D0 (MiCreateMemoryEvent.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14078BE74 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbCreateNode @ 0x14078CD6C (PiDrvDbCreateNode.c)
 *     SepInitializationPhase1 @ 0x1407995AC (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x1407ADB0C (PfpCreateEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x1407B7A20 (DbgkpCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x1407BECF4 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407BF878 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x140890950 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x140903280 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x140955470 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140955D90 (CMFSystemThreadRoutine.c)
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
