/*
 * XREFs of _RtlSetLastWin32ErrorAndNtStatusFromNtStatus@4 @ 0x4B2DAAE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 */

int __stdcall RtlSetLastWin32ErrorAndNtStatusFromNtStatus(NTSTATUS Status)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(Status);
  return RtlSetLastWin32Error(v1);
}
