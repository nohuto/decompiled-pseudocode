/*
 * XREFs of ZwTraceEvent @ 0x1403F8D30
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
