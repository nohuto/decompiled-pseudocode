/*
 * XREFs of ZwCreateTimer @ 0x1403F4E00
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x1408862B8 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
