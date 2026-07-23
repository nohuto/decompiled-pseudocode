/*
 * XREFs of EtwSetMark @ 0x18008A8C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

ULONG __cdecl EtwSetMark(TRACEHANDLE TraceHandle, PETW_SET_MARK_INFORMATION MarkInfo, ULONG Size)
{
  NTSTATUS v3; // ecx
  ULONG result; // eax

  v3 = NtTraceEvent((HANDLE)TraceHandle, 0x600u, Size, MarkInfo);
  result = 0;
  if ( v3 )
    return RtlNtStatusToDosError(v3);
  return result;
}
