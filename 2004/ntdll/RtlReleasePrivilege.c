/*
 * XREFs of RtlReleasePrivilege @ 0x180080A80
 * Callers:
 *     LdrpMinimalMapModule @ 0x180014C38 (LdrpMinimalMapModule.c)
 *     GetProcessIptTrace @ 0x180117B54 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x180117CB0 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x18009CFB0 (NtSetInformationThread.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtAdjustPrivilegesToken @ 0x18009D630 (NtAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlReleasePrivilege(HANDLE *a1)
{
  int v2; // ecx
  __int64 v3; // r8
  HANDLE v5; // rcx

  v2 = *((_DWORD *)a1 + 8);
  if ( (v2 & 3) != 1 )
  {
    NtAdjustPrivilegesToken(*a1, 0LL, a1[2], 0LL, 0LL, 0LL);
    v2 = *((_DWORD *)a1 + 8);
  }
  if ( (v2 & 1) != 0 )
  {
    NtSetInformationThread(-2LL, 5LL, a1 + 1, 8LL);
    v5 = a1[1];
    if ( v5 )
      NtClose(v5);
  }
  v3 = (__int64)a1[2];
  if ( (HANDLE *)v3 != (HANDLE *)((char *)a1 + 36) )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
  NtClose(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
}
