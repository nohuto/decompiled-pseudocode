/*
 * XREFs of EtwRegisterSecurityProvider @ 0x18008BEA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180050770 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A0660 (NtTraceControl.c)
 */

__int64 EtwRegisterSecurityProvider()
{
  NTSTATUS v0; // eax
  ULONG v1; // ebx
  ULONG v3; // eax
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = NtTraceControl(24LL, 0LL, 0LL, 0LL, 0, &v4);
  if ( v0 )
  {
    v3 = RtlNtStatusToDosError(v0);
    v1 = v3;
    if ( v3 )
      RtlSetLastWin32Error(v3);
  }
  else
  {
    return 0;
  }
  return v1;
}
