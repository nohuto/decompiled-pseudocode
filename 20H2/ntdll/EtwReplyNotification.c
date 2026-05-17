/*
 * XREFs of EtwReplyNotification @ 0x1800019A0
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800452F0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A0900 (NtTraceControl.c)
 */

__int64 __fastcall EtwReplyNotification(__int64 a1)
{
  ULONG v1; // ebx
  NTSTATUS v2; // eax
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = NtTraceControl(18LL, a1, *(unsigned int *)(a1 + 4), 0LL, 0, &v4);
  if ( v2 )
    v1 = RtlNtStatusToDosError(v2);
  EtwpReplySend = 1;
  return v1;
}
