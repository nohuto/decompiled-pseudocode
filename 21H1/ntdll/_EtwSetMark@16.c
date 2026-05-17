/*
 * XREFs of _EtwSetMark@16 @ 0x4B2AA6D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 */

ULONG __stdcall EtwSetMark(int a1, int a2, int a3, int a4)
{
  NTSTATUS v4; // eax

  v4 = NtTraceEvent(a1, 1536, a4, a3);
  if ( v4 )
    return RtlNtStatusToDosError(v4);
  else
    return 0;
}
