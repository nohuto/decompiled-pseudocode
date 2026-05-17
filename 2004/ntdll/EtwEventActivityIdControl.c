/*
 * XREFs of EtwEventActivityIdControl @ 0x18005B690
 * Callers:
 *     EtwEventWriteStartScenario @ 0x180089D00 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180050770 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A0660 (NtTraceControl.c)
 */

__int64 __fastcall EtwEventActivityIdControl(int a1, _GUID *p_ActivityId)
{
  ULONG v2; // ebx
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx
  NTSTATUS v6; // eax
  int v7; // ecx
  _GUID ActivityId; // xmm1
  ULONG v9; // eax
  char v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !p_ActivityId )
    return 87LL;
  if ( a1 == 2 )
  {
    NtCurrentTeb()->ActivityId = *p_ActivityId;
    return 0;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    result = 0LL;
    *p_ActivityId = NtCurrentTeb()->ActivityId;
    return result;
  }
  v5 = v4 - 2;
  if ( !v5 )
    goto LABEL_9;
  v7 = v5 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v6 = -1073741811;
      goto LABEL_17;
    }
    *p_ActivityId = NtCurrentTeb()->ActivityId;
    p_ActivityId = &NtCurrentTeb()->ActivityId;
LABEL_9:
    v6 = NtTraceControl(12LL, 0LL, 0LL, p_ActivityId, 16, &v10);
    if ( !v6 )
      return 0;
LABEL_17:
    v9 = RtlNtStatusToDosError(v6);
    v2 = v9;
    if ( v9 )
      RtlSetLastWin32Error(v9);
    return v2;
  }
  ActivityId = NtCurrentTeb()->ActivityId;
  NtCurrentTeb()->ActivityId = *p_ActivityId;
  result = 0LL;
  *p_ActivityId = ActivityId;
  return result;
}
