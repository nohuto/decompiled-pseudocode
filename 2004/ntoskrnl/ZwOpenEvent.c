/*
 * XREFs of ZwOpenEvent @ 0x1403F3DC0
 * Callers:
 *     PspShutdownCsrProcess @ 0x140903280 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
