/*
 * XREFs of EtwEventUnregister @ 0x180050380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl EtwEventUnregister(REGHANDLE RegHandle)
{
  return EtwNotificationUnregister(RegHandle, 0LL);
}
