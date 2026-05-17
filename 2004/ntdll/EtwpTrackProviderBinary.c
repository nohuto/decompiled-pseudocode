/*
 * XREFs of EtwpTrackProviderBinary @ 0x180081418
 * Callers:
 *     EtwEventSetInformation @ 0x180042AE0 (EtwEventSetInformation.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x180050770 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     EtwpTrackRegBinaryInfo @ 0x1800814DC (EtwpTrackRegBinaryInfo.c)
 *     NtTraceControl @ 0x1800A0660 (NtTraceControl.c)
 */

__int64 __fastcall EtwpTrackProviderBinary(__int64 a1)
{
  __int64 v1; // rdi
  NTSTATUS v2; // eax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  ULONG v6; // esi
  int UniqueThread; // r8d
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  if ( !HIWORD(a1)
    || (v1 = a1 & 0xFFFFFFFFFFFFLL, (a1 & 1) != 0)
    || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    v6 = 6;
    goto LABEL_11;
  }
  v10 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x58);
  v2 = NtTraceControl(26LL, &v10, 8LL, 0LL, 0, &v9);
  if ( v2 )
  {
    v6 = RtlNtStatusToDosError(v2);
    if ( !v6 )
      goto LABEL_6;
LABEL_11:
    RtlSetLastWin32Error(v6);
    return v6;
  }
  v6 = 0;
LABEL_6:
  RtlAcquireSRWLockExclusive(v1 + 64, v3, v4, v5);
  UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
  *(_WORD *)(v1 + 98) |= 0x8000u;
  *(_DWORD *)(v1 + 80) = UniqueThread;
  EtwpTrackRegBinaryInfo(v1);
  *(_DWORD *)(v1 + 80) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v1 + 64));
  return v6;
}
