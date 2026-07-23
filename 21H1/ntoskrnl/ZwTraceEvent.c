/*
 * XREFs of ZwTraceEvent @ 0x1403F2EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTraceEvent(HANDLE TraceHandle, ULONG Flags, ULONG FieldSize, PVOID Fields)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TraceHandle);
}
