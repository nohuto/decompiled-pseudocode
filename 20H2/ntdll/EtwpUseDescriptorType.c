/*
 * XREFs of EtwpUseDescriptorType @ 0x180110AD0
 * Callers:
 *     EtwEventSetInformation @ 0x180042B30 (EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800507C0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A0900 (NtTraceControl.c)
 */

__int64 __fastcall EtwpUseDescriptorType(__int64 a1, char *a2)
{
  __int64 v2; // rdi
  char v3; // si
  ULONG v4; // ebx
  NTSTATUS v5; // eax

  if ( !HIWORD(a1)
    || (v2 = a1 & 0xFFFFFFFFFFFFLL, (a1 & 1) != 0)
    || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    v4 = 6;
    goto LABEL_11;
  }
  v3 = *a2;
  if ( (unsigned __int8)*a2 >= 2u )
  {
    v4 = 87;
LABEL_11:
    RtlSetLastWin32Error(v4);
    return v4;
  }
  v5 = NtTraceControl();
  if ( v5 )
  {
    v4 = RtlNtStatusToDosError(v5);
    if ( v4 )
      goto LABEL_11;
  }
  else
  {
    v4 = 0;
  }
  *(_WORD *)(v2 + 98) &= ~0x4000u;
  *(_WORD *)(v2 + 98) |= (v3 & 1) << 14;
  return v4;
}
