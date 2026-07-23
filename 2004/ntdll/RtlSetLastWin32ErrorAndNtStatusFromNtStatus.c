/*
 * XREFs of RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x180050750
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 */

void __cdecl RtlSetLastWin32ErrorAndNtStatusFromNtStatus(NTSTATUS Status)
{
  LONG v1; // eax

  v1 = RtlNtStatusToDosError(Status);
  RtlSetLastWin32Error(v1);
}
