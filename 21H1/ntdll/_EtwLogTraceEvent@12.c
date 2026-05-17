/*
 * XREFs of _EtwLogTraceEvent@12 @ 0x4B380CF0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @EtwpTraceUmEvent@20 @ 0x4B381076 (@EtwpTraceUmEvent@20.c)
 */

NTSTATUS __stdcall EtwLogTraceEvent(__int64 a1, int a2)
{
  NTSTATUS result; // eax

  if ( !a2 )
    return 87;
  if ( (a1 & 0x1000000) != 0 )
    return EtwpTraceUmEvent(a1, HIDWORD(a1), -1073086464);
  result = NtTraceEvent((unsigned __int16)a1, 256, 48, a2);
  if ( result )
    return RtlNtStatusToDosError(result);
  return result;
}
