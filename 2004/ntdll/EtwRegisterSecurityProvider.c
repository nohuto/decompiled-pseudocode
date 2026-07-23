/*
 * XREFs of EtwRegisterSecurityProvider @ 0x18008BEA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180050770 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A0660 (NtTraceControl.c)
 */

ULONG EtwRegisterSecurityProvider(void)
{
  NTSTATUS v0; // eax
  ULONG v1; // ebx
  LONG v3; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  v0 = NtTraceControl(EtwRegisterSecurityProv, 0LL, 0, 0LL, 0, &ReturnLength);
  if ( !v0 )
    return 0;
  v3 = RtlNtStatusToDosError(v0);
  v1 = v3;
  if ( v3 )
    RtlSetLastWin32Error(v3);
  return v1;
}
